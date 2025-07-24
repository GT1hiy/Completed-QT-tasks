#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    bool valid = false;
    QString GetFormatType1(int day, int month, int year);
    QString GetFormatType2(int day, int month, int year);
    QString GetFormatType3(int day, int month, int year);

    QString GetStrNumDays(int num_days, int year);
    void ShowFormattedDate();
    void SetError(const QString& err_text);

    static void CheckValidity(QLineEdit* lineEdit) {
        if (!lineEdit->text().isEmpty() && lineEdit->hasAcceptableInput()) {
            lineEdit->setStyleSheet("border: 1px solid transparent;");
        } else {
            lineEdit->setStyleSheet("border: 1px solid red;");
        }
    }

private slots:
    void on_le_day_textChanged(const QString&);
    void on_le_month_textChanged(const QString&);
    void on_le_year_textChanged(const QString&);
    void on_le_date_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    bool editing_now_ = false;
};
#endif // MAINWINDOW_H
