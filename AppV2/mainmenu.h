#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
