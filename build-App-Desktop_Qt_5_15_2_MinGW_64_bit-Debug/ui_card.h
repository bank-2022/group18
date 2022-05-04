/********************************************************************************
** Form generated from reading UI file 'card.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARD_H
#define UI_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QString::fromUtf8("Card"));
        Card->resize(482, 172);
        Card->setMinimumSize(QSize(482, 172));
        Card->setMaximumSize(QSize(482, 172));
        centralwidget = new QWidget(Card);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 1, 271, 116));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 120, 91, 31));
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
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARD_H
