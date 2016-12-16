/********************************************************************************
** Form generated from reading UI file 'dialogajouter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTER_H
#define UI_DIALOGAJOUTER_H

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

QT_BEGIN_NAMESPACE

class Ui_DialogAjouter
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_diagNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_diagPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_diagMail;
    QLineEdit *lineEditMail;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_diagTel;
    QLineEdit *lineEditTel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjouter)
    {
        if (DialogAjouter->objectName().isEmpty())
            DialogAjouter->setObjectName(QString::fromUtf8("DialogAjouter"));
        DialogAjouter->resize(312, 217);
        verticalLayout_3 = new QVBoxLayout(DialogAjouter);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_diagNom = new QLabel(DialogAjouter);
        label_diagNom->setObjectName(QString::fromUtf8("label_diagNom"));

        horizontalLayout->addWidget(label_diagNom);

        lineEditNom = new QLineEdit(DialogAjouter);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_diagPrenom = new QLabel(DialogAjouter);
        label_diagPrenom->setObjectName(QString::fromUtf8("label_diagPrenom"));

        horizontalLayout_2->addWidget(label_diagPrenom);

        lineEditPrenom = new QLineEdit(DialogAjouter);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_diagMail = new QLabel(DialogAjouter);
        label_diagMail->setObjectName(QString::fromUtf8("label_diagMail"));

        horizontalLayout_3->addWidget(label_diagMail);

        lineEditMail = new QLineEdit(DialogAjouter);
        lineEditMail->setObjectName(QString::fromUtf8("lineEditMail"));

        horizontalLayout_3->addWidget(lineEditMail);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_diagTel = new QLabel(DialogAjouter);
        label_diagTel->setObjectName(QString::fromUtf8("label_diagTel"));

        horizontalLayout_4->addWidget(label_diagTel);

        lineEditTel = new QLineEdit(DialogAjouter);
        lineEditTel->setObjectName(QString::fromUtf8("lineEditTel"));

        horizontalLayout_4->addWidget(lineEditTel);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(DialogAjouter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(DialogAjouter);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjouter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjouter, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjouter);
    } // setupUi

    void retranslateUi(QDialog *DialogAjouter)
    {
        DialogAjouter->setWindowTitle(QApplication::translate("DialogAjouter", "AddContact", 0, QApplication::UnicodeUTF8));
        label_diagNom->setText(QApplication::translate("DialogAjouter", "Nom: ", 0, QApplication::UnicodeUTF8));
        label_diagPrenom->setText(QApplication::translate("DialogAjouter", "Pr\303\251nom:", 0, QApplication::UnicodeUTF8));
        label_diagMail->setText(QApplication::translate("DialogAjouter", "Mail:", 0, QApplication::UnicodeUTF8));
        label_diagTel->setText(QApplication::translate("DialogAjouter", "T\303\251l\303\251phone portable: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjouter: public Ui_DialogAjouter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTER_H
