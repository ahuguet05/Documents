#include <string>
#include <iostream>

using namespace std;


int main () {

	int nb1;
	int nb2;
	int* pNbPetit;
	int* pNbGrand;


	
	
	cout << "Entrez un premier nombre: " << endl;
	cin >> nb1;
	cin.ignore(1);
	cout << "Entrez un deuxieme nombre: "<<endl;
	cin >> nb2;
	cin.ignore(1);
if (nb1>nb2) {
	
	pNbPetit= &nb2;
	pNbGrand= &nb1;		

}else {
	pNbPetit= &nb1;
	pNbGrand= &nb2;
}	
	cout <<"Le plus petit nombre est: "<<*pNbPetit<<endl;
	cout <<"Le plus grand nombre est: "<<*pNbGrand<<endl;
return 0;

}


