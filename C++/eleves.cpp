#include "eleves.h"
#include <iostream>

// Constructors/Destructors
//  

Eleves::Eleves () {}

Eleves::Eleves (string lenomEleves, string leprenomEleves) {

		nomEleves=lenomEleves;
		prenomEleves=leprenomEleves;
}
//  
// Methods
//  

/**
 * Set the value of nomEleves
 * @param lenomEleves the new value of nomEleves
 */
void Eleves::setnomEleves (string lenomEleves)   {
	nomEleves = lenomEleves;
}

/**
 * Get the value of nomEleves
 * @return the value of nomEleves
 */
string Eleves::getnomEleves ()   {
	return nomEleves;
}

/**
 * Set the value of prenomEleves
 * @param leprenomEleves the new value of prenomEleves
 */
void Eleves::setPrenomEleves (string leprenomEleves)   {
	prenomEleves = leprenomEleves;
}



/**
 * Get the value of prenomEleves
 * @return the value of prenomEleves
 */
string Eleves::getprenomEleves ()   {
	return prenomEleves;
}


void Eleves::fromKeyboard() {

	cout << "Entrez le nom de l'Elève: "<<endl;

	getline(cin,nomEleves);


	cout <<"Entrez le prénom de l'Elève: "<<endl;

	getline(cin,prenomEleves);


}


void Eleves::affiche() {

cout <<"le nom de l'Elève est: " << nomEleves << endl <<"Le prénom de l'Elève est: "<< prenomEleves <<endl;

}

