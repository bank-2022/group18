#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"
#include "mainmenu.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
}

void Tilitapahtumat::on_takaisin_clicked()
{
    MainMenu *mmain = new MainMenu;
    this->close();
    mmain->show();
}

