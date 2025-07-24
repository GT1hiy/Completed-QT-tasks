#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <prac/QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player_.setAudioOutput(&audio_output_);
    player_.setVideoOutput(ui->video_output);

    connect(&player_, &prac::QMediaPlayer::positionChanged, this, &MainWindow::on_position_changed);
    connect(&player_, &prac::QMediaPlayer::mediaStatusChanged, this, &MainWindow::on_media_status_changed);
    connect(&player_, &prac::QMediaPlayer::playbackStateChanged, this, &MainWindow::on_playback_state_changed);

    audio_output_.setVolume(1.f);
}

void MainWindow::on_position_changed(qint64 position) {
    position_changing_ = true;
    ui->sld_pos->setValue(position);
    position_changing_ = false;
}

void MainWindow::on_media_status_changed(QMediaPlayer::MediaStatus) {
    ui->sld_pos->setMaximum(player_.duration());
}

void MainWindow::on_playback_state_changed(QMediaPlayer::PlaybackState new_state) {
    if (new_state == QMediaPlayer::PlaybackState::PlayingState) {
        ui->btn_pause->setText("⏸");
    } else {
        ui->btn_pause->setText("⏵");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_choose_clicked()
{
    QString file = prac::QFileDialog::getOpenFileName(this, "Выберите медиафайл");
    player_.setSource(QUrl::fromLocalFile(file));

    player_.play();
}

void MainWindow::on_btn_pause_clicked()
{
    switch(player_.playbackState()) {
    case QMediaPlayer::PlaybackState::PausedState:
        player_.play();
        break;
    case QMediaPlayer::PlaybackState::StoppedState:
        player_.setPosition(0);
        player_.play();
        break;
    case QMediaPlayer::PlaybackState::PlayingState:
        player_.pause();
    }
}

void MainWindow::on_sld_volume_valueChanged(int value)
{
    audio_output_.setVolume(value / 100.f);
}

void MainWindow::on_sld_pos_valueChanged(int value)
{
    if (position_changing_) {
        return;
    }
    player_.setPosition(value);
}
