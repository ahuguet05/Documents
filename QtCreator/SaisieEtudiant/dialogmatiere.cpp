#include "dialogmatiere.h"
#include "ui_dialogmatiere.h"

DialogMatiere::DialogMatiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMatiere)
{
    ui->setupUi(this);
}

DialogMatiere::~DialogMatiere()
{
    delete ui;
}

QString DialogMatiere::getNomMatiere()
{
    return ui->lineEditNomMatiere->text();
}

