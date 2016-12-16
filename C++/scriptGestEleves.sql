CREATE TABLE SECTION
(id integer NOT NULL primary key, nom varchar(5));

CREATE TABLE ELEVE
(id integer NOT NULL primary key, nom varchar(20), prenom varchar(20), sectionId integer NOT NULL references section(id));

CREATE TABLE MATIERE
(id integer NOT NULL primary key, nom varchar(10) NOT NULL, coeff integer NOT NULL DEFAULT 1);

CREATE TABLE AFFECTATION
(matiereId integer NOT NULL references matiere(id), sectionId integer NOT NULL references section(id), primary key (matiereId,sectionId));

CREATE TABLE EVALUATION
(idEvaluation integer NOT NULL primary key, coeff integer NOT NULL default 1, dateEval date NOT NULL, matiereId integer, sectionId integer, foreign key (matiereId,sectionId) references AFFECTATION(matiereId,sectionId));

CREATE TABLE NOTE
(idEleve integer references eleve(id), idEvaluation integer references evaluation(id), valeur numeric(5,2) NOT NULL, primary key(idEleve, idEvaluation));
