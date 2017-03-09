#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Connexion;
}

class Connexion : public QDialog
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = 0);
    ~Connexion();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEditLogin_editingFinished();

    void on_lineEditLogin_textChanged(const QString &arg1);

    void on_lineEditPassword_textChanged(const QString &arg1);

private:
    Ui::Connexion *ui;
};

#endif // CONNEXION_H
