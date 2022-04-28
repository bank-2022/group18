/********************************************************************************
** Form generated from reading UI file 'pinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINWINDOW_H
#define UI_PINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QLabel *label_2;

    void setupUi(QMainWindow *PinWindow)
    {
        if (PinWindow->objectName().isEmpty())
            PinWindow->setObjectName(QString::fromUtf8("PinWindow"));
        PinWindow->resize(640, 480);
        centralwidget = new QWidget(PinWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 551, 71));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 200, 61, 61));
        QFont font1;
        font1.setPointSize(32);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 200, 61, 61));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 200, 61, 61));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 270, 61, 61));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 270, 61, 61));
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 270, 61, 61));
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 340, 61, 61));
        pushButton_7->setFont(font1);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 340, 61, 61));
        pushButton_8->setFont(font1);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 340, 61, 61));
        pushButton_9->setFont(font1);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(290, 410, 61, 61));
        pushButton_10->setFont(font1);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 434, 181, 41));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(450, 430, 181, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 120, 221, 71));
        label_2->setFont(font);
        PinWindow->setCentralWidget(centralwidget);

        retranslateUi(PinWindow);

        QMetaObject::connectSlotsByName(PinWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PinWindow)
    {
        PinWindow->setWindowTitle(QCoreApplication::translate("PinWindow", "Bank System | Menu", nullptr));
        label->setText(QCoreApplication::translate("PinWindow", "Anna kortin PIN-koodi:", nullptr));
        pushButton->setText(QCoreApplication::translate("PinWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PinWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PinWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PinWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PinWindow", "6", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PinWindow", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PinWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PinWindow", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PinWindow", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PinWindow", "0", nullptr));
        pushButton_11->setText(QCoreApplication::translate("PinWindow", "Takaisin", nullptr));
        pushButton_12->setText(QCoreApplication::translate("PinWindow", "OK!", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PinWindow: public Ui_PinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINWINDOW_H
