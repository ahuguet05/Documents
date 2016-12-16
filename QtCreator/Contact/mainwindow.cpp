#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargeLesContacts();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuitter_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
    close();
}

/*void MainWindow::on_actionAbout_triggered()
{

}*/



void MainWindow::chargeLesContacts()
{
    QSqlQuery reqContact("select * from Contact");
    while (reqContact.next())
    {
        QString cid = reqContact.value(0).toString();
        QString cnom = reqContact.value(1).toString();
        QString cprenom = reqContact.value(2).toString();
        QString cmail = reqContact.value(3).toString();
        QString ctel = reqContact.value(4).toString();
        QString FinalC = cid + " - " + cnom + " " + cprenom;
        ui->comboBoxAfficher->addItem(FinalC);
        Contact newContact;
        newContact.setId(cid);
        newContact.setNom(cnom);
        newContact.setPrenom(cprenom);
        newContact.setMail(cmail);
        newContact.setTel(ctel);
        vectContact.push_back(newContact);

    }
}


void MainWindow::on_pushButtonAjouter_clicked()
{

    DialogAjouter diagAdd;
    if (diagAdd.exec()==QDialog::Accepted)
    {
        QString an=diagAdd.getNom();
        QString ap=diagAdd.getPrenom();
        QString am=diagAdd.getMail();
        QString at=diagAdd.getTel();
        Contact nouveauContact;
    //Ajoute la section a la comboBox


            QString newId;
            int idIntContact;
            QString idInt;
            int nbContact=vectContact.size();
            if (nbContact==0)
            {
                newId="1";

            }
            else
            {
                idInt= vectContact[nbContact-1].getId();
                idIntContact=idInt.toInt();
                idIntContact ++;
                newId = QString::number(idIntContact);

            }
            QString verifContact= newId + " - " + an + " " + ap;
            nouveauContact.setId(newId);
            nouveauContact.setNom(an);
            nouveauContact.setPrenom(ap);
            nouveauContact.setMail(am);
            nouveauContact.setTel(at);
            QSqlQuery reqInsertContact;
            QString texteRequete="insert into Contact values(";
            texteRequete+= newId + ",'" + an +"'," + "'" + ap + "'," + "'" + am + "'," + "'" + at + "'";
            texteRequete+=")";
            qDebug()<<texteRequete <<endl;
            reqInsertContact.exec(texteRequete);

            vectContact.push_back(nouveauContact);
            ui->comboBoxAfficher->addItem(verifContact);

        }
        else
            ui->statusBar->showMessage(tr("This contact already exist"),2000);



}

void MainWindow::on_comboBoxAfficher_activated(const QString &arg1)
{
        int nbContact = vectContact.size();
        int noContact = 0;
        QString nomChoisi = arg1;
        while (!(noContact == nbContact || ((vectContact[noContact].getId() + " - " + vectContact[noContact].getNom() + " " + vectContact[noContact].getPrenom()) == nomChoisi)))
        {
            noContact ++;
        }
        if((vectContact[noContact].getId() + " - " + vectContact[noContact].getNom() + " " + vectContact[noContact].getPrenom()) == nomChoisi)
            {
            QString nomContact = vectContact[noContact].getNom();
            QString prenomContact = vectContact[noContact].getPrenom();
            QString mailContact = vectContact[noContact].getMail();
            QString telContact = vectContact[noContact].getTel();

            ui->label_affNom->setText(nomContact);
            ui->label_affPrenom->setText(prenomContact);
            ui->label_affMail->setText(mailContact);
            ui->label_affTel->setText(telContact);
            }

}


void MainWindow::on_pushButtonSupprimer_clicked()
{
    int nbContact = vectContact.size();
    int noContact = 0;
    QString nomChoisi = ui->comboBoxAfficher->currentText();
    while (!(noContact == nbContact || ((vectContact[noContact].getId() + " - " + vectContact[noContact].getNom() + " " + vectContact[noContact].getPrenom()) == nomChoisi)))
    {
        noContact ++;
    }

    if ((vectContact[noContact].getId() + " - " + vectContact[noContact].getNom() + " " + vectContact[noContact].getPrenom()) == nomChoisi)
    {

    QSqlQuery reqSuppContact;
    QString idContact = vectContact[noContact].getId();
    QString texteRequete="delete from Contact where id=" + idContact;
    qDebug()<<texteRequete <<endl;
    reqSuppContact.exec(texteRequete);
    ui->comboBoxAfficher->removeItem(noContact);

    if (noContact==1)
    {
        ui->label_affNom->setText("Aucun contact");
    }
    }
    ui->label_affNom->clear();
    ui->label_affPrenom->clear();
    ui->label_affMail->clear();
    ui->label_affTel->clear();
}






void MainWindow::on_pushButtonModifier_clicked()
{
    Dialogmodifier diagUpd;
    if (diagUpd.exec()==QDialog::Accepted)
    {
        QString un=diagUpd.getNom();
        QString up=diagUpd.getPrenom();
        QString um=diagUpd.getMail();
        QString ut=diagUpd.getTel();
        Contact modifContact;
    //Ajoute la section a la comboBox

        QString newId;
        int idIntContact;
        QString idInt;
        int nbContact=vectContact.size();
        if (nbContact==0)
        {
            newId="1";

        }
        else
        {
            idInt= vectContact[nbContact-1].getId();
            idIntContact=idInt.toInt();
            idIntContact ++;
            newId = QString::number(idIntContact);

        }

        QString verifContact= newId + " - " + un + " " + up;
        modifContact.setId(newId);
        modifContact.setNom(un);
        modifContact.setPrenom(up);
        modifContact.setMail(um);
        modifContact.setTel(ut);
        QSqlQuery reqModifContact;
        QString texteRequete="update Contact values(";
        texteRequete+= newId + ",'" + un +"'," + "'" + up + "'," + "'" + um + "'," + "'" + ut + "'";
        texteRequete+=")";
        qDebug()<<texteRequete <<endl;
        reqModifContact.exec(texteRequete);

        vectContact.push_back(modifContact);
        ui->comboBoxAfficher->addItem(verifContact);

    }
}
