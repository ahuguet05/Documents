#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("dbGestContact");
    maBase.setUserName("adminDBCont");
    maBase.setPassword("contact");
     if(maBase.open())
     {
          MainWindow w;
    w.show();
    return a.exec();
     }
     else
     {
         return -125;
     }
}
