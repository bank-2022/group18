/********************************************************************************
** Form generated from reading UI file 'cardi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDI_H
#define UI_CARDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QString::fromUtf8("Card"));
        Card->resize(482, 172);
        Card->setMinimumSize(QSize(482, 172));
        Card->setMaximumSize(QSize(482, 172));
        centralwidget = new QWidget(Card);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 482, 149));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(64);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        Card->setCentralWidget(centralwidget);

        retranslateUi(Card);
        QObject::connect(pushButton, SIGNAL(clicked()), Card, SLOT(funfun()));

        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QMainWindow *Card)
    {
        Card->setWindowTitle(QCoreApplication::translate("Card", "Bank System", nullptr));
        label->setText(QCoreApplication::translate("Card", "Sy\303\266t\303\244 kortti:", nullptr));
        pushButton->setText(QCoreApplication::translate("Card", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Card", "En", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDI_H
