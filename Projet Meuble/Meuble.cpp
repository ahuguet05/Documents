#include "Meuble.h"
#include <iostream>

// Constructors/Destructors
//
int Meuble::nombreDeMeuble =0;

Meuble::Meuble (string leNom ,double lePrix, int laQte):nom(leNom), prix(lePrix), qteEnStock(laQte) {
		nombreDeMeuble++;
		}
//  
Meuble::~Meuble () {
	nombreDeMeuble--;
}
// Methods
//  

/**
 * Donne le nom du meuble
 * @param lenomEleves the new value of nom
 */
void Meuble::setnom (string leNom)   {
	nom = leNom;
}

/**
 * Get the value of nom
 * @return the value of nom
 */
string Meuble::getnom () {
	return nom;
}

void Meuble::setprix (double lePrix) {
	prix = lePrix;
 }

double Meuble::getprix ()  {
	return prix; 
}


void Meuble::setqteEnStock (int laQte) {
	qteEnStock = laQte; 
}
int Meuble::getqteEnStock () {
	return qteEnStock; 
}




