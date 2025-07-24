#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

int DaysPerMonth(int month, int year)
{
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return 29; // February in a leap year.
        } else {
            return 28; // February in a non-leap year.
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November have 30 days.
    } else {
        return 31; // All other months have 31 days.
    }
}

int CalculateDaysFromStartYear(int day, int month, int year)
{
    if(month == 0) {
        return 0;
    }
    int num_days = 0;
    for(size_t num_month = 1; num_month < static_cast<size_t>(month); ++num_month) {
        num_days += DaysPerMonth(num_month, year);
    }
    num_days += day;
    return num_days;
}

QString MainWindow::GetFormatType1(int day, int month, int year)
{
    // Реализуйте метод форматирования даты.
    QString date = QString("%1.%2.%3").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(year);
    return date;
}

QString MainWindow::GetFormatType2(int day, int month, int year)
{
    // Реализуйте метод форматирования даты.
    QString date = QString("%2/%1/%3").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(year);
    return date;
}

QString MainWindow::GetFormatType3(int day, int month, int year)
{
    static const std::vector<QString> months = {
        QStringLiteral("января"), QStringLiteral("февраля"),
        QStringLiteral("марта"), QStringLiteral("апреля"),
        QStringLiteral("мая"), QStringLiteral("июня"),
        QStringLiteral("июля"), QStringLiteral("августа"),
        QStringLiteral("сентября"), QStringLiteral("октября"),
        QStringLiteral("ноября"), QStringLiteral("декабря"),
    };
    // Реализуйте метод форматирования даты.
    QString date = QString("%1 %2 %3 года").arg(day, 2, 10, QChar('0')).arg(months[month - 1]).arg(year);
    return date;
}

QString MainWindow::GetStrNumDays(int num_days, int year) {
    // Метод должен возвращать текст о номере дня в году.
    QString day_per_year = QString("Это %1 день в %2 году").arg(num_days).arg(year);
    return day_per_year;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Установите валидаторы.
    ui->le_day->setValidator(new QIntValidator(1, 31, this));
    ui->le_month->setValidator(new QIntValidator(1, 12, this));
    ui->le_year->setValidator(new QIntValidator(1, 9999, this));

    SetError("Некорректная дата");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ShowFormattedDate()
{
    if(!ui->le_day->hasAcceptableInput() ||
        !ui->le_month->hasAcceptableInput() ||
        !ui->le_year->hasAcceptableInput()){
        SetError("Некорректная дата");

        return;
    }

    int day = ui->le_day->text().toInt();
    int month = ui->le_month->text().toInt();
    int year = ui->le_year->text().toInt();
    int day_in_year = CalculateDaysFromStartYear(day, month, year);

    if (month < 1 || month > 12) {
        SetError("Такой даты не существует");
        return;
    }

    int daysInMonth = DaysPerMonth(month, year);
    if (day < 1 || day > daysInMonth) {
        SetError("Такой даты не существует");
        return;
    }


    ui->lbl_format_type1->setText(GetFormatType1(day, month, year));
    ui->lbl_format_type2->setText(GetFormatType2(day, month, year));
    ui->lbl_format_type3->setText(GetFormatType3(day, month, year));
    ui->lbl_message->setText(GetStrNumDays(day_in_year, year));

    ui->le_date->setText(QString("%1.%2.%3")
                             .arg(day, 2, 10, QChar('0'))
                             .arg(month, 2, 10, QChar('0'))
                             .arg(year));
    // Отобразим результаты.
    // Используйте DaysPerMonth для определения количества дней в месяце.
    // Используйте CalculateDaysFromStartYear для определения номера дня в году.

    // Используйте GetFormatType1, GetFormatType2, GetFormatType3 и GetStrNumDays
    // для определения надписей, которые нужно вывести пользователю.
    // Эти методы реализуйте самостоятельно.
}

void MainWindow::SetError(const QString& err_text)
{
    ui->lbl_format_type1->clear();
    ui->lbl_format_type2->clear();
    ui->lbl_format_type3->clear();
    ui->lbl_message->setText(err_text);
}

void MainWindow::on_le_day_textChanged(const QString&)
{
    if(valid){
        return;
    }
    CheckValidity(ui->le_day);
    valid = true;
    ShowFormattedDate();
    valid = false;


    // Пользователь изменил день. Реализуйте слот.
}

void MainWindow::on_le_month_textChanged(const QString&)
{
    if(valid){
        return;
    }
    CheckValidity(ui->le_month);
    valid = true;
    ShowFormattedDate();
    valid = false;

    // Пользователь изменил месяц. Реализуйте слот.
}

void MainWindow::on_le_year_textChanged(const QString&)
{
    if(valid){
        return;
    }
    CheckValidity(ui->le_year);
    valid = true;
    ShowFormattedDate();
    valid = false;

    // Пользователь изменил год. Реализуйте слот.
}

void MainWindow::on_le_date_textChanged(const QString &arg1)
{
    if(valid){
        return;
    }
    valid = true;
    QStringList dateParts = ui->le_date->text().split('.');
        ui->le_day->setText(dateParts[0]);
        ui->le_month->setText(dateParts[1]);
        ui->le_year->setText(dateParts[2]);
        ShowFormattedDate();
        valid = false;

}


