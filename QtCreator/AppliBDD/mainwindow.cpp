#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargeLesBdd();
}

MainWindow::~MainWindow()
{

    delete ui;

}

void MainWindow::chargeLesBdd()
{
    QSqlQuery reqBdd("show databases");
    while (reqBdd.next())
    {
        QString Bddnom = reqBdd.value(0).toString();
        ui->comboBoxBDD->addItem(Bddnom);
    }
}

void MainWindow::on_comboBoxBDD_activated(const QString &arg1)
{
    qDebug();
    ui->listWidgetTables->clear();
   QSqlQuery reqConnect("use "+arg1);
       QSqlQuery reqTables("show tables");
       while (reqTables.next())
       {
           QString Tablenom = reqTables.value(0).toString();
           ui->listWidgetTables->addItem(Tablenom);
       }
}

void MainWindow::on_listWidgetTables_currentTextChanged(const QString &currentText)
{
    qDebug();
    ui->listWidgetChamps->clear();
    QSqlQuery reqChamps("show fields from "+currentText);
    while (reqChamps.next())
    {
        QString Champnom = reqChamps.value(0).toString();
        ui->listWidgetChamps->addItem(Champnom);
    }
}

void MainWindow::on_pushButtonReset_clicked()
{
    ui->textEditRequete->clear();
}

void MainWindow::on_textEditRequete_textChanged()
{


}

void MainWindow::on_pushButtonValider_clicked()
{
    qDebug();
    QString textRequete;
    textRequete = ui->textEditRequete->toPlainText();
    QSqlQuery reqExec(textRequete);

    // Afficher resultat requete
    //ui->tableWidgetResultat->"";
}
