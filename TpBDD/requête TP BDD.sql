--Connection a mysql
$ mysql -u root -p;

--Création base de donnée
create database dbVin;

--Création et octroiment des droits a l'utilisateur
mysql> grant all privileges on dbVin.* to adminDBVin@localhost identified by 'vin';

--Connection a la base de donnée
$ mysql -u adminDBVin -p

--Insertion du script dans la base de donnée
mysql>source Documents/TpBDD/creBaseVin


--TP--


--La projection en sql--

    --Question 1--

	--liste table achat--
	select * 
	from achat;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1001 |  10 |   30 |     50 |
|  1001 |  20 |   32 |     10 |
|  1001 |  60 |   40 |     15 |
|  1002 |  10 |   12 |     10 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1002 |  61 |   15 |     20 |
|  1002 |  85 |   23 |     15 |
|  1003 |  50 |   30 |     15 |
|  1003 |  70 |   49 |     20 |
|  1003 |  80 |   39 |     10 |
|  1004 |  11 |   35 |      5 |
|  1004 |  11 |   40 |     15 |
|  1004 |  90 |   35 |     25 |
|  1005 |  11 |   25 |     10 |
+-------+-----+------+--------+

	--liste table vin--
	select * 
	from vin;
+-----+-------+---------+
| vno | cruno | vmilles |
+-----+-------+---------+
|   5 | SA    |    1988 |
|  10 | VO    |    1985 |
|  11 | VO    |    1990 |
|  20 | TO    |    1991 |
|  30 | MU    |    1992 |
|  40 | PF    |    1991 |
|  41 | PF    |    1992 |
|  50 | CH    |    1992 |
|  60 | PO    |    1982 |
|  61 | PO    |    1985 |
|  70 | HB    |    1987 |
|  80 | RO    |    1989 |
|  85 | RO    |    1990 |
|  90 | MO    |    1992 |
+-----+-------+---------+

	--liste table client--
+-------+-----------+
| clino | clinom    |
+-------+-----------+
|  1001 | Fraudeau  |
|  1002 | Lambert   |
|  1003 | Dupont    |
|  1004 | Simonneau |
|  1005 | Lautrec   |
+-------+-----------+

	--liste table region--
+-----+---------------+
| rno | rnom          |
+-----+---------------+
|   1 | Alsace        |
|   2 | Beaujolais    |
|   3 | Bordeaux      |
|   4 | Bourgogne     |
|   5 | Pays de Loire |
+-----+---------------+

	--liste table cru--
+-------+---------------+-----+
| cruno | crunom        | rno |
+-------+---------------+-----+
| CH    | Chenas        |   2 |
| HB    | Haut-Brion    |   3 |
| MO    | Morgon        |   2 |
| MU    | Muscadet      |   5 |
| PF    | Pouilly-Fuiss |   4 |
| PO    | Pommard       |   4 |
| RO    | Roman         |   4 |
| SA    | Sauterne      |   3 |
| TO    | Tokay         |   1 |
| VO    | Volnay        |   4 |
+-------+---------------+-----+

    --Question 2--

	--Liste nom et numéro de région des cru--
	select crunom, rno 
	from cru;
+---------------+-----+
| crunom        | rno |
+---------------+-----+
| Chenas        |   2 |
| Haut-Brion    |   3 |
| Morgon        |   2 |
| Muscadet      |   5 |
| Pouilly-Fuiss |   4 |
| Pommard       |   4 |
| Roman         |   4 |
| Sauterne      |   3 |
| Tokay         |   1 |
| Volnay        |   4 |
+---------------+-----+

    --Question 3--

	--Liste millésimes--
	select vmilles 
	from vin;

		Remarque: Il y a des doublons dans les millésimes				
+---------+
| vmilles |
+---------+
|    1988 |
|    1985 |
|    1990 |
|    1991 |
|    1992 |
|    1991 |
|    1992 |
|    1992 |
|    1982 |
|    1985 |
|    1987 |
|    1989 |
|    1990 |
|    1992 |
+---------+

    --Question 4--

	--Liste millésime sans doublon--
	select distinct vmilles 
	from vin;
+---------+
| vmilles |
+---------+
|    1988 |
|    1985 |
|    1990 |
|    1991 |
|    1992 |
|    1982 |
|    1987 |
|    1989 |
+---------+

    --Question 5--

	--Liste nom client par ordre alphabétique--
	select * 
	from client 
	order by clinom asc;
