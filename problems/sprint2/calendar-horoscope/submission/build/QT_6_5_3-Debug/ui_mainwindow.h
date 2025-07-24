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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *lbl_calendar;
    QLabel *eee_horoscope;
    QGroupBox *gb_calendar;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_eastern;
    QRadioButton *rb_tibetan;
    QRadioButton *rb_zoroastrian;
    QGroupBox *gb_horoscope;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_zodiac;
    QRadioButton *rb_druid;
    QCheckBox *cb_is_date;
    QHBoxLayout *horizont;
    QLabel *day;
    QSpinBox *sb_day;
    QLabel *month;
    QComboBox *cb_month;
    QFormLayout *formLayout;
    QLabel *year;
    QLineEdit *le_year;
    QLabel *lbl_horoscope;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 375);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lbl_calendar = new QLabel(centralwidget);
        lbl_calendar->setObjectName("lbl_calendar");

        gridLayout->addWidget(lbl_calendar, 7, 0, 1, 1);

        eee_horoscope = new QLabel(centralwidget);
        eee_horoscope->setObjectName("eee_horoscope");

        gridLayout->addWidget(eee_horoscope, 6, 0, 1, 1);

        gb_calendar = new QGroupBox(centralwidget);
        gb_calendar->setObjectName("gb_calendar");
        horizontalLayout = new QHBoxLayout(gb_calendar);
        horizontalLayout->setObjectName("horizontalLayout");
        rb_eastern = new QRadioButton(gb_calendar);
        rb_eastern->setObjectName("rb_eastern");
        rb_eastern->setEnabled(true);
        rb_eastern->setChecked(true);

        horizontalLayout->addWidget(rb_eastern);

        rb_tibetan = new QRadioButton(gb_calendar);
        rb_tibetan->setObjectName("rb_tibetan");
        rb_tibetan->setEnabled(true);
        rb_tibetan->setChecked(false);

        horizontalLayout->addWidget(rb_tibetan);

        rb_zoroastrian = new QRadioButton(gb_calendar);
        rb_zoroastrian->setObjectName("rb_zoroastrian");

        horizontalLayout->addWidget(rb_zoroastrian);


        gridLayout->addWidget(gb_calendar, 1, 0, 1, 1);

        gb_horoscope = new QGroupBox(centralwidget);
        gb_horoscope->setObjectName("gb_horoscope");
        gb_horoscope->setEnabled(true);
        gb_horoscope->setCheckable(false);
        gb_horoscope->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(gb_horoscope);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rb_zodiac = new QRadioButton(gb_horoscope);
        rb_zodiac->setObjectName("rb_zodiac");
        rb_zodiac->setEnabled(true);
        rb_zodiac->setChecked(true);

        horizontalLayout_2->addWidget(rb_zodiac);

        rb_druid = new QRadioButton(gb_horoscope);
        rb_druid->setObjectName("rb_druid");
        rb_druid->setEnabled(true);

        horizontalLayout_2->addWidget(rb_druid);


        gridLayout->addWidget(gb_horoscope, 3, 0, 1, 1);

        cb_is_date = new QCheckBox(centralwidget);
        cb_is_date->setObjectName("cb_is_date");

        gridLayout->addWidget(cb_is_date, 2, 0, 1, 1);

        horizont = new QHBoxLayout();
        horizont->setObjectName("horizont");
        day = new QLabel(centralwidget);
        day->setObjectName("day");
        day->setEnabled(false);

        horizont->addWidget(day);

        sb_day = new QSpinBox(centralwidget);
        sb_day->setObjectName("sb_day");
        sb_day->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sb_day->sizePolicy().hasHeightForWidth());
        sb_day->setSizePolicy(sizePolicy);
        sb_day->setMinimum(1);
        sb_day->setMaximum(31);

        horizont->addWidget(sb_day);

        month = new QLabel(centralwidget);
        month->setObjectName("month");
        month->setEnabled(false);

        horizont->addWidget(month);

        cb_month = new QComboBox(centralwidget);
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->setObjectName("cb_month");
        cb_month->setEnabled(false);
        sizePolicy.setHeightForWidth(cb_month->sizePolicy().hasHeightForWidth());
        cb_month->setSizePolicy(sizePolicy);

        horizont->addWidget(cb_month);


        gridLayout->addLayout(horizont, 4, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        year = new QLabel(centralwidget);
        year->setObjectName("year");

        formLayout->setWidget(0, QFormLayout::LabelRole, year);

        le_year = new QLineEdit(centralwidget);
        le_year->setObjectName("le_year");

        formLayout->setWidget(0, QFormLayout::FieldRole, le_year);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        lbl_horoscope = new QLabel(centralwidget);
        lbl_horoscope->setObjectName("lbl_horoscope");

        gridLayout->addWidget(lbl_horoscope, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\270 \320\270 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277\321\213", nullptr));
        lbl_calendar->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264", nullptr));
        eee_horoscope->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">\320\222\320\260\321\210 \320\274\320\260\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277:</span></p></body></html>", nullptr));
        gb_calendar->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        rb_eastern->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\321\207\320\275\321\213\320\271", nullptr));
        rb_tibetan->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\261\320\265\321\202\321\201\320\272\320\270\320\271", nullptr));
        rb_zoroastrian->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\321\200\320\276\320\260\321\201\321\202\321\200\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        gb_horoscope->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\321\201\320\272\320\276\320\277", nullptr));
        rb_zodiac->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\264\320\270\320\260\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        rb_druid->setText(QCoreApplication::translate("MainWindow", "\320\224\321\200\321\203\320\270\320\264\320\276\320\262", nullptr));
        cb_is_date->setText(QCoreApplication::translate("MainWindow", "\320\262\320\262\320\276\320\264 \320\264\320\260\321\202\321\213", nullptr));
        day->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", nullptr));
        month->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        cb_month->setItemText(0, QCoreApplication::translate("MainWindow", "\321\217\320\275\320\262\320\260\321\200\321\214", nullptr));
        cb_month->setItemText(1, QCoreApplication::translate("MainWindow", "\321\204\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        cb_month->setItemText(2, QCoreApplication::translate("MainWindow", "\320\274\320\260\321\200\321\202", nullptr));
        cb_month->setItemText(3, QCoreApplication::translate("MainWindow", "\320\260\320\277\321\200\320\265\320\273\321\214", nullptr));
        cb_month->setItemText(4, QCoreApplication::translate("MainWindow", "\320\274\320\260\320\271", nullptr));
        cb_month->setItemText(5, QCoreApplication::translate("MainWindow", "\320\270\321\216\320\275\321\214", nullptr));
        cb_month->setItemText(6, QCoreApplication::translate("MainWindow", "\320\270\321\216\320\273\321\214", nullptr));
        cb_month->setItemText(7, QCoreApplication::translate("MainWindow", "\320\260\320\262\320\263\321\203\321\201\321\202", nullptr));
        cb_month->setItemText(8, QCoreApplication::translate("MainWindow", "\321\201\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(9, QCoreApplication::translate("MainWindow", "\320\276\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(10, QCoreApplication::translate("MainWindow", "\320\275\320\276\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(11, QCoreApplication::translate("MainWindow", "\320\264\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        year->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264", nullptr));
        lbl_horoscope->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213 \320\276\321\202\320\272\320\273\321\216\321\207\321\221\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
