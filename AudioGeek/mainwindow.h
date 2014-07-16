/*!
 * \file MainWindow.h
 * \brief Lecteur de musique de base
 * \author Mathieu BOYER
 * \version 0.1
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "player.h"
#include "titre.h"

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

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Player p;
    int pauseActive;
    int bySelect;
    list<Titre> lesTitres;
};

#endif // MAINWINDOW_H
