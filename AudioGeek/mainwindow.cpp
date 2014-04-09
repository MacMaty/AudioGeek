#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDirIterator"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    recup_Fichier();
    pauseActive = -1;
    bySelect = 0;
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

void MainWindow::recup_Fichier()
{
    // On sélectionne le répertoire à partir duquel on va rechercher les fichiers AVI et MP3

    //QString selectDir = QFileDialog::getExistingDirectory
    //:(
      //  this,
      // tr("Ouvrir un répertoire"),
      //  "",
      //  QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
    //);

    // On remplit une QStringList avec chacun des filtres désirés ici "*.mp3" et "*.avi".
    QStringList listFilter;
    listFilter << "*.aac";
    listFilter << "*.mp3";

    // On déclare un QDirIterator dans lequel on indique que l'on souhaite parcourir un répertoire et ses sous-répertoires.
    // De plus, on spécifie le filtre qui nous permettra de récupérer uniquement les fichiers du type souhaité.
    QDirIterator dirIterator("C:/Users/Mathieu/Music", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
   // QDirIterator dirIterator(selectDir, listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);

    // Variable qui contiendra tous les fichiers correspondant à notre recherche
    QStringList fileList;
    // Tant qu'on n'est pas arrivé à la fin de l'arborescence...


    while(dirIterator.hasNext())
    {
        // ...on va au prochain fichier correspondant à notre filtre
        fileList << dirIterator.next();
        ui->listWidget->addItem(dirIterator.next());

    }
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    if (pauseActive == -1 || bySelect == 1)
       {
            p.play(item->text().toStdString());
            int duree = (p.getLength()/60)/60;
            QString musiquelu = QString::fromStdString(p.getTitle() +" - " + p.getArtist() )+QString::number(duree);
            ui->lecturEncours_lbl->setText(musiquelu);


            pauseActive = 1;
            bySelect = 1 ;
        }

        if(pauseActive == 1 )
        {
            pauseActive = p.resume();
        }

}

void MainWindow::on_mute_btn_clicked()
{
    p.mute();
}

void MainWindow::on_verticalSlider_sliderMoved(int position)
{
    float vol = (float)position/100;
    p.volume(vol);

    ui->volume_lbl->setText(QString::number(vol));
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    float vol = (float)value/100;
    p.volume(vol);

    ui->volume_lbl->setText(QString::number(vol));
}
