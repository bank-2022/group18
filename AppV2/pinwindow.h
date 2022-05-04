#ifndef PINWINDOW_H
#define PINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class PinWindow; }
QT_END_NAMESPACE

class PinWindow : public QMainWindow
{
    Q_OBJECT

public:
    PinWindow(QWidget *parent = nullptr);
    ~PinWindow();
    bool restIsPinCorrect(QString id, QString pin);

private slots:
    void numberPressed();

    void remove();

    void on_ok_clicked();

    void on_takaisin_clicked();

    void doShit(QNetworkReply *raplu);

private:
    Ui::PinWindow *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *raplu;
    QByteArray response_data;

};
#endif // PINWINDOW_H
