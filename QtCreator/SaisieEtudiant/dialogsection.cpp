#include "dialogsection.h"
#include "ui_dialogsection.h"

DialogSection::DialogSection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSection)
{
    ui->setupUi(this);
}

DialogSection::~DialogSection()
{
    delete ui;
}

QString DialogSection::getNom()
{
    return ui->lineEditNomSection->text();
}
