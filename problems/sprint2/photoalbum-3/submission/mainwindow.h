// Решение предыдущей задачи
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void SetPixmap(const QString path) {
        active_pixmap = QPixmap(path);
    }

    void FitImage();

    void SetFolder(const QString& d)
    {
        current_folder_ = d;
        cur_file_index_ = 0;
        UpdateImage();
        UpdateEnabled();

    }

    QString GetCurrentFile() const {
        // Получаем список всех файлов директории.
        // Сохраняем в переменную list_files.
        QDir dir(current_folder_);
        auto list_files = dir.entryList();
        int file_index = std::min(cur_file_index_, int(list_files.size()) - 1);
        file_index = std::max(0, file_index);

        return dir.filePath(list_files[file_index]);
    }

private:
    void UpdateImage() {
        SetPixmap(GetCurrentFile());
        FitImage();
    }


private slots:
    void on_btn_left_clicked();

    void on_btn_right_clicked();

private:
    QLabel lbl_new_{this};
    void resizeEvent(QResizeEvent *event) override;
    void UpdateEnabled();

private:
    Ui::MainWindow *ui;
    QPixmap active_pixmap;
    QString current_folder_;
    int cur_file_index_ = 0;
};
#endif // MAINWINDOW_H
