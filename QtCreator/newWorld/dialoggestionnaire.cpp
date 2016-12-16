#include "dialoggestionnaire.h"
#include "ui_dialoggestionnaire.h"

DialogGestionnaire::DialogGestionnaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionnaire)
{
    ui->setupUi(this);
}

DialogGestionnaire::~DialogGestionnaire()
{
    delete ui;
}
