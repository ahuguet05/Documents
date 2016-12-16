#include <string>
#include <iostream>
#include <map>

using namespace std;


int main () {
	string nomMois;

		map<string,int> mapMois;
		map<string,int>::iterator mois;

	mapMois["Janvier"] = 31 ;
	mapMois["Février"] = 28;
	mapMois["Mars"] = 31 ;
	mapMois["Avril"] = 30 ;
	mapMois["Mai"] = 31 ;
	mapMois["Juin"] = 30 ;
	mapMois["Juillet"] = 31 ;
	mapMois["Août"] = 31 ;
	mapMois["Septembre"] = 30;
	mapMois["Octobre"] = 31  ;
	mapMois["Novembre"] = 30 ;
	mapMois["Décembre"] = 31 ;

	do
	{

		cout << "Entrez un mois pour connaitre le nombre de jours: "<<endl;
		getline(cin,nomMois);

		if (mapMois.count(nomMois)>0)
		{
			cout <<"le mois de "<< nomMois<< " contient "<<mapMois[nomMois]<< " jour." <<endl;
		}
		else 
		{  cout <<"Le mois de " <<nomMois<<" n'a pas été créer"<<endl;
		}

	
	}
	while (nomMois!="Retour");
int i=0;

for (mois=mapMois.begin())
{
	cout << i->first<<endl;
	cout << i->second <<endl;

}



	return 0;
}

