/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QWidget *centralwidget;
    QPushButton *takaisin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(800, 600);
        centralwidget = new QWidget(Nosto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        takaisin = new QPushButton(centralwidget);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(10, 10, 75, 24));
        Nosto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nosto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Nosto->setMenuBar(menubar);
        statusbar = new QStatusBar(Nosto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nosto->setStatusBar(statusbar);

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QMainWindow *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "MainWindow", nullptr));
        takaisin->setText(QCoreApplication::translate("Nosto", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
