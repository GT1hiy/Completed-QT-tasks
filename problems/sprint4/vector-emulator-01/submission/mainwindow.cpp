#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ApplyModel();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::ApplyModel() {
    // Реализуйте этот метод.

        if(vector_model_.items.empty()){
        ui->pb_pop_back->setDisabled(true);
            ui->txt_size->setText("0");
        } else {
            ui->list_widget->clear();
            ui->pb_pop_back->setDisabled(false);
            int acc = 0;
            for(auto ch: vector_model_.items){
                QString elem = QString("%1: %2").arg(acc).arg(QString::fromStdString(ch));
                ui->list_widget->addItem(elem);
                acc++;
           }
            ui->txt_size->setText(QString("%1").arg(vector_model_.items.size()));
     }
}

void MainWindow::on_pb_clear_clicked()
{
    vector_model_.items.clear();
    ui->list_widget->clear();
    ui->txt_size->setText("0");
}

void MainWindow::on_pb_pop_back_clicked()
{
    vector_model_.items.pop_back();
    if(vector_model_.items.empty()){
        ui->list_widget->clear();
    }
    ApplyModel();

}


void MainWindow::on_pb_push_back_clicked()
{
   QString text = ui->txt_elem_content->text();
    std::string str = text.toStdString();

    vector_model_.items.push_back(str);
    ApplyModel();
}

void MainWindow::on_pb_week_days_clicked()
{
    vector_model_.items.clear();
    static std::vector<std::string> days_of_week = {
        "Понедельник",
        "Вторник",
        "Среда",
        "Четверг",
        "Пятница",
        "Суббота",
        "Воскресенье"
    };
    for(auto ch: days_of_week){
        vector_model_.items.push_back(ch);
    }
    ApplyModel();
}


void MainWindow::on_pb_month_clicked()
{
    vector_model_.items.clear();
    static std::vector<std::string> months_of_year = {
        "Январь",
        "Февраль",
        "Март",
        "Апрель",
        "Май",
        "Июнь",
        "Июль",
        "Август",
        "Сентябрь",
        "Октябрь",
        "Ноябрь",
        "Декабрь"
    };
    for(auto ch: months_of_year){
        vector_model_.items.push_back(ch);
    }
    ApplyModel();
}


