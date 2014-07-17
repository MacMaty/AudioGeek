/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pause_btn;
    QPushButton *play_btn;
    QLabel *lecturEncours_lbl;
    QListWidget *listWidget;
    QPushButton *mute_btn;
    QSlider *verticalSlider;
    QLabel *volume_lbl;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuBiblioth_que;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(748, 472);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pause_btn = new QPushButton(centralWidget);
        pause_btn->setObjectName(QStringLiteral("pause_btn"));
        pause_btn->setGeometry(QRect(440, 330, 75, 23));
        play_btn = new QPushButton(centralWidget);
        play_btn->setObjectName(QStringLiteral("play_btn"));
        play_btn->setGeometry(QRect(440, 300, 75, 23));
        lecturEncours_lbl = new QLabel(centralWidget);
        lecturEncours_lbl->setObjectName(QStringLiteral("lecturEncours_lbl"));
        lecturEncours_lbl->setGeometry(QRect(60, 300, 271, 20));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(65, 30, 611, 192));
        mute_btn = new QPushButton(centralWidget);
        mute_btn->setObjectName(QStringLiteral("mute_btn"));
        mute_btn->setGeometry(QRect(570, 390, 75, 23));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(690, 240, 22, 160));
        verticalSlider->setMaximum(100);
        verticalSlider->setSingleStep(1);
        verticalSlider->setSliderPosition(50);
        verticalSlider->setOrientation(Qt::Vertical);
        volume_lbl = new QLabel(centralWidget);
        volume_lbl->setObjectName(QStringLiteral("volume_lbl"));
        volume_lbl->setGeometry(QRect(660, 390, 31, 16));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(100, 350, 160, 22));
        horizontalSlider->setMaximum(10000);
        horizontalSlider->setPageStep(1000);
        horizontalSlider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 748, 21));
        menuBiblioth_que = new QMenu(menuBar);
        menuBiblioth_que->setObjectName(QStringLiteral("menuBiblioth_que"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuBiblioth_que->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AudioGeek", 0));
        pause_btn->setText(QApplication::translate("MainWindow", "Pause", 0));
        play_btn->setText(QApplication::translate("MainWindow", "Lecture", 0));
        lecturEncours_lbl->setText(QString());
        mute_btn->setText(QApplication::translate("MainWindow", "Mute", 0));
        volume_lbl->setText(QApplication::translate("MainWindow", "Volume", 0));
        menuBiblioth_que->setTitle(QApplication::translate("MainWindow", "Biblioth\303\250que", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
