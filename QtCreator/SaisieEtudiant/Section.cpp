#include "section.h"
#include <iostream>

vector<Matiere>* Section::vectAllMatieres=NULL;


void attente();
// Constructors/Destructors
// 
Section::Section ( ) {
}

Section::~Section ( ) { }

Section::Section(string leNom)
{
    nom =leNom;
}

void Section::setNom (string leNom)
{
    nom = leNom;
}

string Section::getNom()
{
    return nom;
}

vector<Etudiant> Section::getVectEtudiants()
{
    return vectEtudiants;
}


void Section::addStudent(Etudiant nouvelEleve)
{
    vectEtudiants.push_back(nouvelEleve);
}



void Section::afficherMoyennesParEleveEtParMatiere()
{

	//iterateur sur les élèves
	map <Etudiant*,map<Matiere* ,vector<Note*> > >::iterator itEleve;
	//pour chaque eleve de la grosse map
	for(itEleve=mapNotesParEtudiantEtParMatiere.begin();itEleve != mapNotesParEtudiantEtParMatiere.end();++itEleve)
	{
		//affiche l'élève
		itEleve->first->affiche();
		//je declare mon iterateur pour les matieres de l'élève
		map<Matiere*,vector<Note*> >::iterator itMatiere;
		//je mets la map des matieres ds une v locale nommée saMap
		map<Matiere*,vector<Note*> > saMap =itEleve->second;
		//pour chaque matiere de saMap
		for(itMatiere=saMap.begin();itMatiere!=saMap.end();++itMatiere)
		{
			//je chope les notes qu'il a obtenu			
			vector<Note*> vectSesNotes=itMatiere->second;
			//affichage du nom de la matière
			itMatiere->first->affiche();
			//calcul de la somme des notes de l'élève
			float total=0;
			//pour chaque note de l'élève
			for(int noNote=0;noNote<vectSesNotes.size();noNote++)
			{
				//j'ajoute au total la valeur de la note
				total+=vectSesNotes[noNote]->getValeur();
			}
			//enfin j'affiche la moyenne des notes obtenues pour la matière
			cout<<"moyenne:"<<total/(float)vectSesNotes.size()<<"/20"<<endl;

		}//fin du pour chaque matiere
	}//fin du pour chaque eleve
}//fin de la méthode

/**
 * @brief affichage du contenu de la map
 */
void Section::afficherMap()
{
	//iterateur sur les élèves
	map <Etudiant*,map<Matiere* ,vector<Note*> > >::iterator itEleve;
	//pour chaque eleve de la grosse map
	for(itEleve=mapNotesParEtudiantEtParMatiere.begin();itEleve != mapNotesParEtudiantEtParMatiere.end();++itEleve)
	{
		//affiche l'élève
		itEleve->first->affiche();
		//je declare mon iterateur pour les matieres de l'élève
		map<Matiere*,vector<Note*> >::iterator itMatiere;
		//je mets la map des matieres ds une v locale nommée saMap
		map<Matiere*,vector<Note*> > saMap =itEleve->second;

		//pour chaque matiere de saMap
		for(itMatiere=saMap.begin();itMatiere!=saMap.end();++itMatiere)
		{
			//je chope les notes qu'il a obtenu			
			vector<Note*> vectSesNotes=itMatiere->second;
			//affichage du nom de la matière
			itMatiere->first->affiche();
			//calcul de la somme des notes de l'élève
			float total=0;
			cout<<"le nombre de note de l'élève est: "<<vectSesNotes.size()<<endl;
			//pour chaque note de l'élève
			for(int noNote=0;noNote<vectSesNotes.size();noNote++)
			{
				//j'ajoute au total lea valeur de la note
				total+=vectSesNotes[noNote]->getValeur();
				cout<<"Note ajoutée: "<<vectSesNotes[noNote]->getValeur()<<endl;
				cout<<"le total devient: "<<total<<endl;
			}
			//enfin j'affiche la moyenne des notes obtenues pour la matière
			cout<<"moyenne:"<<total/(float)vectSesNotes.size()<<"/20"<<endl;

		}//fin du pour chaque matiere
	}//fin du pour chaque eleve


}//fin de la méthode affiche
void Section::preparerBulletins()
{
	//je vide la map
	mapNotesParEtudiantEtParMatiere.clear();
	//pour chaque evaluation de la section
	for(int noEval=0;noEval<vectEvaluations.size();noEval++)
	{
		//je chope l'evaluation ATTENTION ICI DE NE PAS TRAVAILLER SUR UNE COPIE DE L' EVALUATION QUI NOUS DONNERAIT DE FAUSSES NOTES
		Evaluation* evalCourante=&(vectEvaluations[noEval]);

		//je chope les notes de l'évaluation courante
		vector<Note>& vectLesNotes=evalCourante->getVectNotes();
		//je chope la matière de l'évaluation
		Matiere* pLaMatiere=evalCourante->getLaMatiere();
		//pour chaque note de l'évaluation
		for(int noNote=0;noNote<vectLesNotes.size();noNote++)
		{
			//j'obtiens la note
			Note * pLaNote=&(vectLesNotes[noNote]);
			//j'obtiens l'étudiant qui a eu cette note
			Etudiant *pLEtudiant=pLaNote->getLEtudiant();
			//j'ajoute la note dans la map au bon endroit dans la map
			mapNotesParEtudiantEtParMatiere[pLEtudiant][pLaMatiere].push_back(pLaNote);
		}//fin du pour chaque note
	}//fin du pour chaque eval de la section
	//à décommenter pour debugger 
	//afficherMap();
}//fin du preparerBulletins
//voili voilou

