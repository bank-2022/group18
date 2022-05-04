#ifndef SALDO_H
#define SALDO_H

#include <QMainWindow>

namespace Ui {
class Saldo;
}

class Saldo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();

private slots:
    void on_takaisin2_clicked();

    void tiedot(short id);

private:
    Ui::Saldo *ui;
};

#endif // SALDO_H
