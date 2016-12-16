
#ifndef ELEVES_H
#define ELEVES_H

#include <string>
#include <vector>


using namespace std;

class Eleves
{


	private:


		string nomEleves;
		string prenomEleves; 

	public:

		/** 
		 * Empty Constructor
		 */
		Eleves ();
		Eleves (string lenomEleves, string leprenomEleves);		


		
		/**
		* @brief 
		* Initialise la valeur de nomEleves 
		* @param lenomEleves reçoit nomEleves
		*/
		void setnomEleves (string lenomEleves);

	
		/**
		* @brief 
		* @return la valeur de nomEleves
		*
		* Retourne la valeur de la propriété nomEleves
		*/

		string getnomEleves();
		
		/**
		* @brief
		* Initialise la valeur de prenomEleves
		* @param leprenomEleves reçoit prenomEleves
		*/
		void setPrenomEleves (string leprenomEleves);

		/**
		* @brief
		* @return la valeur de prenomEleves
		*
		* Retourne la valeur de la propriété prenomEleves
		*/

		string getprenomEleves();
		
		/**
		* @brief saisie d'un élève
		* Permet à l'utilisateur de saisir les valeurs de l'élève
		*/
		void fromKeyboard();

		/**
		* @brief affiche info élève
		* Affiche à l'utilisateur le nom et le prénom de l'élève
		*/
		void affiche();	
	
};

#endif // ELEVES_H