+-------+-----------+
| clino | clinom    |
+-------+-----------+
|  1003 | Dupont    |
|  1001 | Fraudeau  |
|  1002 | Lambert   |
|  1005 | Lautrec   |
|  1004 | Simonneau |
+-------+-----------+

    --Question 6--
	--Liste achats par ordre décroissant des quantités--
	select * 
	from achat 
	order by aquant desc;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1001 |  10 |   30 |     50 |
|  1004 |  90 |   35 |     25 |
|  1003 |  70 |   49 |     20 |
|  1002 |  61 |   15 |     20 |
|  1004 |  11 |   40 |     15 |
|  1003 |  50 |   30 |     15 |
|  1002 |  85 |   23 |     15 |
|  1001 |  60 |   40 |     15 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1002 |  10 |   12 |     10 |
|  1003 |  80 |   39 |     10 |
|  1001 |  20 |   32 |     10 |
|  1005 |  11 |   25 |     10 |
|  1004 |  11 |   35 |      5 |
+-------+-----+------+--------+

    --Question 7--
	--Liste achat par semaine d'achat décroissante et par numéro de vin croissant--
	select * 
	from achat 
	order by asem desc,vno asc;
+-------+-----+------+--------+
| clino | vno | asem | aquant |
+-------+-----+------+--------+
|  1003 |  70 |   49 |     20 |
|  1004 |  11 |   40 |     15 |
|  1001 |  60 |   40 |     15 |
|  1003 |  80 |   39 |     10 |
|  1004 |  11 |   35 |      5 |
|  1004 |  90 |   35 |     25 |
|  1001 |  20 |   32 |     10 |
|  1002 |  30 |   31 |     12 |
|  1002 |  41 |   31 |     10 |
|  1001 |  10 |   30 |     50 |
|  1003 |  50 |   30 |     15 |
|  1005 |  11 |   25 |     10 |
|  1002 |  85 |   23 |     15 |
|  1002 |  61 |   15 |     20 |
|  1002 |  10 |   12 |     10 |
+-------+-----+------+--------+

    --Question 8--
	--Afficher 5*2--
	select (5*2);
+-------+
| (5*2) |
+-------+
|    10 |
+-------+

    --Question 9--
	--Requête html qui regroupe les cru dans un tableau--
	
	select '<table>' 
	union select concat('<tr><td>',cru.cruno,'  ',cru.crunom,'  ',cru.rno,'</td></tr>') 
	from cru 
	union select '</table>';
+----------------------------------------+
| <table>                                |
+----------------------------------------+
| <table>                                |
| <tr><td>CH  Chenas  2</td></tr>        |
| <tr><td>HB  Haut-Brion  3</td></tr>    |
| <tr><td>MO  Morgon  2</td></tr>        |
| <tr><td>MU  Muscadet  5</td></tr>      |
| <tr><td>PF  Pouilly-Fuiss  4</td></tr> |
| <tr><td>PO  Pommard  4</td></tr>       |
| <tr><td>RO  Roman  4</td></tr>         |
| <tr><td>SA  Sauterne  3</td></tr>      |
| <tr><td>TO  Tokay  1</td></tr>         |
| <tr><td>VO  Volnay  4</td></tr>        |
| </table>                               |
+----------------------------------------+

    --Question 10--
	--Requête script d'inscription à partir  de la table region--

	select ''
	union select concat('insert into region values(',region.rno,',',' ',region.rnom,')') 
	from region  
	union select '';
+---------------------------------------------+
|                                             |
+---------------------------------------------+
|                                             |
| insert into region values(1, Alsace)        |
| insert into region values(2, Beaujolais)    |
| insert into region values(3, Bordeaux)      |
| insert into region values(4, Bourgogne)     |
| insert into region values(5, Pays de Loire) |
+---------------------------------------------+

    --Question 11--
	--Nombre dans clients présent dans la base--

	select count(clino) 
	from client;
+--------------+
| count(clino) |
+--------------+
|            5 |
+--------------+

    --Question 12--
	--Plus grande quantité de vin acheté--

	select max(a.aquant) 
	from achat a;	
+---------------+
| max(a.aquant) |
+---------------+
|            50 |
+---------------+

    --Question 13--
	--Moyenne quantité achetée--

	select avg(a.aquant) 
	from achat a;
+---------------+
| avg(a.aquant) |
+---------------+
|       16.1333 |
+---------------+

    --Question 14--
	--Nombre de vins différent achetés--

	select count(distinct a.vno) 
	from achat a;
+-----------------------+
| count(distinct a.vno) |
+-----------------------+
|                    12 |
+-----------------------+
	
--La Sélection en SQL--

    --Question 12--
	--Noms des client ayant un "a" en deuxième position--

	select clinom 
	from client 
	where clinom like '_a%';
