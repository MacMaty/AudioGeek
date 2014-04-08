#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pauseActive = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_play_btn_clicked()
{
    if (pauseActive == -1)
       {
            p.play("C:/Users/Mathieu/Music/Bitch, Don't Kill My Vibe.mp3");
            int duree = p.getLength();
            QString musiquelu = QString::fromStdString(p.getTitle() +" - " + p.getArtist()+ " "+=duree );
            ui->lecturEncours_lbl->setText(musiquelu);

            pauseActive = 1;
        }

        if(pauseActive == 1 )
        {
            pauseActive = p.resume();
        }

}

void MainWindow::on_pause_btn_clicked()
{
    pauseActive = p.pause();
}
