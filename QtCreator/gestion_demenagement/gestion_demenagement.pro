#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T09:41:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestion_demenagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwindowsalarie.cpp \
    mainwindowcommercial.cpp \
    dialogajoutdossiercommercial.cpp \
    mainwindowchef.cpp

HEADERS  += mainwindow.h \
    mainwindowcommercial.h \
    mainwindowsalarie.h \
    dialogajoutdossiercommercial.h \
    mainwindowchef.h

FORMS    += mainwindow.ui \
    mainwindowcommercial.ui \
    mainwindowsalarie.ui \
    dialogajoutdossiercommercial.ui \
    mainwindowchef.ui

RESOURCES += \
    ma_ressource.qrc
