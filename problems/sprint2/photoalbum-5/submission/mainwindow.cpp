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
    //Спрятанный меню бар
    ui->menuBar->hide();
    this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QMainWindow::customContextMenuRequested,
            this, &MainWindow::slotCustomMenuRequested);
    //Поверх окон
    connect(ui->action_up_windows, &QAction::triggered, this, &MainWindow::slotUpWindows);
    connect(ui->action_choose_dir, &QAction::triggered, this, &MainWindow::slotDir);
    connect(ui->action_use_resources, &QAction::triggered, this, &MainWindow::slotResources);

    connect(ui->action_1sec, &QAction::triggered, this, &MainWindow::onTimer1Sec);
    connect(ui->action_5sec, &QAction::triggered, this, &MainWindow::onTimer5Sec);
    connect(ui->action_10sec, &QAction::triggered, this, &MainWindow::onTimer10Sec);
    connect(ui->action_0sec, &QAction::triggered, this, &MainWindow::onTimer0Sec);

    connect(&timer_, &QTimer::timeout, this, &MainWindow::handleAutoAdvance);

    //Директории
    QString path =  ":/cats/images/";
    SetFolder(path);
    slotUpWindows(true);
    ui->action_0sec->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer0Sec(bool)
{
    // Сбрасываем все галочки
    ui->action_0sec->setChecked(true);
    ui->action_1sec->setChecked(false);
    ui->action_5sec->setChecked(false);
    ui->action_10sec->setChecked(false);

    // Останавливаем таймер
    timer_.stop();
}

void MainWindow::onTimer1Sec(bool)
{
    // Сбрасываем все галочки
    ui->action_0sec->setChecked(false);
    ui->action_1sec->setChecked(true);
    ui->action_5sec->setChecked(false);
    ui->action_10sec->setChecked(false);

    // Запускаем таймер
    timer_.start(1000);
}

void MainWindow::onTimer5Sec(bool)
{
    // Сбрасываем все галочки
    ui->action_0sec->setChecked(false);
    ui->action_1sec->setChecked(false);
    ui->action_5sec->setChecked(true);
    ui->action_10sec->setChecked(false);

    // Запускаем таймер
    timer_.start(5000);
}

void MainWindow::onTimer10Sec(bool)
{
    // Сбрасываем все галочки
    ui->action_0sec->setChecked(false);
    ui->action_1sec->setChecked(false);
    ui->action_5sec->setChecked(false);
    ui->action_10sec->setChecked(true);

    // Запускаем таймер
    timer_.start(10000);
}

void MainWindow::slotCustomMenuRequested(QPoint pos) {
    ui->menu->popup(this->mapToGlobal(pos));
}

void MainWindow::slotUpWindows(bool state) {
    setWindowFlags(windowFlags().setFlag(Qt::WindowStaysOnTopHint, state));
    show();
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
    auto img = FindNextImage(cur_file_index_, napravlenie);
    QPixmap pixmap{img.first};

    // Исправляем некорректный вызов Clear()
    if (pixmap.isNull()) {
        Clear(); // Убрать void перед Clear()
        ui->btn_left->setEnabled(false);
        ui->btn_right->setEnabled(false);
    } else {
        ui->btn_left->setEnabled(true);
        ui->btn_right->setEnabled(true);
    }
}



void MainWindow::on_btn_left_clicked()
{
    napravlenie = -1;
    cur_file_index_--;
    UpdateImage();
    UpdateEnabled();
    onTimer0Sec(true);
}


void MainWindow::on_btn_right_clicked()
{
    napravlenie = 1;
    cur_file_index_++;
    UpdateImage();
    UpdateEnabled();
    onTimer0Sec(true);
}

void MainWindow::handleAutoAdvance()
{
    napravlenie = 1;
    cur_file_index_++;
    UpdateImage();
    UpdateEnabled();
}

