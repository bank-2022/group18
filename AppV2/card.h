#ifndef CARD_H
#define CARD_H

#include <QMainWindow>
#include <QPushButton>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class Card; }
QT_END_NAMESPACE

class Card : public QMainWindow
{
    Q_OBJECT

public:
    Card(QWidget *parent = nullptr);
    ~Card();
    bool restIsPinCorrect(QString id, QString pin);

public slots:
    void funfun();

private slots:
    void doShit(QNetworkReply *raplu);

private:
    Ui::Card *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *raplu;
    QByteArray response_data;

};
#endif // CARD_H