void Section::affiche()
{
	cout<<"Je suis la section nommée "<<nom<<endl;
	cout<<"**********Liste des etudiants********"<<endl;
	for(int noEtudiant=0;noEtudiant<vectEtudiants.size();noEtudiant++)
	{
		vectEtudiants[noEtudiant].affiche();
	}
	cout<<"*********Voici la liste des matières enseignées:**********"<<endl;
	for(int noMatiere=0;noMatiere<vectMatieresSection.size();noMatiere++)
	{
		vectMatieresSection[noMatiere]->affiche();
	}

}

void Section::gerer()
{
	int choix;
	Etudiant nouvelEtudiant;
	Evaluation nouvelleEvaluation;
	Matiere* matiereAjoutee;
	Note nouvelleNote;
	do
	{
		cout<<"***********Menu Section**************"<<endl;
		cout<<"Tapez 1 pour afficher la section"<<endl;
		cout<<"Tapez 2 pour ajouter un etudiant à la section"<<endl;
		//n'afficher que s'il y a au moins une matière affectée à la section
		cout<<"Tapez 3 pour ajouter une évaluation à la section"<<endl;
		cout<<"Tapez 4 pour ajouter une matière à la section"<<endl;
		/**
		 * @todo n'afficher que si des évaluations ont été rentrées
		 */
		cout<<"Tapez 5 pour visualiser les évaluations de la section"<<endl;
		/**
		 * @todo n'afficher que si des évaluations ont été rentrées
		 */
		cout<<"Tapez 6 pour afficher les moyennes par étudiant et par matière"<<endl;
		cout<<"Tapez 7 pour afficher les notes et moyennes d'un élève"<<endl;
		cout<<"Tapez 9 pour quitter"<<endl;
		cin>>choix;
		cin.ignore(1);
		switch(choix)
		{
			case 1:affiche();break;
			case 2:nouvelEtudiant.fromKeyboard();
			       vectEtudiants.push_back(nouvelEtudiant);
			       break;
			case 3:
			       //fait saisir et vide les notes
			       nouvelleEvaluation.fromKeyboard();
			       nouvelleEvaluation.setLaMatiere(matiereSelector(false));
			       for(int noEleve=0;noEleve<vectEtudiants.size();noEleve++)
			       {
				       nouvelleNote.setLEtudiant(&(vectEtudiants[noEleve]));
				       nouvelleNote.fromKeyboard();
				       nouvelleEvaluation.addNote(nouvelleNote);
			       }

			       vectEvaluations.push_back(nouvelleEvaluation);
			       break;
			case 4:matiereAjoutee=matiereSelector(true);
			       if(matiereAjoutee!=NULL)
			       {
				       addMatiere(matiereAjoutee);

			       }
			       break;
			case 5://visualisation des évaluations de la section
			       for(int noEvaluation=0;noEvaluation<vectEvaluations.size();noEvaluation++)
			       {
				       vectEvaluations[noEvaluation].affiche();
			       }
			       break;
			case 6:preparerBulletins();
			       afficherMoyennesParEleveEtParMatiere();
			       break;
			case 7:preparerBulletins();
						 noteMoyenneEleve(); 
						 break;

			case 9:cout<<"Ok bye"<<endl;break;
			default:cout<<"Votre choix n'est pas valide"<<endl;

		}
	}
	while(!(choix==9));
}
/**
 * @param laMatiere adresse de la matiere dont on souhaite savoir si la section la connait
 * @return true si la section a déjà cette matière et false sinon
 */
