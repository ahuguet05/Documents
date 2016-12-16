using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include "eleves.h"
#include "Matiere.h"
#include "Notes.h"
#include "Section.h"
#include "Evaluations.h"


//Containers
vector<Matiere> vectMat;
vector<Section> vectSections;

int choix;

Section* sectionChoisi;
Section creeSect;
Section affSecMat;
Matiere creeMat;

/*Matiere* matiereSelector (vector<Matiere>&leVecteur)*/ 

/**
 * @brief Affiche la liste des sections
 * Permet d'afficher les sections créées a l'utilisateur 
 * @param leVecteur reçoit nbSection
 */
void afficheSection(vector<Section>&leVecteur){
	int nbSection = leVecteur.size();
	string nomSections;
	int nnbSection;
	nnbSection = 0;
	for(int nbSec=0;nbSec<nbSection;nbSec++) {
		nomSections = vectSections[nbSec]	.getNomSection();
		cout << nnbSection << " - " << nomSections << endl;
		nnbSection = nnbSection + 1;
	}

}


/**
 * @brief Sélection de la section
 * Permet à l'utilisateur de choisir la section désirée à l'aide d'un numéro
 * @param leVecteur reçoit nbSection
 * @return la valeur de leVecteur
 */
Section* sectionSelector (vector<Section> &leVecteur){
	int numeroChoisi;
	int nbSection = leVecteur.size();
	if (nbSection==0) return NULL;
	if (nbSection ==1) return &leVecteur[0];
	else
	{

		do {
			afficheSection (vectSections);
			cout<<"Tapez le numéro de la section choisie (-1 pour annuler): ";
			cin>>numeroChoisi;
			cin.ignore(1);
		}


		while (!(numeroChoisi==-1 || (numeroChoisi>=0 && numeroChoisi<nbSection)));
		if(numeroChoisi==-1)return NULL;
		else return &leVecteur[numeroChoisi];
	}//fin du il y a  d'une section
}




int main () {


	Section sec("SIO1");
	vectSections.push_back(sec);
	sec.setNomSection("SIO2");
	vectSections.push_back(sec);


	Matiere mat1("Anglais");
	vectMat.push_back(mat1);
	Matiere mat2("SLAM2");
	vectMat.push_back(mat2);
	

	do {
		cout <<"----------------Menu Principal----------------"<< endl;
		cout <<"1) Gérer une section"<< endl;
		cout <<"2) Créer une section"<< endl;
		cout <<"3) Lister les sections"<< endl;
		cout <<"4) Créer une matière"<< endl;
		cout <<"5) Consulter les matières"<<endl;
		cout <<"9) Quitter"<< endl;
		cout <<"----------------Menu Principal----------------"<< endl;
		cin >> choix;
		cin.ignore(1);


		switch  (choix) {

			case 1: sectionChoisi=sectionSelector(vectSections);
				if (!(sectionChoisi==NULL)) 
				{
					sectionChoisi->gerer();
				}  break;

			case 2: creeSect.creerSection();
				vectSections.push_back(creeSect);  break;

			case 3: afficheSection(vectSections);  break;

			case 4: creeMat.creerMatiere();
				vectMat.push_back(creeMat); break;

			case 5: affSecMat.afficheMatiereSec(vectMat); break;	


		}


	}

	while (!(choix==9));

	return 0;
}






