#include "varmistus.h"
#include "ui_varmistus.h"
#include "mainmenu.h"
#include "card.h"

Varmistus::Varmistus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Varmistus)
{
    ui->setupUi(this);
}

Varmistus::~Varmistus()
{
    delete ui;
}

void Varmistus::on_kyllaButton_clicked()
{
    MainMenu *mmain = new MainMenu;
    mmain->close();
    this->close();
    Card *card = new Card;
    card->show();


}


void Varmistus::on_eiButton_clicked()
{
    this->close();
}

