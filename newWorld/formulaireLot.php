<?php
	include("haut.php");
	include("menu.php");
?>

<div id="fondTerreFormulaire">

	<div id="colonneGFormulaire">
<h3>Saisie des lots</h3>

<datalist id="idProduitData">
<?
// on se connecte à MySQL 
$db = mysqli_connect('localhost', 'jcanto', 'PscX57Q47','dbjcantoNewWorld'); 


// on crée la requête SQL 
$sql = 'select typeId,typeLibelle from typeProd'; 

// on envoie la requête 
$resultat = mysqli_query($db,$sql);// or die('Erreur SQL !<br>'.$sql.'<br>'.mysql_error()); 
// on fait une boucle qui va faire un tour pour chaque enregistrement 
while($data = mysqli_fetch_row($resultat)) 
    { 
    // on affiche les informations de l'enregistrement en cours 
    echo "<option value=\"$data[0]\">$data[1]</option>";
    } 

?>
</datalist>


<datalist id="modeProductionLot">
<option value="Bio">
<option value="naturel">
<option value="traditionnel">
<option value="Hors sol">
</datalist>
<datalist id="uniteDeMesure">
<option value="Kg">
<option value="cagette">
<option value="sac">
<option value="litre">
<option value="palette">
<option value="bidon">
<option value="unité">
</datalist>
<?
//Définition des champs du formulaire
$tab=array();
$tab['date']=array('id'=>'idDate','label'=>'Date: ','type'=>'date','placeholder'=>'date','valeur'=>'');
$tab['nbJourConservationLot']=array('id'=>'idNbJourConservationLot','label'=>'Nombre de jour de conservation: ','type'=>'number','placeholder'=>'nombre de jour','valeur'=>'1');
$tab['qttMinimaleLot']=array('id'=>'idQttMinimaleProduit','label'=>'Quantité minimale du produit: ','type'=>'number','placeholder'=>'Quantité minimale','valeur'=>'1');
$tab['produit']=array('id'=>'idProduit','label'=>'Produit: ','type'=>'text','placeholder'=>'votre produit..','valeur'=>'','list'=>'listeProduit');
$tab['prix']=array('id'=>'idPrix','label'=>'Prix: ','type'=>'text','placeholder'=>'Prix du lot','valeur'=>'');


//Fonction qui controle le formulaire
function controleDuFormulaireOk(&$tab,&$tabErreur)
{
	$OK=true;
	//Vérification du prix
	//Vérification de la date
	//Vérification 
}

//Le formulaire a été posté
function leFormulaireAEtePoste($tab)
{
	foreach($tab as $nom=>$tableau)
	{
		if(!isset($_POST[$nom]))
		{
			return false;
		}
		return true;
	}
}

//FORMULAIRE
function envoyerLeFormulaire($tab)
{	
	?>
		<form name="formulaire" method="POST" action="formulaireLotNice.php">
		<?
		foreach($tab as $nom=>$infosChamp)
		{
			echo("<p><label for=\"".$infosChamp['id']."\">".$infosChamp['label']."</label>");
			echo("<input type=\"".$infosChamp['type']."\"
					nom=\"".$nom."\"
					id=\"".$infosChamp['id']."\"
					placeholder=\"".$infosChamp['placeholder']."\"
					value=\"".$infosChamp['valeur']."\""
			    );
			if(isset($infosChamp['list']))
			{
				echo("list=\'".$infosChamp['list']."\'");
			}

			echo("/></p>");
			if(isset($tabErreur[$nom]))
			{
				echo("<span class=\"error\">".$tabErreur[$nom]."<span>");
			}
		}
	
	?>
		<p>
			<label>Produit:</label>
			<input list="idProduitData" type="text" id="idProduit1">
			<datalist id="idProduitData">
			</datalist>
		</p>

		<p>
			<label>Unité de mesure:</label>
			<input list="uniteDeMesure" type="text" id="uniteMesure">
			<datalist id="uniteDeMesure">
			</datalist>
		</p>
		<p>
			<label>Mode de production:</label>
			<input list="modeProductionLot" type="text" id="modeProdLot">
			<datalist id="modeProductionLot">
			</datalist>
		</p>

		<input type="submit" value="Envoyer">
		</form>
		<?

}

//Le corps du script
//Pas d'erreur
$tabErreur=array();

//si le formulaire n'a pas été posté ou qu'il est mal rempli
if(!leFormulaireAEtePoste($tab)||!controleDuFormulaireOk($tab,$tabErreur))
{
	envoyerLeFormulaire($tab,$tabErreur);
}
//tout est bon
else
{
	enregistrerDansLaBase($tab);
	rendreCompte('<p>Votre produit a bien été mis en vente</p>');
}
?>

	</div>


	<div id="colonneD">
		<p><img src="images/jardinier.jpg" alt="Jardinier" class="jardinier"></p>
		<p><img src="images/boucher.jpg" alt="Boucher" class="boucher"></p>
		
	</div>

</div>

<?php
	include("basGris.php");
	include("bas.php");

?>
