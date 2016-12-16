/********************************************************************************
** Form generated from reading UI file 'mainwindowcommercial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCOMMERCIAL_H
#define UI_MAINWINDOWCOMMERCIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowCommercial
{
public:
    QAction *actionQuitter;
    QWidget *centralwidget;
    QTableWidget *tableWidgetCommercial;
    QPushButton *pushButtonAjouterDossier;
    QPushButton *pushButtonSupprimerDossier;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowCommercial)
    {
        if (MainWindowCommercial->objectName().isEmpty())
            MainWindowCommercial->setObjectName(QString::fromUtf8("MainWindowCommercial"));
        MainWindowCommercial->resize(888, 700);
        actionQuitter = new QAction(MainWindowCommercial);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(MainWindowCommercial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidgetCommercial = new QTableWidget(centralwidget);
        if (tableWidgetCommercial->columnCount() < 5)
            tableWidgetCommercial->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCommercial->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCommercial->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetCommercial->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCommercial->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCommercial->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetCommercial->setObjectName(QString::fromUtf8("tableWidgetCommercial"));
        tableWidgetCommercial->setGeometry(QRect(50, 70, 551, 281));
        pushButtonAjouterDossier = new QPushButton(centralwidget);
        pushButtonAjouterDossier->setObjectName(QString::fromUtf8("pushButtonAjouterDossier"));
        pushButtonAjouterDossier->setGeometry(QRect(80, 380, 111, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/images/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouterDossier->setIcon(icon);
        pushButtonSupprimerDossier = new QPushButton(centralwidget);
        pushButtonSupprimerDossier->setObjectName(QString::fromUtf8("pushButtonSupprimerDossier"));
        pushButtonSupprimerDossier->setGeometry(QRect(430, 380, 111, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/images/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimerDossier->setIcon(icon1);
        MainWindowCommercial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowCommercial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 888, 27));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindowCommercial->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowCommercial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowCommercial->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindowCommercial);

        QMetaObject::connectSlotsByName(MainWindowCommercial);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowCommercial)
    {
        MainWindowCommercial->setWindowTitle(QApplication::translate("MainWindowCommercial", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindowCommercial", "Quitter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCommercial->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowCommercial", "Numero", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCommercial->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowCommercial", "Date_Debut", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetCommercial->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowCommercial", "Etat", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCommercial->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowCommercial", "Chef_Equipe", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCommercial->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowCommercial", "Agence", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterDossier->setText(QString());
        pushButtonSupprimerDossier->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindowCommercial", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowCommercial: public Ui_MainWindowCommercial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCOMMERCIAL_H
