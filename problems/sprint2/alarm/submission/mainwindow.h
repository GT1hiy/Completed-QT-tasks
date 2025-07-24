#pragma once

#include <QMainWindow>
#include <prac/QTimer>
#include <prac/QMediaPlayer>
#include <prac/QTime>
#include <prac/QDateTime>
#include <QAudioOutput>
#include <prac/QFileDialog>
#include <QDir>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    prac::QDateTime GetAlarmMoment() const {
        return alarm_moment_;
    }

private slots:
    // Тут объявите слоты.
    void action_load_file();
    void ProcessAlarm();
    void onTimer();
    void on_pb_start_stop_clicked();

private:
    prac::QMediaPlayer player_{this};
    QAudioOutput music{this};
    prac::QTimer timer_{this};
    Ui::MainWindow *ui;
    prac::QDateTime alarm_moment_;
};
