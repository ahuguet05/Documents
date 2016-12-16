/********************************************************************************
** Form generated from reading UI file 'mainwindowchefentreprise.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCHEFENTREPRISE_H
#define UI_MAINWINDOWCHEFENTREPRISE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowChefEntreprise
{
public:
    QAction *action_Quitter;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewAgenceChefEntreprise;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QListView *listViewSalaries;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menu_About;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowChefEntreprise)
    {
        if (MainWindowChefEntreprise->objectName().isEmpty())
            MainWindowChefEntreprise->setObjectName(QString::fromUtf8("MainWindowChefEntreprise"));
        MainWindowChefEntreprise->resize(276, 681);
        action_Quitter = new QAction(MainWindowChefEntreprise);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        centralwidget = new QWidget(MainWindowChefEntreprise);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 258, 233));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableViewAgenceChefEntreprise = new QTableView(widget);
        tableViewAgenceChefEntreprise->setObjectName(QString::fromUtf8("tableViewAgenceChefEntreprise"));

        verticalLayout->addWidget(tableViewAgenceChefEntreprise);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 248, 258, 371));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listViewSalaries = new QListView(widget1);
        listViewSalaries->setObjectName(QString::fromUtf8("listViewSalaries"));

        verticalLayout_2->addWidget(listViewSalaries);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindowChefEntreprise->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowChefEntreprise);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 276, 27));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menu_About = new QMenu(menubar);
        menu_About->setObjectName(QString::fromUtf8("menu_About"));
        MainWindowChefEntreprise->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowChefEntreprise);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowChefEntreprise->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menu_About->menuAction());
        menuFichier->addAction(action_Quitter);

        retranslateUi(MainWindowChefEntreprise);

        QMetaObject::connectSlotsByName(MainWindowChefEntreprise);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowChefEntreprise)
    {
        MainWindowChefEntreprise->setWindowTitle(QApplication::translate("MainWindowChefEntreprise", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindowChefEntreprise", "&Quitter", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindowChefEntreprise", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindowChefEntreprise", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindowChefEntreprise", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindowChefEntreprise", "Licencier", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindowChefEntreprise", "&Fichier", 0, QApplication::UnicodeUTF8));
        menu_About->setTitle(QApplication::translate("MainWindowChefEntreprise", "&About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowChefEntreprise: public Ui_MainWindowChefEntreprise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCHEFENTREPRISE_H
