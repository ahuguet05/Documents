#ifndef SECTION_H
#define SECTION_H

#include <string>
#include <vector>
#include <map>
#include "eleves.h"
#include "Evaluations.h"
#include "Matiere.h"

using namespace std;

class Section
{

	private:

		string NomSection;
		vector<Eleves> vectEleves;
		vector<Evaluations> vectEval;
		vector<Matiere*> vectMat;
		map<Eleves*,map<Matiere*,vector<Notes*> > > mapDesNotesParEleveEtParMatiere;
	public:

		/** 
		 * Empty Constructor
		 */
		Section ();
		Section (string laSections);

		/**
		* @brief
		* Initialise la valeur de NomSection
		* @param laSection reçoit NomSection
		*/
		void setNomSection(string laSection);

		/**
		* @brief
		* @return la valeur de NomSection
		*
		* Retourne la valeur de la propriété NomSection
		*/
		string getNomSection();

		/**
		* @brief création d'une section
		* Permet à l'utilisateur de saisir les valeur de la section afin de la créer 
		*/
		void creerSection();

		/**
		* @brief ajout d'un élève dans une section
		* Permet à l'utilisateur d'ajouter les valeurs de l'élève dans la section sélectionné
		*/	
		void ajoutEleves();

		/**
		* @brief gérer une section
		* Permet à l'utilisateur de gérer la section choisie, il a le choix entre: ajouter un élève, consulter les élèves présents dans la section, et ajouter une matière
		*/
		void gerer();

		/**
		* @brief Affiche les élèves présent dans la section précisée
		* Permet à l'utilisateur d'afficher dans la section choisie qui est précisée, les élèves présent dans la section
		*/
		void consulterSection();

		/**
		* @brief liste les sections
		* Permet à l'utilisateur de lister les sections qui ont été créées
		*/
		void ajoutMatiere();

		/**
		* @brief liste les matières des sections
		* Permet à l'utilisateur de lister les matières présente dans la section choisie
		*/
		void afficheMatiereSec (vector<Matiere>&leVecteur);

		/**
		*
		*/
		Matiere* matiereSelector (vector<Matiere*>&leVecteur);

		/**
		*
		*/
		void ajoutEval();

		/**
		*
		*/
		void preparerBulletins();

		/**
		*
		*/
		void afficherMoyennesParEleveEtParMatiere ();

		/**
		*
		*/
		void afficheEval();

};
#endif // SECTION_H
