#include "card.h"
#include "pinwindow.h"

#include <ui_card.h>

Card::Card(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Card)
{
    ui->setupUi(this);
}

Card::~Card()
{
    delete ui;
}

void Card::funfun() {
    PinWindow *pindow = new PinWindow();
    pindow->show();
    this->close();
}
