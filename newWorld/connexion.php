<?php
function connexion(){
header('Content-Type: text/html; charset=UTF-8');


$dbServer="localhost";          // Serveur sur lequel est la base de donnée
$dbUser="jcanto";       // Utilisateur possédant la base de donnée concerné
$dbPass="PscX57Q47";          // Mot de passe de l'utilisateur
$dbName="dbjcantoNewWorld";         // Nom de la base de donnée concerné
}
// Connexion à la base de donnée grâce aux informations ci dessus
return mysqli_connect($dbServer, $dbUser, $dbPass, $dbName);
?>
~                                                              
