#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <section.h>
#include <evaluation.h>
#include <etudiant.h>
#include <note.h>
#include <matiere.h>
#include <vector>


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

    void on_CreerMatiere_clicked();

    void on_AjouterMatiere_clicked();

    void on_CreerSection_clicked();

    void on_comboBoxSection_activated(const QString &arg1);

    void on_addStudent_clicked();

private:
    Ui::MainWindow *ui;

    vector <Section> vectSection;
    vector <Matiere> vectMatieres;
    vector <Etudiant> vectEtudiants;

    Section* sectionCourante;
    int nbTable;
    int nbEleve;

};

#endif // MAINWINDOW_H
