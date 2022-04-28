#ifndef PINWINDOW_H
#define PINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class PinWindow; }
QT_END_NAMESPACE

class PinWindow : public QMainWindow
{
    Q_OBJECT

public:
    PinWindow(QWidget *parent = nullptr);
    ~PinWindow();

private:
    Ui::PinWindow *ui;

};
#endif // PINWINDOW_H
