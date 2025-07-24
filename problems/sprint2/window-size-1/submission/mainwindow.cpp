#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    UpdateSizeLabel();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateSizeLabel() {
    // Доработайте этот метод.
    ui->lbl_size->move(0, 0);
    int window_width = this->width();
    int window_height = this->height();
    ui->lbl_size->setFixedSize(window_width, window_height);
    auto new_text = std::to_string(width()) + "x" + std::to_string(height());
    ui->lbl_size->setText(QString::fromStdString(new_text));
}
