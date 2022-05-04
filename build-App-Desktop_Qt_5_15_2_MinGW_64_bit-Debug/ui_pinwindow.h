/********************************************************************************
** Form generated from reading UI file 'pinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINWINDOW_H
#define UI_PINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *takaisin;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *pushButton_11;

    void setupUi(QMainWindow *PinWindow)
    {
        if (PinWindow->objectName().isEmpty())
            PinWindow->setObjectName(QString::fromUtf8("PinWindow"));
        PinWindow->resize(640, 480);
        PinWindow->setMinimumSize(QSize(640, 480));
        centralwidget = new QWidget(PinWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 551, 71));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(230, 120, 161, 41));
        QFont font1;
        font1.setPointSize(28);
        label2->setFont(font1);
        label2->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"    qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 1px solid gray;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 180, 241, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setPointSize(32);
        pushButton->setFont(font2);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font2);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font2);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font2);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font2);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font2);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font2);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font2);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font2);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setFont(font2);

        gridLayout->addWidget(pushButton_10, 3, 1, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 450, 611, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        takaisin = new QPushButton(layoutWidget1);
        takaisin->setObjectName(QString::fromUtf8("takaisin"));
        takaisin->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(takaisin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ok = new QPushButton(layoutWidget1);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout->addWidget(ok);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(460, 190, 141, 41));
        PinWindow->setCentralWidget(centralwidget);

        retranslateUi(PinWindow);

        QMetaObject::connectSlotsByName(PinWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PinWindow)
    {
        PinWindow->setWindowTitle(QCoreApplication::translate("PinWindow", "Bank System | Menu", nullptr));
        label->setText(QCoreApplication::translate("PinWindow", "Anna kortin PIN-koodi:", nullptr));
        label2->setText(QString());
        pushButton->setText(QCoreApplication::translate("PinWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PinWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PinWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PinWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PinWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PinWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PinWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PinWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PinWindow", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PinWindow", "0", nullptr));
        takaisin->setText(QCoreApplication::translate("PinWindow", "Takaisin", nullptr));
        ok->setText(QCoreApplication::translate("PinWindow", "OK!", nullptr));
        pushButton_11->setText(QCoreApplication::translate("PinWindow", "Poista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinWindow: public Ui_PinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINWINDOW_H
