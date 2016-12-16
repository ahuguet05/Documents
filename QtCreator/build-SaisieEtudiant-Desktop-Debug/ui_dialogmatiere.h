/********************************************************************************
** Form generated from reading UI file 'dialogmatiere.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMATIERE_H
#define UI_DIALOGMATIERE_H

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

class Ui_DialogMatiere
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditNomMatiere;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogMatiere)
    {
        if (DialogMatiere->objectName().isEmpty())
            DialogMatiere->setObjectName(QString::fromUtf8("DialogMatiere"));
        DialogMatiere->resize(266, 92);
        verticalLayout_2 = new QVBoxLayout(DialogMatiere);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(DialogMatiere);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEditNomMatiere = new QLineEdit(DialogMatiere);
        lineEditNomMatiere->setObjectName(QString::fromUtf8("lineEditNomMatiere"));

        horizontalLayout_2->addWidget(lineEditNomMatiere);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(DialogMatiere);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DialogMatiere);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMatiere, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMatiere, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMatiere);
    } // setupUi

    void retranslateUi(QDialog *DialogMatiere)
    {
        DialogMatiere->setWindowTitle(QApplication::translate("DialogMatiere", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogMatiere", "Subject Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogMatiere: public Ui_DialogMatiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMATIERE_H
