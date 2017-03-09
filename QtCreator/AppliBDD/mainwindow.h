#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connexion.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void chargeLesBdd();
    ~MainWindow();

private slots:

    void on_comboBoxBDD_activated(const QString &arg1);

    void on_listWidgetTables_currentTextChanged(const QString &currentText);

    void on_pushButtonReset_clicked();

    void on_textEditRequete_textChanged();

    void on_pushButtonValider_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
