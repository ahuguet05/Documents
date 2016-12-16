/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxAfficher;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonSupprimer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_nom;
    QLabel *label_Prenom;
    QLabel *label_Mail;
    QLabel *label_Tel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_affNom;
    QLabel *label_affPrenom;
    QLabel *label_affMail;
    QLabel *label_affTel;
    QPushButton *pushButtonModifier;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(209, 274);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBoxAfficher = new QComboBox(centralWidget);
        comboBoxAfficher->setObjectName(QString::fromUtf8("comboBoxAfficher"));

        horizontalLayout_2->addWidget(comboBoxAfficher);

        pushButtonAjouter = new QPushButton(centralWidget);
        pushButtonAjouter->setObjectName(QString::fromUtf8("pushButtonAjouter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/22x22/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouter->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonAjouter);

        pushButtonSupprimer = new QPushButton(centralWidget);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/22x22/actions/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonSupprimer);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_nom = new QLabel(centralWidget);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));

        verticalLayout->addWidget(label_nom);

        label_Prenom = new QLabel(centralWidget);
        label_Prenom->setObjectName(QString::fromUtf8("label_Prenom"));

        verticalLayout->addWidget(label_Prenom);

        label_Mail = new QLabel(centralWidget);
        label_Mail->setObjectName(QString::fromUtf8("label_Mail"));

        verticalLayout->addWidget(label_Mail);

        label_Tel = new QLabel(centralWidget);
        label_Tel->setObjectName(QString::fromUtf8("label_Tel"));

        verticalLayout->addWidget(label_Tel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_affNom = new QLabel(centralWidget);
        label_affNom->setObjectName(QString::fromUtf8("label_affNom"));

        verticalLayout_2->addWidget(label_affNom);

        label_affPrenom = new QLabel(centralWidget);
        label_affPrenom->setObjectName(QString::fromUtf8("label_affPrenom"));

        verticalLayout_2->addWidget(label_affPrenom);

        label_affMail = new QLabel(centralWidget);
        label_affMail->setObjectName(QString::fromUtf8("label_affMail"));

        verticalLayout_2->addWidget(label_affMail);

        label_affTel = new QLabel(centralWidget);
        label_affTel->setObjectName(QString::fromUtf8("label_affTel"));

        verticalLayout_2->addWidget(label_affTel);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        pushButtonModifier = new QPushButton(centralWidget);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../usr/share/icons/gnome/22x22/actions/gtk-execute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifier->setIcon(icon2);

        gridLayout->addWidget(pushButtonModifier, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 209, 27));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Contact", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        pushButtonAjouter->setText(QString());
        pushButtonSupprimer->setText(QString());
        label_nom->setText(QApplication::translate("MainWindow", "Nom: ", 0, QApplication::UnicodeUTF8));
        label_Prenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom:", 0, QApplication::UnicodeUTF8));
        label_Mail->setText(QApplication::translate("MainWindow", "Mail: ", 0, QApplication::UnicodeUTF8));
        label_Tel->setText(QApplication::translate("MainWindow", "T\303\251l Portable:", 0, QApplication::UnicodeUTF8));
        label_affNom->setText(QString());
        label_affPrenom->setText(QString());
        label_affMail->setText(QString());
        label_affTel->setText(QString());
        pushButtonModifier->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
