#include "mainwindow.h"
#include "ui_mainwindow.h"

// Функция подгоняет изображение под нужный размер окна.
[[nodiscard("Не игнорируйте результат функции")]] QPixmap ResizeImgToFit(const QPixmap &src, int window_width, int window_height) {
    int img_w = src.width();
    int img_h = src.height();

    double w_ratio = double(img_w) / window_width;
    double h_ratio = double(img_h) / window_height;

    if ( w_ratio > h_ratio ) {
        return src.scaledToWidth(window_width);
    } else {
        return src.scaledToHeight(window_height);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QString image_path = ":/images/images/cat1.jpg";
    ui->setupUi(this);
    SetPixmap(image_path);
    FitImage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FitImage()
{

    Q_ASSERT(!active_pixmap.isNull());

    // Напишите этот метод.
    int win_w = width();
    int win_h =  height();

    QPixmap scaled_image = ResizeImgToFit(active_pixmap, win_w, win_h);

    int img_w = scaled_image.width();
    int img_h = scaled_image.height();

    ui->lbl_img->setPixmap( scaled_image );

    int lbl_x = (win_w - img_w) / 2;
    int lbl_y = (win_h - img_h) / 2;

    ui->lbl_img->resize(img_w, img_h);
    ui->lbl_img->move(lbl_x, lbl_y);
    // 3. Измените размер lbl_img.
    // 4. Переместите lbl_img, пользуясь формулами из условия.
}

void MainWindow::resizeEvent(QResizeEvent*)
{
    FitImage();
}
