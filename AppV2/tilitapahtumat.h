#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QMainWindow>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *parent = nullptr);
    ~Tilitapahtumat();

private:
    Ui::Tilitapahtumat *ui;
};

#endif // TILITAPAHTUMAT_H