+---------+
| clinom  |
+---------+
| Lambert |
| Lautrec |
+---------+

    --Question 13--
	--Noms comportant un a--
	
	select clinom 
	from client 
	where clinom like '%a%';
+-----------+
| clinom    |
+-----------+
| Fraudeau  |
| Lambert   |
| Simonneau |
| Lautrec   |
+-----------+

    --Question 14--
	--Numéro des clients ayant acheté le vin n°11--

	select clino 
	from achat 
	where vno=11;
+-------+
| clino |
+-------+
|  1004 |
|  1004 |
|  1005 |
+-------+

    --Question 15--
	--Informations concernant les achats effectués par les clients ainsi que le montant à payer par chaque client pour le vin n°11--

	select clino,asem,aquant,5*aquant as prix 
	from achat 
	where vno=11;	
+-------+------+--------+------+
| clino | asem | aquant | prix |
+-------+------+--------+------+
|  1004 |   35 |      5 |   25 |
|  1004 |   40 |     15 |   75 |
|  1005 |   25 |     10 |   50 |
+-------+------+--------+------+

    --Question 16--
	--Nombre d'achat effectué par le client 1004--

	select count(*) as NombreAchat 
	from achat 
	where clino=1004;
+-------------+
| NombreAchat |
+-------------+
|           3 |
+-------------+

    --Question 17--
	--Nombre de vins différents achetés par le client 1004--

	select count(distinct vno) 
	from achat 
	where clino=1004;
+---------------------+
| count(distinct vno) |
+---------------------+
|                   2 |
+---------------------+

    --Question 18--
	--Nombre de clients ayant effectué au moins un achat--

	select count(distinct clino) 
	from achat 
	where clino between 1001 and 1005;
+-----------------------+
| count(distinct clino) |
+-----------------------+
|                     5 |
+-----------------------+

    --Question 19--
	--Nombre de clients ayant acheté un vin entre les semaines 11 et 41--

	select count(clino) 
	from achat 
	where asem between 11 and 41;
+--------------+
| count(clino) |
+--------------+
|           14 |
+--------------+

    --Question 20--
	--Moyenne des quantités achetées pour le vin n°11--

	select avg(aquant) 
	from achat 
	where vno=11;
+-------------+
| avg(aquant) |
+-------------+
|     10.0000 |
+-------------+
	
    --Question 21--
	--Coût moyen des achats correspondant au vin n°11 (coûte 6 euros)--

	select avg(aquant/6) 
	from achat 
	where vno=11;
+---------------+
| avg(aquant/6) |
+---------------+
|    1.66666667 |
+---------------+

    --Question 22--
	--Plus grande quantité achetée depuis la semaine n°30--	

	select max(aquant) 
	from achat 
	where asem>=30;
+-------------+
| max(aquant) |
+-------------+
|          50 |
+-------------+

    --Question 23--
	--Quantité totale des achats concernant le vin n°11--

	select sum(aquant) 
	from achat 
	where vno=11;
+-------------+
| sum(aquant) |
+-------------+
|          30 |
+-------------+

    --Question 24--
	--Chiffre d'affaires total concernant le vin n°11--	

	select sum(aquant*6) 
	from achat 
	where vno=11;
+---------------+
| sum(aquant*6) |
+---------------+
|           180 |
+---------------+

--La jointure en SQL--

    --Question 25--
	--Noms des crus avec le nom de leur région--

	select cru.crunom,r.rnom 
	from cru,region r 
	where cru.rno=r.rno;
+---------------+---------------+
| crunom        | rnom          |
+---------------+---------------+
| Tokay         | Alsace        |
| Chenas        | Beaujolais    |
| Morgon        | Beaujolais    |
| Haut-Brion    | Bordeaux      |
| Sauterne      | Bordeaux      |
| Pouilly-Fuiss | Bourgogne     |
| Pommard       | Bourgogne     |
| Roman         | Bourgogne     |
| Volnay        | Bourgogne     |
| Muscadet      | Pays de Loire |
+---------------+---------------+

    --Question 26--
	--Numéros de vin suivis de l'année de millésime, du nom du cru et du nom de la région--

	select vin.vno,vin.vmilles,cru.crunom,r.rnom 
	from vin,cru,region r 
	where vin.cruno=cru.cruno and cru.rno=r.rno;	
