#include <string>
#include <iostream>

using namespace std;


int main () {

	int var;
	int* pvar;

	pvar = new int;
	var= 19;
	cout <<"<----------------------------------------------->"<<endl;
	cout <<"L'adresse est : "<< &var<<endl;
	cout <<"L'adresse contient: "<<*&var<<endl;
	*pvar= 91;
	cout <<"L'adresse du pointeur est: "<<&pvar<<endl;
	cout <<"Le pointeur contient: "<<pvar<<endl;
	cout <<"A cette adresse il y a: " <<*pvar<<endl;
	cout <<"<----------------------------------------------->"<<endl;
	
	cout <<"La somme des 2 est: "<<var<<*pvar<<endl;

	pvar =NULL;
	delete pvar;



return 0;

}
