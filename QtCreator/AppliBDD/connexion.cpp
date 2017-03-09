#include "connexion.h"
#include "ui_connexion.h"
#include <QPushButton>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>


Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
}

Connexion::~Connexion()
{
    delete ui;
}


bool valid_login;
bool valid_pwd;


void Connexion::on_pushButton_2_clicked()
{
    reject();
}

void Connexion::on_pushButton_clicked()
{

    QSqlDatabase maBase=QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setUserName(ui->lineEditLogin->text());
    maBase.setPassword(ui->lineEditPassword->text());
    if(maBase.open())
    {
            accept();
    }
    else
    {
        QMessageBox::warning(this,"SQLWorkbench",maBase.lastError().text());
    }
}



void Connexion::on_lineEditLogin_textChanged(const QString &arg1)
{
    if (arg1.isEmpty())
    {
        ui->pushButton->setDisabled(true);
    }
        else
        {
            valid_login = true;
        }
    if (valid_login == true && valid_pwd == true)

    {
        ui->pushButton->setEnabled(true);
    }
        else
        {
            ui->pushButton->setDisabled(true);
        }

}



void Connexion::on_lineEditPassword_textChanged(const QString &arg1)
{
    if (arg1.isEmpty())
    {
        ui->pushButton->setDisabled(true);
    }
        else
        {
            valid_pwd = true;
        }
    if (valid_pwd == true && valid_login == true)

    {
        ui->pushButton->setEnabled(true);
    }
        else
        {
            ui->pushButton->setDisabled(true);
        }

}

