#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QLineEdit>
#include <QDebug>
#include "dialogmatiere.h"
#include "dialogsection.h"
#include "dialogeleve.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    Matiere mat1("Anglais");
    mat1.setCoeff(2);
    vectMatieres.push_back(mat1);
    ui->comboBoxMatieres->addItem(QString::fromStdString(mat1.getNomMatiere()));

    Section sec1("SIO 1");
    Section sec2("SIO 2");
    vectSection.push_back(sec1);
    vectSection.push_back(sec2);
    ui->comboBoxSection->addItem(QString::fromStdString(sec1.getNom()));
    ui->comboBoxSection->addItem(QString::fromStdString(sec2.getNom()));
}

MainWindow::~MainWindow()
{
    delete ui;

}

/**
 * @brief MainWindow::on_actionQuitter_triggered
 */

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

/**
 * @brief MainWindow::on_CreerMatiere_clicked
 */
void MainWindow::on_CreerMatiere_clicked()
{
    DialogMatiere diagMat;
    if (diagMat.exec()==QDialog::Accepted)
    {
        QString nm=diagMat.getNomMatiere();

//ajoute la Matière à la comboBox
         int test=ui->comboBoxMatieres->findText(nm);
        if (test==-1)
        {
            Matiere nouvelleMatiere;
            nouvelleMatiere.setNomMatiere(nm.toStdString());
            vectMatieres.push_back(nouvelleMatiere);
        ui->comboBoxMatieres->addItem(nm);
        }
        else
            ui->statusBar->showMessage(tr("This subject already exist"),2000);

    }
}

/**
 * @brief MainWindow::on_AjouterMatiere_clicked
 */

void MainWindow::on_AjouterMatiere_clicked()
{
    //Ajoute la matière dans la listWidget
    int test=-1;
        if (test==-1)
    {
    ui->listWidgetMatieres->addItem(ui->comboBoxMatieres->currentText());
    }
            else
                ui->statusBar->showMessage(tr("This subject already exist"),2000);

}

/**
 * @brief MainWindow::on_CreerSection_clicked
 */

void MainWindow::on_CreerSection_clicked()
{

    qDebug()<<"MainWindow::on_CreerSection_clicked()";

    DialogSection diagSec;
    if (diagSec.exec()==QDialog::Accepted)
    {
        QString ns=diagSec.getNom();

    //Ajoute la section a la comboBox

        int test=ui->comboBoxSection->findText(ns);
        if (test==-1)
        {
            Section nouvelleSection;
            nouvelleSection.setNom(ns.toStdString());
            vectSection.push_back(nouvelleSection);
            ui->comboBoxSection->addItem(ns);
        }
        else
            ui->statusBar->showMessage(tr("This Section already exist"),2000);
    }
}

/**
 * @brief MainWindow::on_comboBoxSection_activated
 * @param argl
 */


void MainWindow::on_comboBoxSection_activated(const QString &argl)
{
    qDebug()<<"MainWindow::on_comboBoxSection_activated(const QString &argl)";

    //L'utilisateur a choisi une section, on va chercher dans le vect de section laquel c'est et on l'enregistre dans la section dazns la section courante

    int nbSection = vectSection.size();
          int noSection = 0;
          string nomChoisi = argl.toStdString();
          while(!(noSection == nbSection || vectSection[noSection].getNom()== nomChoisi))
          {
              noSection ++;
          }
          if(vectSection[noSection].getNom() == nomChoisi)
          {
              string sectionNameStd = vectSection[noSection].getNom();
              QString sectionName = QString::fromStdString(sectionNameStd);
              ui->labelSectionCourante->setText(sectionName);
              sectionCourante = &vectSection[noSection];
              //verifSection = 1;
              // sectionCourante->preparationTableauEleves();
              ui->tableWidgetStudent->setRowCount(0);
              int nbElvSec = sectionCourante->getVectEtudiants().size();
              if(nbElvSec==1){
                  QString prenomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[0].getNom());
                  QString nomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[0].getPrenom());
                  QTableWidgetItem *newNom = new QTableWidgetItem(nomElv);
                  QTableWidgetItem *newPrenom = new QTableWidgetItem(prenomElv);
                  ui->tableWidgetStudent->setRowCount(1);
                  ui->tableWidgetStudent->setItem(0,0,newNom);
                  ui->tableWidgetStudent->setItem(0,1,newPrenom);
              } else {
                  for(int nbElv=0;nbElv<nbElvSec;nbElv++) { // Création du tableau selon les élèves dans la section
                        if(nbElv==0)
                        {
                            QString nomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[nbElv].getNom());
                            QString prenomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[nbElv].getPrenom());
                            QTableWidgetItem *newNom = new QTableWidgetItem(nomElv);
                            QTableWidgetItem *newPrenom = new QTableWidgetItem(prenomElv);
                            ui->tableWidgetStudent->setRowCount(1);
                            ui->tableWidgetStudent->setItem(0,0,newNom);
                            ui->tableWidgetStudent->setItem(0,1,newPrenom);

                        } else
                            {
                              QString nomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[nbElv].getNom());
                              QString prenomElv = QString::fromStdString(sectionCourante->getVectEtudiants()[nbElv].getPrenom());
                              QTableWidgetItem *newNom = new QTableWidgetItem(nomElv);
                              QTableWidgetItem *newPrenom = new QTableWidgetItem(prenomElv);
                              ui->tableWidgetStudent->setRowCount(nbEleve+1);
                              ui->tableWidgetStudent->setItem(nbEleve,0,newNom);
                              ui->tableWidgetStudent->setItem(nbEleve,1,newPrenom);
                            }

                                                          }
                     }
          }

}







void MainWindow::on_addStudent_clicked()
{
    DialogEleve diagElv;
    if (diagElv.exec()==QDialog::Accepted)
    {
        QString ne=diagElv.getNom();
        QString pe=diagElv.getPrenom();

        Etudiant nouvelEleve;
        nouvelEleve.setNom(ne.toStdString());
        nouvelEleve.setPrenom(pe.toStdString());
        sectionCourante->addStudent(nouvelEleve);
        nbTable=ui->tableWidgetStudent->rowCount();
        nbTable++;
        ui->tableWidgetStudent->setRowCount(nbTable);
        ui->tableWidgetStudent->setItem(nbTable-1,0,new QTableWidgetItem(ne));
        ui->tableWidgetStudent->setItem(nbTable-1,1,new QTableWidgetItem(pe));

    }
}



