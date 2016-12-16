#ifndef SECTION_H
#define SECTION_H

#include <string>
#include <vector>
#include <map>
#include "evaluation.h"
#include "etudiant.h"

class Section
{
public:

  Section ( );
  virtual ~Section ( );
  Section (string leNom);
  void gerer();
  void affiche();
  void setNom(string);
  string getNom();
  vector<Etudiant> getVectEtudiants();
  void addStudent(Etudiant nouvelEleve);


  void fromKeyboard();//saisie de la section
  void addMatiere(Matiere *);//ajoute une matière
  Matiere* matiereSelector(bool);//renvoie la matiereChoisie parmi toute si le paramètre est à true ou parmi les matieres de la section sinon
  bool dejaInscrite(Matiere * laMatiere);//renvoie vrai si la matiere est déjà pour la section

  //variables de classe
  static vector<Matiere>* vectAllMatieres;
  void preparerBulletins();
  void afficherMoyennesParEleveEtParMatiere();

private:
  string nom;
  vector <Evaluation> vectEvaluations;
  vector <Etudiant> vectEtudiants;
  vector <Matiere*> vectMatieresSection;
  map<Etudiant*,map<Matiere*,vector<Note*> > > mapNotesParEtudiantEtParMatiere;
  void afficherMap();
  void noteMoyenneEleve();
};

#endif // SECTION_H
