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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_right;
    QPushButton *btn_left;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

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

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\210\320\260\321\207\320\270\320\271 \321\204\320\276\321\202\320\276\320\260\320\273\321\214\320\261\320\276\320\274", nullptr));
        btn_right->setText(QString());
        btn_left->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
