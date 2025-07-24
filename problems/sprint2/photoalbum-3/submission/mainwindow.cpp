// Решение предыдущей задачи
#include "mainwindow.h"
#include "ui_mainwindow.h"

// Функция подгоняет изображение под нужный размер окна.
QPixmap ResizeImgToFit(const QPixmap &src, int window_width, int window_height) {
    int img_w = src.width();
    int img_h = src.height();

    double w_ratio = double(img_w) / window_width;
    double h_ratio = double(img_h) / window_height;

    if ( w_ratio < h_ratio ) {
        return src.scaledToWidth(window_width);
    } else {
        return src.scaledToHeight(window_height);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString path =  ":/cats/images/";
    SetFolder(path);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FitImage()
{
    Q_ASSERT(!active_pixmap.isNull());
    int win_w = this->width();
    int win_h = this->height();

    QPixmap scaled = ResizeImgToFit(active_pixmap, win_w, win_h);

    lbl_new_.setPixmap(scaled);

    int img_w = scaled.width();
    int img_h = scaled.height();

    int lbl_x = (win_w - img_w) / 2;
    int lbl_y = (win_h - img_h) / 2;

    lbl_new_.resize(img_w, img_h);
    lbl_new_.move(lbl_x, lbl_y);

}

void MainWindow::resizeEvent(QResizeEvent*)
{
    FitImage();
}



void MainWindow::UpdateEnabled() {
    // Количество изображений в папке.
    int max_images = QDir(current_folder_).entryList().size();

    // Устанавливаем активность кнопки «влево».
    ui->btn_left->setEnabled(cur_file_index_ > 0);

    // Устанавливаем активность кнопки «вправо».
    ui->btn_right->setEnabled(cur_file_index_ < max_images - 1);
}

void MainWindow::on_btn_left_clicked()
{
    cur_file_index_--;
    UpdateImage();
    UpdateEnabled();
}


void MainWindow::on_btn_right_clicked()
{
    cur_file_index_++;
    UpdateImage();
    UpdateEnabled();
}

