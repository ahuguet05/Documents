#include "Evaluations.h"
#include <iostream>

// Constructors/Destructors
//  

Evaluations::Evaluations () {}


//  
// Methods
//  


/**
 * Set the value of id
 * @param new_var the new value of id
 */
void Evaluations::setId (int idEval)   {
	id = idEval;
}

/**
 * Get the value of id
 * @return the value of id
 */
int Evaluations::getId ()   {
	return id;
}

string Evaluations::getDate() {
	return date;
}

void Evaluations::setDate (string laDate) {
	date = laDate; 
}

/**
 * Set the value of matiere
 * @param new_var the new value of matiere
 */
void Evaluations::setMatiere (Matiere* laMatiere)   {
	matiere = laMatiere;
}

/**
 * Get the value of matiere
 * @return the value of matiere
 */
Matiere* Evaluations::getMatiere ()   {
	return matiere;
}

/**
 * Get the value of vecNote
 * @return the value of vecNote
 */
vector<Notes> Evaluations::getVectNotes ()   {
	return vectNotes;
}

/**
 * Set the value of coeff
 * @param new_var the new value of coeff
 */
void Evaluations::setCoeff (int leCoeff)   {
	coeff = leCoeff;
}

/**
 * Get the value of coeff
 * @return the value of coeff
 */
int Evaluations::getCoeff ()   {
	return coeff;
}

double Evaluations::moyenne() 
{
	int somme;
	double resultat; somme = 0;
	int nbNotes = vectNotes.size();

	for (int noNote = 0; noNote<nbNotes; noNote++) {
		somme += vectNotes [noNote].getNoteEleves(); }

	resultat = somme/nbNotes;
	return resultat;
}

void Evaluations::saisieEval(vector<Eleves> vectEleves) {

	Notes maNote;
	Eleves* monEleve;
	int nbEleves=vectEleves.size();

	cout << "Entrez le numéro de l'évaluation: " << endl;
	cin >> id;
	cin.ignore(1);

	cout << "Entrez le coeff de l'évaluation: " <<endl;
	cin >> coeff;
	cin.ignore(1);

	cout << "Entrez la date de l'évaluation: " << endl;
	getline(cin,date);

	setId(id);
	setCoeff(coeff);
	setDate(date);
	
	for (int noEleves=0;noEleves<nbEleves;noEleves++)
	{
	cout << vectEleves[noEleves].getnomEleves() << " " << vectEleves[noEleves].getprenomEleves() <<endl;	
	monEleve = &vectEleves[noEleves];
	maNote.saisieNote();
	maNote.setProprietaire(monEleve);
	// cout << maNote.getProprietaire()->getnomEleves() << endl;
	vectNotes.push_back(maNote);
	int nbNote = vectNotes.size();
	// cout << vectNotes[0].getProprietaire()->getnomEleves() << endl;
	}


}

void Evaluations::affiche() 
{
	int nbNote = vectNotes.size();
	for(int noNote = 0; noNote < nbNote; noNote++){
		cout << vectNotes[noNote].getNoteEleves() << " " << vectNotes[noNote].getProprietaire()->getnomEleves();
	}
}

