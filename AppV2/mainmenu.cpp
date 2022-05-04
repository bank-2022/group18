#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "varmistus.h"
#include "saldo.h"
#include "nosto.h"
#include "tilitapahtumat.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_pushButton_3_clicked()
{
    Tilitapahtumat *tili = new Tilitapahtumat;
    tili->show();
    this->close();
}


void MainMenu::on_pushButton_2_clicked()
{
    Nosto *nosto = new Nosto;
    nosto->show();
    this->close();
}

void MainMenu::on_pushButton_clicked()
{
    Saldo *saldo = new Saldo;
    saldo->show();
    this->close();
}



void MainMenu::on_lopeta_clicked()
{
    Varmistus *varmistus = new Varmistus;
    varmistus->show();
}

