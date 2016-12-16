#ifndef DIALOGSECTION_H
#define DIALOGSECTION_H

#include <QDialog>

namespace Ui {
class DialogSection;
}

class DialogSection : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSection(QWidget *parent = 0);
    QString getNom();
    ~DialogSection();

private:
    Ui::DialogSection *ui;
};

#endif // DIALOGSECTION_H
