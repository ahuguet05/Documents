#ifndef DIALOGMODIFIER_H
#define DIALOGMODIFIER_H

#include <QDialog>

namespace Ui {
class Dialogmodifier;
}

class Dialogmodifier : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogmodifier(QWidget *parent = 0);
    QString getNom();
    QString getPrenom();
    QString getMail();
    QString getTel();
    ~Dialogmodifier();

private:
    Ui::Dialogmodifier *ui;
};

#endif // DIALOGMODIFIER_H
