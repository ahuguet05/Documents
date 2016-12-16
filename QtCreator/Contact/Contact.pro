#-------------------------------------------------
#
# Project created by QtCreator 2016-11-17T10:48:52
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contact
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogajouter.cpp \
    contact.cpp \
    dialogmodifier.cpp

HEADERS  += mainwindow.h \
    dialogajouter.h \
    contact.h \
    dialogmodifier.h

FORMS    += mainwindow.ui \
    dialogajouter.ui \
    dialogmodifier.ui
