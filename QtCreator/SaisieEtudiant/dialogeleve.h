#ifndef DIALOGELEVE_H
#define DIALOGELEVE_H

#include <QDialog>

namespace Ui {
class DialogEleve;
}

class DialogEleve : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEleve(QWidget *parent = 0);
    QString getNom();
    QString getPrenom();
    ~DialogEleve();

private:
    Ui::DialogEleve *ui;
};

#endif // DIALOGELEVE_H
