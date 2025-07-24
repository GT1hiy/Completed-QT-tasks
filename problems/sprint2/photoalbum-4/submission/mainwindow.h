// Решение предыдущей задачи
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDir>
#include <prac/QFileDialog>

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
        QDir dir(current_folder_);
        auto list_files = dir.entryList();
        if (list_files.empty()) return ""; // Добавляем проверку на пустоту

        auto result = FindNextImage(cur_file_index_, napravlenie);
        if (result.second == -1 || result.second >= list_files.size()) return ""; // Проверяем индекс

        return dir.filePath(list_files[result.second]);
    }



private:
    void UpdateImage() {
        QString file = GetCurrentFile();
        if (!file.isEmpty()) {
            SetPixmap(file);
            FitImage();
        }
    }


private slots:
    void Clear(){
        lbl_new_.clear();
    }

    void slotUpWindows(bool state);

    void slotDir(bool){
        QString dir = prac::QFileDialog::getExistingDirectory(this,
                                                        QString("Открыть папку"),
                                                        QDir::currentPath(),
                                                        prac::QFileDialog::ShowDirsOnly
                                                            | prac::QFileDialog::DontResolveSymlinks);

        if(dir.isEmpty()) {
            return;
        }
        SetFolder(dir);
    }

    std::pair<QPixmap, int> FindNextImage(int start_index, int direction) const {
        QDir dir(current_folder_);
        auto file_list = dir.entryList();

        int count = file_list.size();
        int cur_image = start_index;

        for(int steps = 0; steps < count; ++steps, cur_image += direction) {
            cur_image = ((cur_image % count) + count) % count;

            auto pixmap = GetImageByPath(dir.filePath(file_list[cur_image]));
            if (!pixmap.isNull()) {
                return {pixmap, cur_image};
            }
        }
        return {{}, -1};
    }

    QPixmap GetImageByPath(QString path) const {
        QFileInfo file_info(path);
        if (!file_info.isFile()) {
            return {};
        }
        return QPixmap(path);
    }

    void slotResources(bool){
        QString path =  ":/cats/images/";
        SetFolder(path);
    }
    void on_btn_left_clicked();
    void on_btn_right_clicked();
    void slotCustomMenuRequested(QPoint pos);

private:
    QLabel lbl_new_{this};
    void resizeEvent(QResizeEvent *event) override;
    void UpdateEnabled();

private:
    Ui::MainWindow *ui;
    bool state = false;
    int napravlenie = 1;
    QPixmap active_pixmap;
    QString current_folder_;
    int cur_file_index_ = 0;
};
#endif // MAINWINDOW_H
