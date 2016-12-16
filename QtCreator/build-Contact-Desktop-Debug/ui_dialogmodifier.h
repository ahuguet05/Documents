/********************************************************************************
** Form generated from reading UI file 'dialogmodifier.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFIER_H
#define UI_DIALOGMODIFIER_H

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

class Ui_Dialogmodifier
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditModifNom;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialogmodifier)
    {
        if (Dialogmodifier->objectName().isEmpty())
            Dialogmodifier->setObjectName(QString::fromUtf8("Dialogmodifier"));
        Dialogmodifier->resize(250, 211);
        verticalLayout_4 = new QVBoxLayout(Dialogmodifier);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(Dialogmodifier);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(Dialogmodifier);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Dialogmodifier);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(Dialogmodifier);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditModifNom = new QLineEdit(Dialogmodifier);
        lineEditModifNom->setObjectName(QString::fromUtf8("lineEditModifNom"));

        verticalLayout_2->addWidget(lineEditModifNom);

        lineEdit_2 = new QLineEdit(Dialogmodifier);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(Dialogmodifier);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(Dialogmodifier);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Dialogmodifier);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Dialogmodifier);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialogmodifier, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialogmodifier, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialogmodifier);
    } // setupUi

    void retranslateUi(QDialog *Dialogmodifier)
    {
        Dialogmodifier->setWindowTitle(QApplication::translate("Dialogmodifier", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialogmodifier", "Nom:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialogmodifier", "Pr\303\251nom:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialogmodifier", "Nom:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialogmodifier", "T\303\251l\303\251phone:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialogmodifier: public Ui_Dialogmodifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFIER_H
