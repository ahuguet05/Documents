#include <string>
#include <iostream>
#include <mysql.h>

using namespace std;


int main () {

MYSQL mysql;
 
mysql_init(&mysql);
mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"testsql");
if (!mysql_real_connect(&mysql,"localhost","adminDBGestElv2","mdp","dbGestEleves2",0,NULL,0))
{
    cout << "Impossible de se connecter à la base de données, erreur : " << mysql_error(&mysql) << endl;
}
	/*int mysql_real_query(mysql,
	void mysql_close(mysql);*/



return 0;


}

