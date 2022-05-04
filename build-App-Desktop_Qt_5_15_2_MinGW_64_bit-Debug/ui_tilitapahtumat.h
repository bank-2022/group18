/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QWidget *centralwidget;
    QPushButton *takaisin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QString::fromUtf8("Tilitapahtumat"));
        Tilitapahtumat->resize(800, 600);
        centralwidget = new QWidget(Tilitapahtumat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        takaisin = new QPushButton(centralwidget);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setGeometry(QRect(10, 10, 75, 24));
        Tilitapahtumat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tilitapahtumat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Tilitapahtumat->setMenuBar(menubar);
        statusbar = new QStatusBar(Tilitapahtumat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Tilitapahtumat->setStatusBar(statusbar);

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QMainWindow *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QCoreApplication::translate("Tilitapahtumat", "MainWindow", nullptr));
        takaisin->setText(QCoreApplication::translate("Tilitapahtumat", "Takaisin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
