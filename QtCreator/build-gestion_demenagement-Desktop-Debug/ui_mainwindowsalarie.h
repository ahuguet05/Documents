/********************************************************************************
** Form generated from reading UI file 'mainwindowsalarie.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWSALARIE_H
#define UI_MAINWINDOWSALARIE_H

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

class Ui_MainWindowSalarie
{
public:
    QAction *action_Quitter;
    QWidget *centralwidget;
    QTableWidget *tableWidgetSalarie;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowSalarie)
    {
        if (MainWindowSalarie->objectName().isEmpty())
            MainWindowSalarie->setObjectName(QString::fromUtf8("MainWindowSalarie"));
        MainWindowSalarie->resize(800, 600);
        action_Quitter = new QAction(MainWindowSalarie);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        centralwidget = new QWidget(MainWindowSalarie);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidgetSalarie = new QTableWidget(centralwidget);
        if (tableWidgetSalarie->columnCount() < 6)
            tableWidgetSalarie->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetSalarie->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetSalarie->setObjectName(QString::fromUtf8("tableWidgetSalarie"));
        tableWidgetSalarie->setGeometry(QRect(50, 40, 621, 181));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 340, 144, 31));
        MainWindowSalarie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowSalarie);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        MainWindowSalarie->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowSalarie);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowSalarie->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(MainWindowSalarie);

        QMetaObject::connectSlotsByName(MainWindowSalarie);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowSalarie)
    {
        MainWindowSalarie->setWindowTitle(QApplication::translate("MainWindowSalarie", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindowSalarie", "&Quitter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetSalarie->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowSalarie", "Num\303\251ro", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetSalarie->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowSalarie", "Date_Debut", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetSalarie->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowSalarie", "Chargement", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetSalarie->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowSalarie", "Livraison", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetSalarie->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowSalarie", "Chef_Equipe", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetSalarie->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindowSalarie", "Etat", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindowSalarie", "Demande de cong\303\251", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindowSalarie", "&Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowSalarie: public Ui_MainWindowSalarie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWSALARIE_H
