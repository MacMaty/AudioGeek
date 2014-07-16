#-------------------------------------------------
#
# Project created by QtCreator 2014-04-08T11:57:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AudioGeek
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    genre.cpp \
    artiste.cpp \
    titre.cpp \
    album.cpp

HEADERS  += mainwindow.h \
    player.h \
    genre.h \
    artiste.h \
    titre.h \
    album.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:\Qt\Qt5.2.1\5.2.1\mingw48_32\include\FMod

LIBS += C:\Qt\Qt5.2.1\5.2.1\mingw48_32\lib\libfmodex.a
