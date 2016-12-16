#include "Section.h"
#include <iostream>

// Constructors/Destructors
//  

Section::Section () {}

Section::Section (string laSections) 
{
	NomSection = laSections;
}


//  
// Methods
//  

/**
 * Set the value of nom
 * @param new_var the new value of nom
 */
void Section::setNomSection (string laSection)   
{
	NomSection = laSection;
}

/**
 * Get the value of nom
 * @return the value of nom
 */
string Section::getNomSection ()   
{
	return NomSection;
}



void Section::creerSection()
{
	string nomDeSection;
	cout << "Entrez un nom de section : "<<endl;
	getline(cin,nomDeSection);
	setNomSection(nomDeSection);
}





void Section::ajoutEleves() 
{
	int choix=0;
	do {

		Eleves eleve1;
		eleve1.fromKeyboard();
		vectEleves.push_back(eleve1);
		cout <<"Tapez 0 pour entrez un nouvel élève : "<<endl;
		cout <<"Tapez 9 pour revenir au menu : "<<endl;
		cin>>choix;
		cin.ignore(1);
	}
	while (choix == 0 || (!(choix ==9)));  
}



void Section::gerer() 
{

	int choixge;
	string datEval;



	do {

		cout<<"----------------Gérer Section----------------"<<endl;
		cout<<"1) Ajouter un élève dans une section"<<endl;
		cout<<"2) Consulter une section"<<endl;
		cout<<"3) Ajouter une matière"<<endl;
		cout<<"4) Ajouter une évaluation"<<endl;
		cout<<"5) Consulter les évaluations"<<endl;
		cout<<"6) Afficher la moyenne par élève et par matière"<<endl;
		cout<<"9) Quitter"<<endl;
		cout<<"----------------Gérer Section----------------"<<endl;
		cout<<"Entrez votre choix: "<<endl;
		cin >> choixge;
		cin.ignore(1);

		switch (choixge) 
		{

			case 1:ajoutEleves(); break;

			case 2:consulterSection(); break;

			case 3:ajoutMatiere(); break;

			case 4:ajoutEval(); break;

			case 5:for(int noEval = 0; noEval < vectEval.size(); noEval++) 
				{
				       vectEval[noEval].affiche();
					vector<Notes> vectTest;
					 int nbNote=vectTest.size();

				       for(int noNote = 0; noNote < nbNote; noNote++)
					{
					       cout << vectTest[noNote].getNoteEleves() << " " << vectTest[noNote].getProprietaire()->getnomEleves()<<endl;

				       }
				}
				       break; 

			case 6:afficherMoyennesParEleveEtParMatiere(); break;




			       
		}
	}

		while (!(choixge==9));
}


void Section::consulterSection() 
	{

		int nbEleves=vectEleves.size();

		cout <<"Elèves dans la section: " <<endl;
		for (int noEleves=0;noEleves<nbEleves;noEleves++) 
		{
			cout << "Section: "<<NomSection<< endl;
			cout << " - " << vectEleves[noEleves].getnomEleves()<<" "<< vectEleves[noEleves].getprenomEleves() << endl; 
		}

	}

	void Section::ajoutMatiere()
	{
		int choix=0;

		do {

			Matiere* mat;
			mat->creerMatiere();
			vectMat.push_back(mat);
			cout <<"Tapez 0 pour entrez une nouvelle matière : "<<endl;
			cout <<"Tapez 9 pour revenir au menu : "<<endl;
			cin>>choix;
			cin.ignore(1);
		}
		while (choix == 0 || (!(choix == 9)));  
	}




	void Section::afficheMatiereSec(vector<Matiere> &leVecteur)
	{
		int nbMatiere = leVecteur.size();
		for(int nbMat=0;nbMat<nbMatiere;nbMat++) 
		{
			cout << leVecteur[nbMat].getNomMatiere() <<endl;
		}
	}




	Matiere* matiereSelector (vector<Matiere*>leVecteur)
	{
		int numeroChoisi;
		int nbMatiere = leVecteur.size();
		if (nbMatiere==0) {return NULL;}
		else
		{

			do {	

				for(int nbMat=0;nbMat<nbMatiere;nbMat++) 
				{


					cout << nbMat <<": " << leVecteur[nbMat]->getNomMatiere() <<endl;

					cout<<"Tapez le numéro de la section choisie (-1 pour annuler): ";
					cin>>numeroChoisi;
					cin.ignore(1);
				}

			}
			while (!(numeroChoisi==-1 || (numeroChoisi>=0 && numeroChoisi<nbMatiere)));
			if(numeroChoisi < nbMatiere && (numeroChoisi==-1))return NULL;
			else return leVecteur[numeroChoisi];

		}      
	}



	void Section::ajoutEval()
	{
		int choix=0;

		do {

			Evaluations eval1;
			eval1.saisieEval(vectEleves);
			vectEval.push_back(eval1);
			cout <<"Tapez 0 pour entrez une nouvelle évaluation: "<<endl;
			cout <<"Tapez 9 pour revenir au menu: " <<endl;
			cin>>choix;
			cin.ignore(1);
		}
		while (choix == 0 || (!(choix == 9)));
	}

	void Section::afficheEval()
	{
		Evaluations eval1;
		eval1.affiche();
	}

	void Section::preparerBulletins () 
	{
		Eleves* eleve1;
		Matiere* mat1;	

		for (int noEval=0;noEval<vectEval.size();noEval++)
		{
			mat1=vectEval[noEval].getMatiere();
			Matiere* pLaMatiere = vectEval[noEval].getMatiere();
			vector<Notes> vectLesNotes=vectEval[noEval].getVectNotes();
			for (int noNte=0;noNte<vectLesNotes.size();noNte++) 
			{		
				Notes* pLaNote = &vectLesNotes[noNte];
				Eleves* eleve1 = pLaNote->getProprietaire();
				mapDesNotesParEleveEtParMatiere[eleve1][pLaMatiere].push_back(pLaNote);
			}
		}
	}


	void  Section::afficherMoyennesParEleveEtParMatiere ()
	{

		map<Matiere*,vector<Notes*> > ::iterator itMatiere;	
		map<Eleves*,map<Matiere*,vector<Notes*> > > ::iterator itEleve;

		for (itEleve=mapDesNotesParEleveEtParMatiere.begin() ; itEleve!=mapDesNotesParEleveEtParMatiere.end();itEleve++)
		{
			itEleve->first->affiche();
			map<Matiere*,vector<Notes*> >saMap = itEleve->second;

			for (itMatiere=saMap.begin(); itMatiere!=saMap.end(); itMatiere++)
			{
				vector<Notes*> vectSesNote=itMatiere->second;
				itMatiere->first->afficheMatiere();
				float total=0;

				for (int noNote=0; noNote<vectSesNote.size(); noNote++)
				{
					total +=vectSesNote [noNote]->getNoteEleves();
					cout <<"Moyenne: "<<total/vectSesNote.size()<<endl;

				}

			}

		}

	}

