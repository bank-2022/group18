#include "saldo.h"
#include "ui_saldo.h"
#include "mainmenu.h"

Saldo::Saldo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}

void Saldo::on_takaisin2_clicked()
{
    MainMenu *mmain = new MainMenu;
    this->close();
    mmain->show();
}

