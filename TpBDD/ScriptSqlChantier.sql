drop table Mission_cachee;
drop table Examen;
drop table Ouvrier;
drop table Qualif;
drop table Engin;
drop view Mission;

CREATE TABLE Ouvrier (
`id` INT(11) NOT NULL primary key,
`nom` VARCHAR(45) NULL,
`prenom` VARCHAR(45) NULL);


CREATE TABLE Qualif (
`idQualif` INT(11) NOT NULL primary key,
`libelleQualif` VARCHAR(45) NULL);


CREATE TABLE Mission_cachee (
`id` INT(11) NOT NULL primary key,
`dateDebut` date NOT NULL,
`dateFin` date NOT NULL,
idOuvrier integer NOT NULL references Ouvrier(id),
idEngin VARCHAR(10) references Engin(idImmat));

CREATE TABLE Engin (
`idImmat` VARCHAR(10) NOT NULL primary key,
`nomUsage` VARCHAR(45) NULL,
`marque` VARCHAR(45) NULL,
`modele` VARCHAR(45) NULL,
`date1erMiseEnCirculation` date NOT NULL,
idQualif integer NOT NULL references Qualif(idQualif));

CREATE TABLE Examen (
`dateObtention` date NOT NULL,
idOuvrier integer NOT NULL references Ouvrier(id),
idQualif integer NOT NULL references Qualif(idQualif),
primary key(idouvrier,idqualif));


insert into Ouvrier values(1,'Dervieux','Corentin');
insert into Ouvrier values(2,'Bourdon','Alex');
insert into Ouvrier values(3,'Kappler','Julien');

insert into Qualif values(1,'Permis Bulldozer');
insert into Qualif values(2,'Permis Pelleteuse');
insert into Qualif values(42,'Permis Grignoteuse');

insert into Engin values('G2LOQ','Constructeur','ARK','Platre','2016-11-18',42);
insert into Engin values('KJ458','Pousse des matériaux','Caterpillar','HBG4587','2015-09-12',1);
insert into Engin values('HBF24','Creuser','Volvo','HGDD123','2016-11-23',42);

insert into Examen values('1996-08-22',1,42);
insert into Examen values('2016-11-05',2,1);
insert into Examen values('2016-04-15',3,2);


create view Mission as select * from Mission_cachee where (idOuvrier,idEngin) in (select idOuvrier,idImmat from Engin inner join Examen on Examen.idQualif = Engin.idQualif) with check option; 
/* passe*/
insert into Mission values(1,'1996-08-23','2016-11-23',1,'G2LOQ');
/*passe*/
insert into Mission values(12,'2015-04-15','2015-05-16',2,'KJ458');
/*pas ok*/
insert into Mission values(4,'2012-12-12','2013-01-01',3,'HBF24');

