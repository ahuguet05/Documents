#include "Matiere.h"
#include <iostream>

// Constructors/Destructors
//  
Matiere::Matiere ( ) {}

Matiere::Matiere (string laMatieres, int leCoeff) {
	NomMatiere = laMatieres;
	NumCoeff = leCoeff;
}
Matiere::Matiere (string laMatieres) 
{
	NomMatiere = laMatieres;
}
//  
// Methods
//  
/**
 * donne le nom de la matiere
 * @param laMatiere la nouvelle valeur de nomMatiere
 */
void Matiere::setNomMatiere (string laMatiere)   {
	NomMatiere = laMatiere;
}

/**
 * Get the value of nom
 * @return the value of nom
 */
string Matiere::getNomMatiere ()   {
	return NomMatiere;
}


void Matiere::setNumCoeff (string leCoeff) {
	NumCoeff = leCoeff;
}


string Matiere::getNumCoeff () {
	return NumCoeff;
}

void Matiere::creerMatiere() {

	string nomDeMatiere;
	string noCoeff;

	cout << "Entrez un nom de matiere : "<<endl;
	getline(cin,nomDeMatiere);
	cout << "Entre le coeff de cette matière : "<<endl;
	cin >> noCoeff;

}

void Matiere::afficheMatiere() {

	cout << "Matière: " << NomMatiere << endl << "Coeff: "<< NumCoeff << endl;
}
