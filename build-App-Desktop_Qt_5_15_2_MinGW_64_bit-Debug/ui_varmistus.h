/********************************************************************************
** Form generated from reading UI file 'varmistus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARMISTUS_H
#define UI_VARMISTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Varmistus
{
public:
    QGridLayout *gridLayout;
    QPushButton *eiButton;
    QPushButton *kyllaButton;
    QLabel *label;

    void setupUi(QDialog *Varmistus)
    {
        if (Varmistus->objectName().isEmpty())
            Varmistus->setObjectName(QString::fromUtf8("Varmistus"));
        Varmistus->resize(486, 156);
        Varmistus->setMinimumSize(QSize(486, 156));
        Varmistus->setMaximumSize(QSize(486, 156));
        gridLayout = new QGridLayout(Varmistus);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        eiButton = new QPushButton(Varmistus);
        eiButton->setObjectName(QString::fromUtf8("eiButton"));
        eiButton->setMinimumSize(QSize(0, 20));
        eiButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(eiButton, 1, 0, 1, 1);

        kyllaButton = new QPushButton(Varmistus);
        kyllaButton->setObjectName(QString::fromUtf8("kyllaButton"));
        kyllaButton->setMinimumSize(QSize(0, 20));
        kyllaButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(kyllaButton, 1, 2, 1, 1);

        label = new QLabel(Varmistus);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(Varmistus);

        QMetaObject::connectSlotsByName(Varmistus);
    } // setupUi

    void retranslateUi(QDialog *Varmistus)
    {
        Varmistus->setWindowTitle(QCoreApplication::translate("Varmistus", "Dialog", nullptr));
        eiButton->setText(QCoreApplication::translate("Varmistus", "Ei", nullptr));
        kyllaButton->setText(QCoreApplication::translate("Varmistus", "Kyll\303\244", nullptr));
        label->setText(QCoreApplication::translate("Varmistus", "           Haluatko varmasti lopettaa?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Varmistus: public Ui_Varmistus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARMISTUS_H
