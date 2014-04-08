#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "player.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_play_btn_clicked();

    void on_pause_btn_clicked();

private:
    Ui::MainWindow *ui;
    Player p;
    int pauseActive;
};

#endif // MAINWINDOW_H
