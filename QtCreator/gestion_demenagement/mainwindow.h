#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QVector>
#include <QMainWindow>
#include <QMessageBox>
#include "salarie.h"
#include "agence.h"
#include "permis.h"
#include "garage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQuitter_triggered();

private:
    Ui::MainWindow *ui;
    // Vecteur qui contient tous les salariés hors des agences.
    QVector<Salarie> vectSalariesNonAgences;
    QVector<Agence> vectAgences;
    QVector<Permis> vectPermis;
    QVector<Garage> vectGarages;
    Agence* agenceChoisis;
};

#endif // MAINWINDOW_H
