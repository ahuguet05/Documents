#include <string>
#include <iostream>
#include <mysql.h>

using namespace std;


int main () 
{

				MYSQL maBase;
				mysql_init(&maBase);
				if (!(mysql_real_connect(&maBase,"localhost","adminGestElv2","mdp","dbGestEleves2",0,NULL,0)))
				{
								cout << "Impossible de se connecter à la base de données, erreur : " << mysql_error(&maBase) << endl;
				}
				else
				{
								int test=mysql_query(&maBase,"select * from ELEVE");
								if (test==0)
								{
											MYSQL_RES * resultat=mysql_use_result(&maBase);
											//debut boucle
											for (
                      MYSQL_ROW maLigne=mysql_fetch_row(resultat);
                      cout<<"Numero:"<<maLigne[0]<<endl;;
                      cout<<"Nom:"<<maLigne[1]<<endl;;
                      cout<<"Prenom:"<<maLigne[2]<<endl;;

											//fin de boucle
                      
								}
								mysql_close(&maBase);

				}
				return 0;


}

