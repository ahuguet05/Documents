#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

    Connexion open;
    if(open.exec()==QDialog::Accepted)
    {

    MainWindow w;
    w.show();

    return a.exec();

    }
    else
    {
        return(-1);
    }
}

