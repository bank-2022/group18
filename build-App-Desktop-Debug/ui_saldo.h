/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QWidget *centralwidget;
    QPushButton *takaisin2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QString::fromUtf8("Saldo"));
        Saldo->resize(800, 600);
        centralwidget = new QWidget(Saldo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        takaisin2 = new QPushButton(centralwidget);
        takaisin2->setObjectName(QString::fromUtf8("takaisin2"));
        takaisin2->setGeometry(QRect(10, 10, 75, 24));
        Saldo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Saldo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Saldo->setMenuBar(menubar);
        statusbar = new QStatusBar(Saldo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Saldo->setStatusBar(statusbar);

        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QMainWindow *Saldo)
    {
        Saldo->setWindowTitle(QCoreApplication::translate("Saldo", "MainWindow", nullptr));
        takaisin2->setText(QCoreApplication::translate("Saldo", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
