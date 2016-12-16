
#ifndef MATIERE_H
#define MATIERE_H

#include <string>

using namespace std;

class Matiere
{

	private:

		string NomMatiere;
		string NumCoeff;

	public:

		/**
		* Empty constructeur
		*/
		Matiere ( );
		Matiere (string laMatieres, int leCoeff);
		Matiere (string laMatieres);

		/**
		* @brief
		* Initialise la valeur  de NomMatiere
		* @param laMatiere reçoit NomMatiere
		*/
		void setNomMatiere (string laMatiere);

		/**
		* @brief
		* @return la valeur de NomMatiere
		*
		* Retourne la valeur de la propriété NomMatiere
		*/
		string getNomMatiere();

		/**
		* @brief
		* initialise la valeur de NumCoeff
		* @param leCoeff reçoit NumCoeff
		*/
		void setNumCoeff (string leCoeff);

		/**
		* @brief
		* @return la valeur de NumCoeff
		* 
		* Retourne la valeur de la propriété NumCoeff
		*/
		string getNumCoeff();

		/**
		* @brief saisie d'une matiere et du coeff correspondant
		* Permet à l'utilisateur de saisir une matière et son coefficient correspondant
		*/
		void creerMatiere();

		void afficheMatiere();

};//fin de la classe Matiere

#endif // MATIERE_H
