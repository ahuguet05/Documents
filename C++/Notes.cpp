#include "Notes.h"
#include <iostream>

// Constructors/Destructors
//  
Notes::Notes () {}


//  
// Methods
//  


/**
 * Set the value of note
 * @param new_var the new value of note
 */
void Notes::setNoteEleves (float laNote)   {
	NoteEleves = laNote;
}

/**
 * Get the value of note
 * @return the value of note
 */
float Notes::getNoteEleves ()   {
	return NoteEleves;
}

/**
 * Set the value of proprietaire
 * @param new_var the new value of proprietaire
 */
void Notes::setProprietaire (Eleves* leProprietaire)   {
	proprietaire = leProprietaire;
}

/**
 * Get the value of proprietaire
 * @return the value of proprietaire
 */
Eleves* Notes::getProprietaire ()   {
	return proprietaire;
}

void Notes::saisieNote() {

	float noteEtudiant;

	cout << "Entrez une note: "<<endl;

	cin>>noteEtudiant;
	cin.ignore(1);
	setNoteEleves(noteEtudiant);

}

	


