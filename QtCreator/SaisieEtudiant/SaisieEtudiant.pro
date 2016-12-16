#-------------------------------------------------
#
# Project created by QtCreator 2016-11-03T11:58:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SaisieEtudiant
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    etudiant.cpp \
    evaluation.cpp \
    matiere.cpp \
    note.cpp \
    Section.cpp \
    dialogmatiere.cpp \
    dialogsection.cpp \
    dialogeleve.cpp

HEADERS  += mainwindow.h \
    etudiant.h \
    evaluation.h \
    matiere.h \
    note.h \
    section.h \
    dialogmatiere.h \
    dialogsection.h \
    dialogeleve.h

FORMS    += mainwindow.ui \
    dialogmatiere.ui \
    dialogsection.ui \
    dialogeleve.ui
