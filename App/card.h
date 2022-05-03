#ifndef CARD_H
#define CARD_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Card; }
QT_END_NAMESPACE

class Card : public QMainWindow
{
    Q_OBJECT

private:
    QNetworkAccessManager *getManager;
    QNetworkReply *raplu;
    QByteArray response_data;
    Ui::Card *ui;

public:
    Card(QWidget *parent = nullptr);
    ~Card();
    bool restIsPinCorrect(QString id, QString pin);

public slots:
    void funfun();

private slots:
    void doShit(QNetworkReply *raplu);

};
#endif // CARD_H
