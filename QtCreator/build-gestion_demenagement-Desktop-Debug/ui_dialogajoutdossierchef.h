/********************************************************************************
** Form generated from reading UI file 'dialogajoutdossierchef.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTDOSSIERCHEF_H
#define UI_DIALOGAJOUTDOSSIERCHEF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutDossierChef
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAgenceCommercial;
    QLineEdit *lineEditAgenceCommercial;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDateDebutCommercial;
    QLabel *labelChargementCommercial;
    QLabel *labelDemenageurCommercial;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditDateDebutCommercial;
    QLineEdit *lineEditChargementCommercial;
    QLineEdit *lineEditDemenageurCommercial;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelDateFinChef;
    QLabel *labelLivraisonChef;
    QLabel *labelChefEquipe;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditDateFinCommercial;
    QLineEdit *lineEditLivraisonCommercial;
    QLineEdit *lineEditChefEquipeCommercial;

    void setupUi(QDialog *DialogAjoutDossierChef)
    {
        if (DialogAjoutDossierChef->objectName().isEmpty())
            DialogAjoutDossierChef->setObjectName(QString::fromUtf8("DialogAjoutDossierChef"));
        DialogAjoutDossierChef->resize(832, 455);
        buttonBox = new QDialogButtonBox(DialogAjoutDossierChef);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(590, 400, 176, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(DialogAjoutDossierChef);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 210, 202, 35));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelAgenceCommercial = new QLabel(widget);
        labelAgenceCommercial->setObjectName(QString::fromUtf8("labelAgenceCommercial"));

        horizontalLayout_4->addWidget(labelAgenceCommercial);

        lineEditAgenceCommercial = new QLineEdit(widget);
        lineEditAgenceCommercial->setObjectName(QString::fromUtf8("lineEditAgenceCommercial"));

        horizontalLayout_4->addWidget(lineEditAgenceCommercial);

        widget1 = new QWidget(DialogAjoutDossierChef);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 80, 552, 117));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelDateDebutCommercial = new QLabel(widget1);
        labelDateDebutCommercial->setObjectName(QString::fromUtf8("labelDateDebutCommercial"));

        verticalLayout_2->addWidget(labelDateDebutCommercial);

        labelChargementCommercial = new QLabel(widget1);
        labelChargementCommercial->setObjectName(QString::fromUtf8("labelChargementCommercial"));

        verticalLayout_2->addWidget(labelChargementCommercial);

        labelDemenageurCommercial = new QLabel(widget1);
        labelDemenageurCommercial->setObjectName(QString::fromUtf8("labelDemenageurCommercial"));

        verticalLayout_2->addWidget(labelDemenageurCommercial);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditDateDebutCommercial = new QLineEdit(widget1);
        lineEditDateDebutCommercial->setObjectName(QString::fromUtf8("lineEditDateDebutCommercial"));

        verticalLayout->addWidget(lineEditDateDebutCommercial);

        lineEditChargementCommercial = new QLineEdit(widget1);
        lineEditChargementCommercial->setObjectName(QString::fromUtf8("lineEditChargementCommercial"));

        verticalLayout->addWidget(lineEditChargementCommercial);

        lineEditDemenageurCommercial = new QLineEdit(widget1);
        lineEditDemenageurCommercial->setObjectName(QString::fromUtf8("lineEditDemenageurCommercial"));

        verticalLayout->addWidget(lineEditDemenageurCommercial);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelDateFinChef = new QLabel(widget1);
        labelDateFinChef->setObjectName(QString::fromUtf8("labelDateFinChef"));

        verticalLayout_4->addWidget(labelDateFinChef);

        labelLivraisonChef = new QLabel(widget1);
        labelLivraisonChef->setObjectName(QString::fromUtf8("labelLivraisonChef"));

        verticalLayout_4->addWidget(labelLivraisonChef);

        labelChefEquipe = new QLabel(widget1);
        labelChefEquipe->setObjectName(QString::fromUtf8("labelChefEquipe"));

        verticalLayout_4->addWidget(labelChefEquipe);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEditDateFinCommercial = new QLineEdit(widget1);
        lineEditDateFinCommercial->setObjectName(QString::fromUtf8("lineEditDateFinCommercial"));

        verticalLayout_3->addWidget(lineEditDateFinCommercial);

        lineEditLivraisonCommercial = new QLineEdit(widget1);
        lineEditLivraisonCommercial->setObjectName(QString::fromUtf8("lineEditLivraisonCommercial"));

        verticalLayout_3->addWidget(lineEditLivraisonCommercial);

        lineEditChefEquipeCommercial = new QLineEdit(widget1);
        lineEditChefEquipeCommercial->setObjectName(QString::fromUtf8("lineEditChefEquipeCommercial"));

        verticalLayout_3->addWidget(lineEditChefEquipeCommercial);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(DialogAjoutDossierChef);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutDossierChef, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutDossierChef, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutDossierChef);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutDossierChef)
    {
        DialogAjoutDossierChef->setWindowTitle(QApplication::translate("DialogAjoutDossierChef", "Dialog", 0, QApplication::UnicodeUTF8));
        labelAgenceCommercial->setText(QApplication::translate("DialogAjoutDossierChef", "Agence", 0, QApplication::UnicodeUTF8));
        labelDateDebutCommercial->setText(QApplication::translate("DialogAjoutDossierChef", "Date de d\303\251but :", 0, QApplication::UnicodeUTF8));
        labelChargementCommercial->setText(QApplication::translate("DialogAjoutDossierChef", "Adresse de chargement :", 0, QApplication::UnicodeUTF8));
        labelDemenageurCommercial->setText(QApplication::translate("DialogAjoutDossierChef", "Nombre de d\303\251m\303\251nageur :", 0, QApplication::UnicodeUTF8));
        labelDateFinChef->setText(QApplication::translate("DialogAjoutDossierChef", "Date de fin :", 0, QApplication::UnicodeUTF8));
        labelLivraisonChef->setText(QApplication::translate("DialogAjoutDossierChef", "Adresse de livraison :", 0, QApplication::UnicodeUTF8));
        labelChefEquipe->setText(QApplication::translate("DialogAjoutDossierChef", "Chef d'\303\251quipe :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutDossierCommercial: public Ui_DialogAjoutDossierChef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTDOSSIERCHEF_H
