#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <prac/QFileDialog>
#include <QFileInfo>

QString TimeToString(QTime time) {
    return QString("%1:%2:%3").arg(time.hour(), 2, 10, QChar('0')).arg(time.minute(), 2, 10, QChar('0')).arg(time.second(), 2, 10, QChar('0'));
}

QString TimeToString(std::chrono::milliseconds ms) {
    return TimeToString(QTime::fromMSecsSinceStartOfDay(ms.count() + 500));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&timer_, &prac::QTimer::timeout, this, &MainWindow::onTimer);
    connect(ui->action_load_file, &QAction::triggered, this, &MainWindow::action_load_file);
    player_.setAudioOutput(&music);
    timer_.start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::action_load_file(){
QString file_name = prac::QFileDialog::getOpenFileName(this,
                                                       QString::fromUtf8("Открыть файл"),
                                                       QDir::currentPath(),
                                                       "*.wav;*.mp3");

    player_.setSource(file_name);
    ui->lbl_melody->setText(file_name);
}

void MainWindow::ProcessAlarm() {
    if (alarm_moment_ != QDateTime{}) {
        auto now = prac::QDateTime::currentDateTime();
        if (alarm_moment_ < now) {
            ui->lbl_timeout->setText("Пора вставать");
            if (player_.playbackState() != QMediaPlayer::PlaybackState::PlayingState) {
                player_.play();
            }
        } else {
            auto time_to_alarm = alarm_moment_ - now;
            ui->lbl_timeout->setText(TimeToString(time_to_alarm));
        }
    } else {
        ui->lbl_timeout->setText("Установите будильник");
    }
}


void MainWindow::onTimer(){
    QTime current = QTime::currentTime();
    QString current_time = TimeToString(current);
    ui->lbl_now->setText(current_time);
    timer_.start(1000 - current.msec());
    ProcessAlarm();
}

void MainWindow::on_pb_start_stop_clicked()
{
    if (alarm_moment_.isValid()) {
        // Будильник установлен.
        alarm_moment_ = prac::QDateTime();
        ui->pb_start_stop->setText("Старт");
        player_.stop();
        ui->lbl_timeout->setText("Установите будильник");
    } else{
        auto now = prac::QDateTime::currentDateTime();
        prac::QTime alarm_time = prac::QTime(ui->sb_hour->value(), ui->sb_min->value(), ui->sb_sec->value());
        alarm_moment_ = prac::QDateTime(now.date(), alarm_time);

        if(alarm_time < now.time()){
            alarm_moment_ = prac::QDateTime(alarm_moment_.date().addDays(1), alarm_moment_.time());
        }
        ui->pb_start_stop->setText("Стоп");
    }
    ProcessAlarm();
}



