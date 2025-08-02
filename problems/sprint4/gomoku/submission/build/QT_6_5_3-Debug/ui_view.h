/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *field;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_new_game_3;
    QPushButton *pb_new_game_34;
    QPushButton *pb_new_game_15;
    QLabel *l_title;
    QLabel *l_status;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName("View");
        View->resize(619, 462);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        field = new QGridLayout();
        field->setSpacing(0);
        field->setObjectName("field");

        verticalLayout_2->addLayout(field);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        pb_new_game_3 = new QPushButton(frame);
        pb_new_game_3->setObjectName("pb_new_game_3");
        pb_new_game_3->setMinimumSize(QSize(150, 0));
        pb_new_game_3->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(pb_new_game_3);

        pb_new_game_34 = new QPushButton(frame);
        pb_new_game_34->setObjectName("pb_new_game_34");

        verticalLayout->addWidget(pb_new_game_34);

        pb_new_game_15 = new QPushButton(frame);
        pb_new_game_15->setObjectName("pb_new_game_15");

        verticalLayout->addWidget(pb_new_game_15);

        l_title = new QLabel(frame);
        l_title->setObjectName("l_title");

        verticalLayout->addWidget(l_title);

        l_status = new QLabel(frame);
        l_status->setObjectName("l_status");

        verticalLayout->addWidget(l_status);

        verticalSpacer = new QSpacerItem(20, 259, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(frame);

        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "\320\223\320\276\320\274\320\276\320\272\321\203", nullptr));
        pb_new_game_3->setText(QCoreApplication::translate("View", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260 3x3", nullptr));
        pb_new_game_34->setText(QCoreApplication::translate("View", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260 3\321\2054", nullptr));
        pb_new_game_15->setText(QCoreApplication::translate("View", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260 15\321\20515", nullptr));
        l_title->setText(QCoreApplication::translate("View", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\270\320\263\321\200\321\213:", nullptr));
        l_status->setText(QCoreApplication::translate("View", "\321\205\320\276\320\264 \320\270\320\263\321\200\320\276\320\272\320\260 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
