#-------------------------------------------------
#
# Project created by QtCreator 2017-02-27T09:02:37
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppliBDD
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connexion.cpp

HEADERS  += mainwindow.h \
    connexion.h

FORMS    += mainwindow.ui \
    connexion.ui
