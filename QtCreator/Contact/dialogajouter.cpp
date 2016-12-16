#include "dialogajouter.h"
#include "ui_dialogajouter.h"

DialogAjouter::DialogAjouter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjouter)
{
    ui->setupUi(this);
}

DialogAjouter::~DialogAjouter()
{
    delete ui;
}

QString DialogAjouter::getNom()
{
    return ui->lineEditNom->text();
}

QString DialogAjouter::getPrenom()
{
    return ui->lineEditPrenom->text();
}

QString DialogAjouter::getMail()
{
    return ui->lineEditMail->text();
}

QString DialogAjouter::getTel()
{
    return ui->lineEditTel->text();
}
