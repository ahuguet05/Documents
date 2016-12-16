#ifndef DIALOGGESTIONNAIRE_H
#define DIALOGGESTIONNAIRE_H

#include <QDialog>

namespace Ui {
class DialogGestionnaire;
}

class DialogGestionnaire : public QDialog
{
    Q_OBJECT

public:
    explicit DialogGestionnaire(QWidget *parent = 0);
    ~DialogGestionnaire();

private:
    Ui::DialogGestionnaire *ui;
};

#endif // DIALOGGESTIONNAIRE_H
