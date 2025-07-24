#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include "magic_horoscope.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->le_year->setValidator(new QIntValidator(1900, 2200, this));

    ui->gb_horoscope->setDisabled(true);

    MakeMagic();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MakeEasternHoroscope(int year){
    QString animal_east = GetAnimalForEasternCalendar(year);
    QString element_east = GetElementForEasternCalendar(year);
    QString text_for_east = QString("%1 — это год %2. Стихия/цвет — %3").arg(year).arg(animal_east).arg(element_east);
    ui->lbl_calendar->setText(text_for_east);
}
void MainWindow::MakeTibetanHoroscope(int year){
    QString animal_tibet = GetAnimalForTibetanCalendar(year);
    QString text_for_tibet = QString("%1 — это год %2").arg(year).arg(animal_tibet);
    ui->lbl_calendar->setText(text_for_tibet);
}
void MainWindow::MakeZoroastrianHoroscope(int year){
    QString animal_zoro = GetAnimalForZoroastrianCalendar(year);
    QString text_for_zoro = QString("%1 — это год %2").arg(year).arg(animal_zoro);
    ui->lbl_calendar->setText(text_for_zoro);
}

void MainWindow::MakeZodiacHoroscope(int day, int month){
    int year = ui->le_year->text().toInt();
    QString zodiac = GetZodiac(day, month, year);
    ui->lbl_horoscope->setText(QString("%1.%2 — ваш знак зодиака %3 по зодиакальному гороскопу").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(zodiac));
}

void MainWindow::MakeDruidHoroscope(int day, int month){
    int year = ui->le_year->text().toInt();
    QString tree = GetTree(day, month, year);
    ui->lbl_horoscope->setText(QString("%1.%2 — ваше тотемное дерево %3 по гороскопу друидов").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(tree));
}

void MainWindow::MakeMagic(){
    int day = ui->sb_day->value();
    int month = ui->cb_month->currentIndex() + 1;
    int year = ui->le_year->text().toInt();

    if(ui->le_year->text().isEmpty()){
        ui->lbl_calendar->setText("Введите год");
        year = 0;
    }

    else  if(year > 0){
    switch(calendar_){
    case Calendar::kEastern:
        MakeEasternHoroscope(year);
        break;

    case Calendar::kTibetan:
        MakeTibetanHoroscope(year);
        break;

    case Calendar::kZoroastrian:
        MakeZoroastrianHoroscope(year);
        break;
        }
    }
    if((month == 2 && day > 28) || (month == 4 && day > 30) ||
        (month == 6 && day > 30) || (month == 9 && day > 30)
        || (month == 11 && day > 30)){
        ui->lbl_horoscope->setText("Такой даты не существует");
    }
    else if (ui->cb_is_date->isChecked()) {
        switch(horoscope_){
        case Horoscope::kZodiac:
            MakeZodiacHoroscope(day, month);
            break;

        case Horoscope::kDruid:
            MakeDruidHoroscope(day, month);
            break;
        }
    }

}

void MainWindow::on_cb_is_date_clicked(bool checked)
{
    if(!checked){
        ui->lbl_horoscope->setText("Ввод даты отключён");
    }

    ui->gb_horoscope->setDisabled(!checked);
    ui->day->setDisabled(!checked);
    ui->month->setDisabled(!checked);
    ui->sb_day->setDisabled(!checked);
    ui->cb_month->setDisabled(!checked);

    MakeMagic();
}

// Получение символа года по восточному календарю.
QString GetAnimalForEasternCalendar(int year);

// Получение стихии года по восточному календарю.
QString GetElementForEasternCalendar(int year);

// Получение символа года по тибетскому календарю.
QString GetAnimalForTibetanCalendar(int year);

// Получение символа года по зороастрийскому календарю.
QString GetAnimalForZoroastrianCalendar(int year);

// Получение знака зодиака.
QString GetZodiac(int day, int month, int year);

// Получение названия тотемного дерева.
QString GetTree(int day, int month, int year);




void MainWindow::on_rb_eastern_toggled(bool checked)
{
    if(checked){
    calendar_ = Calendar::kEastern;
    }
    MakeMagic();
}


void MainWindow::on_rb_tibetan_toggled(bool checked)
{
    if(checked){
    calendar_ = Calendar::kTibetan;
    }
    MakeMagic();
}


void MainWindow::on_rb_zoroastrian_toggled(bool checked)
{
    if(checked){
    calendar_ = Calendar::kZoroastrian;
    }
    MakeMagic();
}


void MainWindow::on_le_year_textChanged(const QString &arg1)
{
    MakeMagic();
}


void MainWindow::on_rb_zodiac_toggled(bool checked)
{
    if(checked){
        horoscope_ = Horoscope::kZodiac;
    }
    MakeMagic();
}


void MainWindow::on_rb_druid_toggled(bool checked)
{
    if(checked){
        horoscope_ = Horoscope::kDruid;
    }
    MakeMagic();
}


void MainWindow::on_sb_day_textChanged(const QString &arg1)
{
    MakeMagic();
}


void MainWindow::on_cb_month_currentIndexChanged(int index)
{
    MakeMagic();
}

