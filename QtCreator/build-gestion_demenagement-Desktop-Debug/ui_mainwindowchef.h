/********************************************************************************
** Form generated from reading UI file 'mainwindowchef.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCHEF_H
#define UI_MAINWINDOWCHEF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowChef
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowChef)
    {
        if (MainWindowChef->objectName().isEmpty())
            MainWindowChef->setObjectName(QString::fromUtf8("MainWindowChef"));
        MainWindowChef->resize(800, 600);
        centralwidget = new QWidget(MainWindowChef);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 40, 256, 192));
        MainWindowChef->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowChef);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        MainWindowChef->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowChef);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowChef->setStatusBar(statusbar);

        retranslateUi(MainWindowChef);

        QMetaObject::connectSlotsByName(MainWindowChef);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowChef)
    {
        MainWindowChef->setWindowTitle(QApplication::translate("MainWindowChef", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowChef: public Ui_MainWindowChef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCHEF_H
