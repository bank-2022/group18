#include "saldo.h"
#include "ui_saldo.h"
#include "mainmenu.h"

#include <QString>
#include <QUrl>
#include <QDebug>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

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

void Saldo::tiedot(short id)
{
    QString site_url="http://localhost:3000/clients/"+QString::number(id);
    QNetworkRequest request((site_url));
}

