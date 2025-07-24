/********************************************************************************
** Form generated from reading UI file 'cartwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTWINDOW_H
#define UI_CARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CartWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *btn_close;

    void setupUi(QDialog *CartWindow)
    {
        if (CartWindow->objectName().isEmpty())
            CartWindow->setObjectName("CartWindow");
        CartWindow->resize(310, 369);
        verticalLayout = new QVBoxLayout(CartWindow);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(CartWindow);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        label = new QLabel(CartWindow);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        btn_close = new QPushButton(CartWindow);
        btn_close->setObjectName("btn_close");

        verticalLayout->addWidget(btn_close);


        retranslateUi(CartWindow);
        QObject::connect(btn_close, &QPushButton::clicked, CartWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(CartWindow);
    } // setupUi

    void retranslateUi(QDialog *CartWindow)
    {
        CartWindow->setWindowTitle(QCoreApplication::translate("CartWindow", " \320\232\320\276\321\200\320\267\320\270\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("CartWindow", "TextLabel", nullptr));
        btn_close->setText(QCoreApplication::translate("CartWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CartWindow: public Ui_CartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTWINDOW_H