+-----+---------+---------------+---------------+
| vno | vmilles | crunom        | rnom          |
+-----+---------+---------------+---------------+
|  20 |    1991 | Tokay         | Alsace        |
|  50 |    1992 | Chenas        | Beaujolais    |
|  90 |    1992 | Morgon        | Beaujolais    |
|  70 |    1987 | Haut-Brion    | Bordeaux      |
|   5 |    1988 | Sauterne      | Bordeaux      |
|  40 |    1991 | Pouilly-Fuiss | Bourgogne     |
|  41 |    1992 | Pouilly-Fuiss | Bourgogne     |
|  60 |    1982 | Pommard       | Bourgogne     |
|  61 |    1985 | Pommard       | Bourgogne     |
|  80 |    1989 | Roman         | Bourgogne     |
|  85 |    1990 | Roman         | Bourgogne     |
|  10 |    1985 | Volnay        | Bourgogne     |
|  11 |    1990 | Volnay        | Bourgogne     |
|  30 |    1992 | Muscadet      | Pays de Loire |
+-----+---------+---------------+---------------+

    --Question 27--
	--Noms des clients ayant acheté un vin du cru pommard--

	select client.clinom,cru.crunom
	from vin,achat,client,cru
	where vin.vno=achat.vno and client.clino=achat.clino and vin.cruno=cru.cruno and cru.crunom="Pommard";
+----------+---------+
| clinom   | crunom  |
+----------+---------+
| Fraudeau | Pommard |
| Lambert  | Pommard |
+----------+---------+

    --Question 28--
	--Numéros de vins achetés pour la semaine 30, suivis de la quantité achetée et du nom de l'acheteur--

	select vin.vno,achat.asem,achat.aquant,client.clinom
	from vin,achat,client
	where vin.vno=achat.vno and achat.asem=30 and client.clino=achat.clino;
+-----+------+--------+----------+
| vno | asem | aquant | clinom   |
+-----+------+--------+----------+
|  10 |   30 |     50 | Fraudeau |
|  50 |   30 |     15 | Dupont   |
+-----+------+--------+----------+

    --Question 29--
	--Numéros de vins achetés pour la semaine 30, suivis de la quantité achetée, du nom du client, du numéro du cru et de l'année de millésime--

	
	select vin.vno,achat.asem,achat.aquant,client.clinom,cru.cruno,vin.vmilles
	from vin,achat,client,cru
	where vin.vno=achat.vno and achat.asem=30 and client.clino=achat.clino and vin.cruno=cru.cruno;
+-----+------+--------+----------+-------+---------+
| vno | asem | aquant | clinom   | cruno | vmilles |
+-----+------+--------+----------+-------+---------+
|  10 |   30 |     50 | Fraudeau | VO    |    1985 |
|  50 |   30 |     15 | Dupont   | CH    |    1992 |
+-----+------+--------+----------+-------+---------+

    --Question 30--
	--Numéros de vins achetés pour la semaine 30, suivis de la quantité achetée, du nom du client, du nom du cru et de l'année de millésime--
	
	select vin.vno,achat.asem,achat.aquant,client.clinom,cru.crunom,vin.vmilles
	from vin,achat,client,cru
	where vin.vno=achat.vno and achat.asem=30 and client.clino=achat.clino and vin.cruno=cru.cruno;
+-----+------+--------+----------+--------+---------+
| vno | asem | aquant | clinom   | crunom | vmilles |
+-----+------+--------+----------+--------+---------+
|  10 |   30 |     50 | Fraudeau | Volnay |    1985 |
|  50 |   30 |     15 | Dupont   | Chenas |    1992 |
+-----+------+--------+----------+--------+---------+

    --Question 31--
	--Nombre d'achats effectués par des clients de nom Lambert--

	select count(client.clino)
	inner join achat 
	


    --Vue--
	
	create view vueCru as select cru.cruno,cru.crunom,region.rnom from cru 		
	inner join region on cru.rno=region.rno;	
+---------------+---------------+
| crunom        | rnom          |
+---------------+---------------+
| Tokay         | Alsace        |
| Chenas        | Beaujolais    |
| Morgon        | Beaujolais    |
| Haut-Brion    | Bordeaux      |
| Sauterne      | Bordeaux      |
| Pouilly-Fuiss | Bourgogne     |
| Pommard       | Bourgogne     |
| Roman         | Bourgogne     |
| Volnay        | Bourgogne     |
| Muscadet      | Pays de Loire |
+---------------+---------------+

    --Vue cru de région Bourgogne--
	
	create view vueCru as select cru.cruno,cru.crunom,region.rnom from cru 	
	inner join region on cru.rno=region.rno where rnom='Bourgogne';
+---------------+-----------+
| crunom        | rnom      |
+---------------+-----------+
| Pouilly-Fuiss | Bourgogne |
| Pommard       | Bourgogne |
| Roman         | Bourgogne |
| Volnay        | Bourgogne |
+---------------+-----------+
	
create view vueMilles as select * from vin where vmilles <1990 with check OPTION;
	
