
#ifndef NOTES_H
#define NOTES_H

#include <string>
#include "eleves.h"


using namespace std;

class Notes
{

	private:

		float NoteEleves;
		Eleves* proprietaire;

	public:

		/** 
		 * Empty Constructor
		 */
		Notes ();

		/**
		* @brief
		* Initialiser la valeur de NoteEleves
		* @param laNote reçoit comme valeur NoteEleves
		*/
		void setNoteEleves (float laNote);

		/**
		* @brief
		* @return la valeur de NoteEleves
		*
		* Retourne la valeur de la propriété NoteEleves
		*/
		float getNoteEleves();

		/**
		* @brief saisie note
		* Permet à l'utilisateur de saisir la valeur d'une note
		*/
		void saisieNote();

		void setProprietaire (Eleves* leProprietaire);

		Eleves* getProprietaire();

};

#endif // NOTES_H
