#ifndef VARMISTUS_H
#define VARMISTUS_H

#include <QDialog>

namespace Ui {
class Varmistus;
}

class Varmistus : public QDialog
{
    Q_OBJECT

public:
    explicit Varmistus(QWidget *parent = nullptr);
    ~Varmistus();

private slots:
    void on_kyllaButton_clicked();

    void on_eiButton_clicked();

private:
    Ui::Varmistus *ui;
};

#endif // VARMISTUS_H
