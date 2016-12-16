/********************************************************************************
** Form generated from reading UI file 'dialogajoutdossiercommercial.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTDOSSIERCOMMERCIAL_H
#define UI_DIALOGAJOUTDOSSIERCOMMERCIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutDossierCommercial
{
public:
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDateDebutCommercial;
    QLabel *labelChargementCommercial;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditDateDebutCommercial;
    QLineEdit *lineEditChargementCommercial;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelDateFinCommercial;
    QLabel *labelLivraisonCommercial;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditDateFinCommercial;
    QLineEdit *lineEditLivraisonCommercial;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QListView *listViewVehiculesDispo;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonUtiliser;
    QPushButton *pushButtonNePasUtiliser;
    QSpacerItem *horizontalSpacer_2;
    QListView *listViewVehiculesChoisi;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QListView *listViewDemenageurDispo;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonChoisir;
    QPushButton *pushButtonRetirer;
    QSpacerItem *horizontalSpacer_5;
    QListView *listViewDemenageurChoisi;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelChefEquipeCommercial;
    QComboBox *comboBoxChefEquipe;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBoxDemenageurAttribue;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QListView *listViewVehiculesAttribue;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonAttribuer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutDossierCommercial)
    {
        if (DialogAjoutDossierCommercial->objectName().isEmpty())
            DialogAjoutDossierCommercial->setObjectName(QString::fromUtf8("DialogAjoutDossierCommercial"));
        DialogAjoutDossierCommercial->resize(773, 916);
        verticalLayout_10 = new QVBoxLayout(DialogAjoutDossierCommercial);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelDateDebutCommercial = new QLabel(DialogAjoutDossierCommercial);
        labelDateDebutCommercial->setObjectName(QString::fromUtf8("labelDateDebutCommercial"));

        verticalLayout_2->addWidget(labelDateDebutCommercial);

        labelChargementCommercial = new QLabel(DialogAjoutDossierCommercial);
        labelChargementCommercial->setObjectName(QString::fromUtf8("labelChargementCommercial"));

        verticalLayout_2->addWidget(labelChargementCommercial);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditDateDebutCommercial = new QLineEdit(DialogAjoutDossierCommercial);
        lineEditDateDebutCommercial->setObjectName(QString::fromUtf8("lineEditDateDebutCommercial"));

        verticalLayout->addWidget(lineEditDateDebutCommercial);

        lineEditChargementCommercial = new QLineEdit(DialogAjoutDossierCommercial);
        lineEditChargementCommercial->setObjectName(QString::fromUtf8("lineEditChargementCommercial"));

        verticalLayout->addWidget(lineEditChargementCommercial);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelDateFinCommercial = new QLabel(DialogAjoutDossierCommercial);
        labelDateFinCommercial->setObjectName(QString::fromUtf8("labelDateFinCommercial"));

        verticalLayout_4->addWidget(labelDateFinCommercial);

        labelLivraisonCommercial = new QLabel(DialogAjoutDossierCommercial);
        labelLivraisonCommercial->setObjectName(QString::fromUtf8("labelLivraisonCommercial"));

        verticalLayout_4->addWidget(labelLivraisonCommercial);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEditDateFinCommercial = new QLineEdit(DialogAjoutDossierCommercial);
        lineEditDateFinCommercial->setObjectName(QString::fromUtf8("lineEditDateFinCommercial"));

        verticalLayout_3->addWidget(lineEditDateFinCommercial);

        lineEditLivraisonCommercial = new QLineEdit(DialogAjoutDossierCommercial);
        lineEditLivraisonCommercial->setObjectName(QString::fromUtf8("lineEditLivraisonCommercial"));

        verticalLayout_3->addWidget(lineEditLivraisonCommercial);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        listViewVehiculesDispo = new QListView(DialogAjoutDossierCommercial);
        listViewVehiculesDispo->setObjectName(QString::fromUtf8("listViewVehiculesDispo"));

        horizontalLayout_5->addWidget(listViewVehiculesDispo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButtonUtiliser = new QPushButton(DialogAjoutDossierCommercial);
        pushButtonUtiliser->setObjectName(QString::fromUtf8("pushButtonUtiliser"));

        verticalLayout_6->addWidget(pushButtonUtiliser);

        pushButtonNePasUtiliser = new QPushButton(DialogAjoutDossierCommercial);
        pushButtonNePasUtiliser->setObjectName(QString::fromUtf8("pushButtonNePasUtiliser"));

        verticalLayout_6->addWidget(pushButtonNePasUtiliser);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        listViewVehiculesChoisi = new QListView(DialogAjoutDossierCommercial);
        listViewVehiculesChoisi->setObjectName(QString::fromUtf8("listViewVehiculesChoisi"));

        horizontalLayout_5->addWidget(listViewVehiculesChoisi);


        verticalLayout_8->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        listViewDemenageurDispo = new QListView(DialogAjoutDossierCommercial);
        listViewDemenageurDispo->setObjectName(QString::fromUtf8("listViewDemenageurDispo"));

        horizontalLayout_6->addWidget(listViewDemenageurDispo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButtonChoisir = new QPushButton(DialogAjoutDossierCommercial);
        pushButtonChoisir->setObjectName(QString::fromUtf8("pushButtonChoisir"));

        verticalLayout_7->addWidget(pushButtonChoisir);

        pushButtonRetirer = new QPushButton(DialogAjoutDossierCommercial);
        pushButtonRetirer->setObjectName(QString::fromUtf8("pushButtonRetirer"));

        verticalLayout_7->addWidget(pushButtonRetirer);


        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        listViewDemenageurChoisi = new QListView(DialogAjoutDossierCommercial);
        listViewDemenageurChoisi->setObjectName(QString::fromUtf8("listViewDemenageurChoisi"));

        horizontalLayout_6->addWidget(listViewDemenageurChoisi);


        verticalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labelChefEquipeCommercial = new QLabel(DialogAjoutDossierCommercial);
        labelChefEquipeCommercial->setObjectName(QString::fromUtf8("labelChefEquipeCommercial"));

        horizontalLayout_8->addWidget(labelChefEquipeCommercial);

        comboBoxChefEquipe = new QComboBox(DialogAjoutDossierCommercial);
        comboBoxChefEquipe->setObjectName(QString::fromUtf8("comboBoxChefEquipe"));

        horizontalLayout_8->addWidget(comboBoxChefEquipe);


        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBoxDemenageurAttribue = new QComboBox(DialogAjoutDossierCommercial);
        comboBoxDemenageurAttribue->setObjectName(QString::fromUtf8("comboBoxDemenageurAttribue"));
        comboBoxDemenageurAttribue->setSizeIncrement(QSize(0, 0));
        comboBoxDemenageurAttribue->setIconSize(QSize(16, 16));

        horizontalLayout_7->addWidget(comboBoxDemenageurAttribue);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        listViewVehiculesAttribue = new QListView(DialogAjoutDossierCommercial);
        listViewVehiculesAttribue->setObjectName(QString::fromUtf8("listViewVehiculesAttribue"));

        horizontalLayout_4->addWidget(listViewVehiculesAttribue);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonAttribuer = new QPushButton(DialogAjoutDossierCommercial);
        pushButtonAttribuer->setObjectName(QString::fromUtf8("pushButtonAttribuer"));

        horizontalLayout_4->addWidget(pushButtonAttribuer);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_10->addLayout(verticalLayout_9);

        buttonBox = new QDialogButtonBox(DialogAjoutDossierCommercial);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_10->addWidget(buttonBox);


        retranslateUi(DialogAjoutDossierCommercial);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutDossierCommercial, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutDossierCommercial, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutDossierCommercial);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutDossierCommercial)
    {
        DialogAjoutDossierCommercial->setWindowTitle(QApplication::translate("DialogAjoutDossierCommercial", "Dialog", 0, QApplication::UnicodeUTF8));
        labelDateDebutCommercial->setText(QApplication::translate("DialogAjoutDossierCommercial", "Date de d\303\251but :", 0, QApplication::UnicodeUTF8));
        labelChargementCommercial->setText(QApplication::translate("DialogAjoutDossierCommercial", "Adresse de chargement :", 0, QApplication::UnicodeUTF8));
        labelDateFinCommercial->setText(QApplication::translate("DialogAjoutDossierCommercial", "Date de fin :", 0, QApplication::UnicodeUTF8));
        labelLivraisonCommercial->setText(QApplication::translate("DialogAjoutDossierCommercial", "Adresse de livraison :", 0, QApplication::UnicodeUTF8));
        pushButtonUtiliser->setText(QApplication::translate("DialogAjoutDossierCommercial", "Utiliser >>", 0, QApplication::UnicodeUTF8));
        pushButtonNePasUtiliser->setText(QApplication::translate("DialogAjoutDossierCommercial", "<< Ne pas utiliser", 0, QApplication::UnicodeUTF8));
        pushButtonChoisir->setText(QApplication::translate("DialogAjoutDossierCommercial", "Choisi >>", 0, QApplication::UnicodeUTF8));
        pushButtonRetirer->setText(QApplication::translate("DialogAjoutDossierCommercial", "<< Retirer", 0, QApplication::UnicodeUTF8));
        labelChefEquipeCommercial->setText(QApplication::translate("DialogAjoutDossierCommercial", "Chef d'\303\251quipe :", 0, QApplication::UnicodeUTF8));
        pushButtonAttribuer->setText(QApplication::translate("DialogAjoutDossierCommercial", "Attribuer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutDossierCommercial: public Ui_DialogAjoutDossierCommercial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTDOSSIERCOMMERCIAL_H
