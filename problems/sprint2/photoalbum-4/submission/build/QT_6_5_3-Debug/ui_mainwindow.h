/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_up_windows;
    QAction *action_use_resources;
    QAction *action_choose_dir;
    QAction *action_close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_right;
    QPushButton *btn_left;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 589);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 217));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        action_up_windows = new QAction(MainWindow);
        action_up_windows->setObjectName("action_up_windows");
        action_up_windows->setCheckable(true);
        action_up_windows->setChecked(true);
        action_up_windows->setEnabled(true);
        action_use_resources = new QAction(MainWindow);
        action_use_resources->setObjectName("action_use_resources");
        action_choose_dir = new QAction(MainWindow);
        action_choose_dir->setObjectName("action_choose_dir");
        action_close = new QAction(MainWindow);
        action_close->setObjectName("action_close");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        btn_right = new QPushButton(centralwidget);
        btn_right->setObjectName("btn_right");
        btn_right->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/images/chevron_r.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_right->setIcon(icon);
        btn_right->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btn_right, 1, 2, 1, 1);

        btn_left = new QPushButton(centralwidget);
        btn_left->setObjectName("btn_left");
        btn_left->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/images/chevron_l.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_left->setIcon(icon1);
        btn_left->setIconSize(QSize(32, 32));

        gridLayout->addWidget(btn_left, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_up_windows);
        menu->addAction(action_use_resources);
        menu->addAction(action_choose_dir);
        menu->addAction(action_close);

        retranslateUi(MainWindow);
        QObject::connect(action_close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\210\320\260\321\207\320\270\320\271 \321\204\320\276\321\202\320\276\320\260\320\273\321\214\320\261\320\276\320\274", nullptr));
        action_up_windows->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\321\205 \320\262\321\201\320\265\321\205 \320\276\320\272\320\276\320\275", nullptr));
        action_use_resources->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 \321\200\320\265\321\201\321\203\321\200\321\201\320\276\320\262", nullptr));
        action_choose_dir->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276 \320\270\320\267 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\277\320\260\320\277\320\272\320\270", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        btn_right->setText(QString());
        btn_left->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