bool Section::dejaInscrite(Matiere* laMatiere)
{
	int noCase=0;
	while(!(noCase>=vectMatieresSection.size()|| vectMatieresSection[noCase]==laMatiere))
	{
		noCase++;
	}
	if(noCase==vectMatieresSection.size()) return false;
	else return true;
}


Matiere* Section::matiereSelector(bool parmiToutes=true)
{
	if(parmiToutes)
	{
		vector<Matiere*> lesMatieresDispos;//les matieres qui ne sont pas déjà affectées à la section

		for(int noMat=0;noMat<vectAllMatieres->size();noMat++)
		{
			if (!dejaInscrite(&vectAllMatieres->at(noMat)))//si ce n'est pas déjà une matiere de la section
			{
				lesMatieresDispos.push_back(&vectAllMatieres->at(noMat));
			}
		}
		if (lesMatieresDispos.size()==0)
		{
			cout<<"Aucune matiere ne peut être ajoutée"<<endl;
		}
		else
		{
			int matChoisie;
			do
			{
				for(int noMat=0;noMat<lesMatieresDispos.size();noMat++)
				{
					cout <<"Tapez "<<noMat<<" pour ajouter "<<lesMatieresDispos[noMat]->getNomMatiere()<<endl;
				}
				cout<<"ou tapez -1 pour ne rien ajouter"<<endl;
				cin>>matChoisie;
			}
			while(!(matChoisie==-1 || (matChoisie>=0 && matChoisie<lesMatieresDispos.size())));
			if(matChoisie!=-1) return lesMatieresDispos[matChoisie];
			else return NULL;


		}
	}
	else
	{
		int matChoisie;
		do
		{
			for(int noMat=0;noMat<vectMatieresSection.size();noMat++)
			{
				cout <<"Tapez "<<noMat<<" pour la matière "<<vectMatieresSection[noMat]->getNomMatiere()<<endl;
			}
			cin>>matChoisie;
		}
		while(!(matChoisie>=0 && matChoisie<vectMatieresSection.size()));
		return vectMatieresSection[matChoisie];

	}
}

void Section::addMatiere(Matiere * laMatiere)
{
	vectMatieresSection.push_back(laMatiere);
}

void Section::fromKeyboard()
{
	//saisie des infos de la section
	cout<<"Tapez le nom de la section:"<<endl;
	getline(cin,nom);
}

void Section::noteMoyenneEleve()
{
	string nomElv;
	int noEleve=0;
	Etudiant* pMonEleve;

	//saisie d'un élève
	cout<<"Entrez le nom de l'élève: "<<endl;
	getline(cin,nomElv);

	while (!(noEleve==vectEtudiants.size() || vectEtudiants[noEleve].getNom()== nomElv))
	{
			noEleve++;
	}

		if (noEleve==vectEtudiants.size())
		{
				cout <<"l'élève n'existe pas" <<endl;
		}
		else 
		{
			pMonEleve=&vectEtudiants[noEleve];
		
			
			if (mapNotesParEtudiantEtParMatiere.count(pMonEleve)==1)
			{
					map<Matiere*,vector<Note*> > saMap;
					saMap=mapNotesParEtudiantEtParMatiere[pMonEleve];
					map<Matiere*,vector<Note*> > ::iterator itMatiere;
					for (itMatiere=saMap.begin();itMatiere != saMap.end();++itMatiere)
					{
							vector<Note*> vectSesNotes=itMatiere->second;
							float total=0;

							for (int noNote=0;noNote<vectSesNotes.size();noNote++)
							{
									total+=vectSesNotes[noNote]->getValeur();
							
							}
									cout<<"moyenne:"<<total/(float)vectSesNotes.size()<<"/20"<<endl;
							
					}
		
			}
			else
			{
					cout <<"Cet élève n'a pas effectué d'évaluation"<<endl;
			}
		}
}

