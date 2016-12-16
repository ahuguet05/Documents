/********************************************************************************
** Form generated from reading UI file 'dialogsection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSECTION_H
#define UI_DIALOGSECTION_H

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

class Ui_DialogSection
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNomSection;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSection)
    {
        if (DialogSection->objectName().isEmpty())
            DialogSection->setObjectName(QString::fromUtf8("DialogSection"));
        DialogSection->resize(264, 90);
        verticalLayout = new QVBoxLayout(DialogSection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogSection);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNomSection = new QLineEdit(DialogSection);
        lineEditNomSection->setObjectName(QString::fromUtf8("lineEditNomSection"));

        horizontalLayout->addWidget(lineEditNomSection);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogSection);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogSection);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSection, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSection, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSection);
    } // setupUi

    void retranslateUi(QDialog *DialogSection)
    {
        DialogSection->setWindowTitle(QApplication::translate("DialogSection", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSection", "Nom Section: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSection: public Ui_DialogSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSECTION_H
