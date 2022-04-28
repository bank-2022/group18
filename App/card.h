#ifndef CARD_H
#define CARD_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Card; }
QT_END_NAMESPACE

class Card : public QMainWindow
{
    Q_OBJECT

public:
    Card(QWidget *parent = nullptr);
    ~Card();

public slots:
    void funfun();

private:
    Ui::Card *ui;

};
#endif // CARD_H
