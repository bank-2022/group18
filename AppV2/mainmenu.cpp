#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "varmistus.h"

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

}


void MainMenu::on_pushButton_2_clicked()
{

}


void MainMenu::on_pushButton_clicked()
{

}


void MainMenu::on_lopeta_clicked()
{
    Varmistus *varmistus = new Varmistus;
    varmistus->show();
}

