/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(800, 600);
        menubar = new QMenuBar(Nosto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Nosto->setMenuBar(menubar);
        centralwidget = new QWidget(Nosto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Nosto->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Nosto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nosto->setStatusBar(statusbar);

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QMainWindow *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
