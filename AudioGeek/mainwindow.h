#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
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

    void recup_Fichier();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_mute_btn_clicked();

    void on_verticalSlider_sliderMoved(int position);

    void on_verticalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Player p;
    int pauseActive;
    int bySelect;
};

#endif // MAINWINDOW_H
