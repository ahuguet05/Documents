#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    DialogGestionnaire test;
    test.exec();
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
