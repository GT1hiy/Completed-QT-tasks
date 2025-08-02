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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QLineEdit *txt_elem_content;
    QGridLayout *gridLayout_2;
    QPushButton *pb_week_days;
    QPushButton *pb_month;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pb_pop_back;
    QPushButton *pb_push_back;
    QPushButton *pb_clear;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *txt;
    QLineEdit *txt_size;
    QListWidget *list_widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(633, 501);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        txt_elem_content = new QLineEdit(centralwidget);
        txt_elem_content->setObjectName("txt_elem_content");

        gridLayout_3->addWidget(txt_elem_content, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pb_week_days = new QPushButton(centralwidget);
        pb_week_days->setObjectName("pb_week_days");

        gridLayout_2->addWidget(pb_week_days, 1, 0, 1, 1);

        pb_month = new QPushButton(centralwidget);
        pb_month->setObjectName("pb_month");

        gridLayout_2->addWidget(pb_month, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pb_pop_back = new QPushButton(centralwidget);
        pb_pop_back->setObjectName("pb_pop_back");

        gridLayout->addWidget(pb_pop_back, 1, 0, 1, 1);

        pb_push_back = new QPushButton(centralwidget);
        pb_push_back->setObjectName("pb_push_back");

        gridLayout->addWidget(pb_push_back, 1, 1, 1, 1);

        pb_clear = new QPushButton(centralwidget);
        pb_clear->setObjectName("pb_clear");

        gridLayout->addWidget(pb_clear, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txt = new QLabel(centralwidget);
        txt->setObjectName("txt");

        horizontalLayout->addWidget(txt);

        txt_size = new QLineEdit(centralwidget);
        txt_size->setObjectName("txt_size");

        horizontalLayout->addWidget(txt_size);


        gridLayout_3->addLayout(horizontalLayout, 4, 1, 1, 1);

        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");

        gridLayout_3->addWidget(list_widget, 0, 0, 5, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "std::vector demo", nullptr));
        pb_week_days->setText(QCoreApplication::translate("MainWindow", "= \320\264\320\275\320\270 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        pb_month->setText(QCoreApplication::translate("MainWindow", "= \320\274\320\265\321\201\321\217\321\206\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\321\202\320\276\320\262\320\272\320\270", nullptr));
        pb_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        pb_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        pb_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        txt->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
        txt_size->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
