
#ifndef EVALUATIONS_H
#define EVALUATIONS_H

#include <string>
#include <vector>

#include "Matiere.h"
#include "Notes.h"

using namespace std;

/**
 * class Evaluations
 * 
 */

class Evaluations
{
	private:


		int id;
		string date;
		int noteEval;
		Matiere* matiere;
		vector<Notes> vectNotes;
		int coeff;


	public:

		/** 
		 * Empty Constructor
		 */
		Evaluations ();

		/**
		* @brief
		* Initialise la valeur de id
		* @param idEval reçoit id
		*/
		void setId (int idEval);

		/**
		* @brief
		* @return idEval de id
		* retourne la valeur de la propriété id
		*/
		int getId();

		/**
		* @brief 
		* Initialise la valeur de date
		* @param laDate reçoit date
		*/
		void setDate (string laDate);

	
		/**
		* @brief 
		*@return laDate de date
		* retourne la valeur de la propriété date
		*/
		string getDate();

		/**
		*
		*/
		void setNoteEval (int laNoteEval);

		/**
		*
		*/
		int getNoteEval();

		/**
		* @brief
		* Initialise la valeur de matiere
		* @param laMatiere reçoit matiere
		*/
		void setMatiere (Matiere* laMatiere);

		/**
		* @brief
		* @return laMatiere de Matiere
		* retourne la valeur de la propriété Matiere
		*/
		Matiere* getMatiere();

		/**
		* @brief vecteur de Notes
		* @return vectNotes
		* retourne le vecteur de Notes
		*/
		vector<Notes> getVectNotes();

		/**
		* @brief
		* Initialise la valeur de coeff
		* @param leCoeff reçoit coeff
		*/
		void setCoeff (int leCoeff);

		/**
		* @brief
		* @return leCoeff de coeff
		* retourne la valeur de la propriété coeff
		*/
		int getCoeff();

		/**
		* @brief Calcul moyenne
		* @return resultat de moyenne
		* retourne le résultat de la moyenne
		*/
		double moyenne();

		/**
		* @brief saisie d'une éval
		* Permet de saisir une évaluation
		*/		
		void saisieEval(vector<Eleves> vectEleves);

		void affiche();


};

#endif // EVALUATIONS_H
