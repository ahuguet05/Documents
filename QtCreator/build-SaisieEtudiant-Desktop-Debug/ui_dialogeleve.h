/********************************************************************************
** Form generated from reading UI file 'dialogeleve.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGELEVE_H
#define UI_DIALOGELEVE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEleve
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *lineEditLastName;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *lineEditFirstName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogEleve)
    {
        if (DialogEleve->objectName().isEmpty())
            DialogEleve->setObjectName(QString::fromUtf8("DialogEleve"));
        DialogEleve->resize(249, 127);
        verticalLayout = new QVBoxLayout(DialogEleve);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_2 = new QSplitter(DialogEleve);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_2->addWidget(label);
        lineEditLastName = new QLineEdit(splitter_2);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));
        splitter_2->addWidget(lineEditLastName);

        verticalLayout->addWidget(splitter_2);

        splitter = new QSplitter(DialogEleve);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        lineEditFirstName = new QLineEdit(splitter);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));
        splitter->addWidget(lineEditFirstName);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(DialogEleve);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogEleve);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogEleve, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogEleve, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogEleve);
    } // setupUi

    void retranslateUi(QDialog *DialogEleve)
    {
        DialogEleve->setWindowTitle(QApplication::translate("DialogEleve", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogEleve", "Last Name : ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogEleve", "First Name : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogEleve: public Ui_DialogEleve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGELEVE_H
