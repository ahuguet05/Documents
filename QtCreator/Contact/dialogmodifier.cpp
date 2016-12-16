#include "dialogmodifier.h"
#include "ui_dialogmodifier.h"

Dialogmodifier::Dialogmodifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogmodifier)
{
    ui->setupUi(this);
}

Dialogmodifier::~Dialogmodifier()
{
    delete ui;
}

QString Dialogmodifier::getNom()
{
    return ui->lineEditModifNom->text();
}

QString Dialogmodifier::getPrenom()
{
    return ui->lineEditModifPrenom->text();
}

QString Dialogmodifier::getMail()
{
    return ui->lineEditModifMail->text();
}

QString Dialogmodifier::getTel()
{
    return ui->lineEditModifTel->text();
}
