#include "nosto.h"
#include "ui_nosto.h"
#include "mainmenu.h"

Nosto::Nosto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_takaisin_clicked()
{
    MainMenu *mmain = new MainMenu;
    this->close();
    mmain->show();
}

