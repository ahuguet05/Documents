#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogajouter.h"
#include "dialogmodifier.h"
#include "contact.h"
#include <QVector>
#include <string>
#include <QSqlDatabase>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void chargeLesContacts();

    ~MainWindow();

private slots:
    void on_pushButtonAjouter_clicked();

    void on_comboBoxAfficher_activated(const QString &arg1);

    void on_pushButtonSupprimer_clicked();

    void on_actionQuitter_triggered();

    void on_actionAbout_triggered();

    void on_pushButtonModifier_clicked();

private:
    Ui::MainWindow *ui;
    QVector <Contact> vectContact;
};

#endif // MAINWINDOW_H
