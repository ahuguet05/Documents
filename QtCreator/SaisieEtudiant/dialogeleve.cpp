#include "dialogeleve.h"
#include "ui_dialogeleve.h"

DialogEleve::DialogEleve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEleve)
{
    ui->setupUi(this);
}

QString DialogEleve::getNom()
{
    return ui->lineEditLastName->text();
}

QString DialogEleve::getPrenom()
{
    return ui->lineEditFirstName->text();
}

DialogEleve::~DialogEleve()
{
    delete ui;
}
