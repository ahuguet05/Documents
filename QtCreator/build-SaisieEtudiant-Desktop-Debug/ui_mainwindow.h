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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QComboBox *comboBoxSection;
    QPushButton *CreerSection;
    QLabel *label;
    QTableWidget *tableWidgetStudent;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *AjouterMatiere;
    QComboBox *comboBoxMatieres;
    QPushButton *CreerMatiere;
    QPushButton *addStudent;
    QListWidget *listWidgetMatieres;
    QLabel *label_2;
    QLabel *labelSectionCourante;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1015, 633);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBoxSection = new QComboBox(centralWidget);
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));
        comboBoxSection->setGeometry(QRect(100, 30, 83, 29));
        CreerSection = new QPushButton(centralWidget);
        CreerSection->setObjectName(QString::fromUtf8("CreerSection"));
        CreerSection->setGeometry(QRect(200, 30, 111, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 66, 21));
        tableWidgetStudent = new QTableWidget(centralWidget);
        if (tableWidgetStudent->columnCount() < 2)
            tableWidgetStudent->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetStudent->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetStudent->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetStudent->setObjectName(QString::fromUtf8("tableWidgetStudent"));
        tableWidgetStudent->setGeometry(QRect(70, 230, 331, 192));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(760, 180, 66, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 190, 66, 21));
        AjouterMatiere = new QPushButton(centralWidget);
        AjouterMatiere->setObjectName(QString::fromUtf8("AjouterMatiere"));
        AjouterMatiere->setGeometry(QRect(850, 490, 95, 31));
        comboBoxMatieres = new QComboBox(centralWidget);
        comboBoxMatieres->setObjectName(QString::fromUtf8("comboBoxMatieres"));
        comboBoxMatieres->setGeometry(QRect(630, 490, 83, 29));
        CreerMatiere = new QPushButton(centralWidget);
        CreerMatiere->setObjectName(QString::fromUtf8("CreerMatiere"));
        CreerMatiere->setGeometry(QRect(730, 490, 111, 31));
        addStudent = new QPushButton(centralWidget);
        addStudent->setObjectName(QString::fromUtf8("addStudent"));
        addStudent->setGeometry(QRect(180, 440, 95, 31));
        listWidgetMatieres = new QListWidget(centralWidget);
        listWidgetMatieres->setObjectName(QString::fromUtf8("listWidgetMatieres"));
        listWidgetMatieres->setGeometry(QRect(630, 220, 311, 231));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 113, 21));
        labelSectionCourante = new QLabel(centralWidget);
        labelSectionCourante->setObjectName(QString::fromUtf8("labelSectionCourante"));
        labelSectionCourante->setGeometry(QRect(150, 90, 66, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1015, 27));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        CreerSection->setText(QApplication::translate("MainWindow", "Create Section", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Section :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetStudent->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "First Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetStudent->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Last Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Subjects", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Students", 0, QApplication::UnicodeUTF8));
        AjouterMatiere->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        CreerMatiere->setText(QApplication::translate("MainWindow", "Create subject", 0, QApplication::UnicodeUTF8));
        addStudent->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Current Section : ", 0, QApplication::UnicodeUTF8));
        labelSectionCourante->setText(QApplication::translate("MainWindow", "no section", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
