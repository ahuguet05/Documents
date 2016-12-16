#ifndef DIALOGAJOUTER_H
#define DIALOGAJOUTER_H

#include <QDialog>

namespace Ui {
class DialogAjouter;
}

class DialogAjouter : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjouter(QWidget *parent = 0);
    QString getNom();
    QString getPrenom();
    QString getMail();
    QString getTel();
    ~DialogAjouter();

private:
    Ui::DialogAjouter *ui;
};

#endif // DIALOGAJOUTER_H
