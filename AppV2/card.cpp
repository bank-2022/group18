#include "card.h"
#include "pinwindow.h"

#include <ui_card.h>
#include <QString>
#include <QUrl>
#include <QDebug>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

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

bool Card::restIsPinCorrect(QString id, QString pin) {

    QString site_url="http://localhost:3000/clients/" + id;

    qDebug() << site_url;

    QNetworkRequest request((site_url));
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(doShit(QNetworkReply*)));
    raplu = getManager->get(request);
    return true;
}

void Card::doShit(QNetworkReply *raplu) {
    response_data = raplu->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString book;
    QJsonObject json_obj = json_array[0].toObject();
    qDebug() << json_obj["clientName"].toString();
}

