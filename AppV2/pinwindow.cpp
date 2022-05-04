#include "pinwindow.h"
#include "card.h"
#include "mainmenu.h"

#include <ui_pinwindow.h>
#include <QString>
#include <QUrl>
#include <QDebug>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

PinWindow::PinWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PinWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_10,SIGNAL(released()),this,SLOT(numberPressed()));
    connect(ui->pushButton_11,SIGNAL(released()),this,SLOT(remove()));
}

PinWindow::~PinWindow()
{
    delete ui;
}

void PinWindow::numberPressed()
{
    QPushButton *nappi = (QPushButton*)sender();

    int Number;
    QString newNumber;

    Number =(ui->label2->text() + nappi-> text()).toInt();

    newNumber = QString::number(Number);

    ui->label2->setText(newNumber);
}

void PinWindow::remove()
{
    ui->label2->clear();
}

void PinWindow::on_takaisin_clicked()
{
    Card *card = new Card();
    card->show();
    this->close();
}

void PinWindow::on_ok_clicked()
{
    /*MainMenu *mmain = new MainMenu();
    mmain->show();
    this->close();*/
}

bool PinWindow::restIsPinCorrect(QString id, QString pin) {

    QString site_url="http://localhost:3000/clients/" + id;

    qDebug() << site_url;

    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(doShit(QNetworkReply*)));
    raplu = getManager->get(request);
    return true;
}

void PinWindow::doShit(QNetworkReply *raplu) {
    response_data = raplu->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString book;
    QJsonObject json_obj = json_array[0].toObject();
    qDebug() << json_obj["clientName"].toString();
}
