<!DOCTYPE>
<html>
<head>
<title> Inscription </title>
<link rel="stylesheet" type="text/css" href="./css/style.css" />
	<script language="javascript">
function surligne(champ, erreur)
{
	if (erreur)
		champ.style.backgroundColor= "#fba";
	else 
		champ.style.backgroundColor = "";
}
/*function test()
{
	alert("ploum");
}*/
function verifForm()
{
	var lePseudo=document.getElementById("pseudo");
	var leNom=document.getElementById("nom");
	var leMail=document.getElementById("mail");
	var leTelFixe=document.getElementById("telfixe");
	var leTelPort=document.getElementById("telport");
	var leCP=document.getElementById("cp");
	var laVille=document.getElementById("ville");
	var laReponse=document.getElementById("reponse");

	if(verifNom(leNom) && verifMail(lemail) && verifPseudo(lePseudo) && verifTelFixe(leTelFixe) && verifTelPort(leTelPort) && verifCP(leCP) && verifVille(laVille) && verifReponseSecrete(laReponse))
	{
			return true;
	}
	else
	{
		alert ("Veuillez remplir correctement tous les champs");
		return false;
	}
}

function verifPseudo(pseudo)
{
	if(pseudo.value.length <4 || pseudo.value.length >25)
	{
		surligne(pseudo, true);
		return false;
	}
	else
	{
		surligne(pseudo, false);
		return true;
	}
}
function verifNom(nom)
{
	if(nom.value.length <2 || nom.value.length >25)
	{
		surligne(nom, true);
		return false;
	}
	else
	{
		surligne(nom, false);
		return true;
	}
}

function verifMail(mail)
{
	if (mail.value.length=0)
	{
		surligne(mail, true)
		return false;
	}
	else
	{
		surligne(mail, false);
		return true;
	}

}


function verifTelFixe(telfixe)
{
	if (telfixe.value.length=10)
	{
		surligne(telfixe, true)
		return false;
	}
	else
	{
		surligne(telfixe, false);
		return true;
	}

}


function verifTelPort(telport)
{
	if (telport.value.length=10)
	{
		surligne(telport, true)
		return false;
	}
	else
	{
		surligne(telport, false);
		return true;
	}

}


function verifCP(cp)
{
	if (cp.value.length=5)
	{
		surligne(cp, true)
		return false;
	}
	else
	{
		surligne(cp, false);
		return true;
	}

}


function verifVille(ville)
{
	if (ville.value.length <25)
	{
		surligne(ville, true)
		return false;
	}
	else
	{
		surligne(ville, false);
		return true;
	}

}


function verifReponseSecrete(reponse)
{
	if (reponse.value.length=0)
	{
		surligne(reponse, true)
		return false;
	}
	else
	{
		surligne(reponse, false);
		return true;
	}

}




</script>
</head>
<body>
<?php
include ("tradFr.php");
include ("menuNW.php");
?>
<br><br><br>
<div id="messageAccueil">
<?php
echo $messageAccueil ;

?>
</div>
<?php
include ("partieGriseNW.php");
?>




<form method="post" name="formInscription" action="connexionInscrip.php" class="inscription" onsubmit="return verifForm()">
<p>

<label> Consommateur <input type="radio" name="etat" value="Consommateur"/>
Producteur <input type="radio" name="etat"/>
PointDeVente <input type="radio" name="etat"/></label>
<br>

<label> Nom: <input type="text" id="nom" name="nom" size"50" value="<?php if(isset($_POST["nom"])) echo $nom; ?>"  onblur="verifNom(this)"/></label>
<br/>	

<label>Email: <input type="email" id="mail" name="email" size="30" onblur="verifMail(this)" value="<?php if(isset($_POST["mail"])) echo $mail; ?>"/></label>
<br/>

<label> Pseudo: <input type="text" id="pseudo" name="pseudo" size="20" onblur="verifPseudo(this)" value="<?php if(isset($_POST["pseudo"])) echo $pseudo; ?>"/></label>
<br/>

<label>Téléphone fixe: <input type="tel" id="telfixe" name="telfixe" size="10" onblur="verifTelFixe(this)" value="<?php if(isset($_POST["telfixe"])) echo $telfixe; ?>"/></label>
<br/>

<label>Téléphone portable: <input type="tel" id="telport" name="telport" size="10" onblur="verifTelPort(this)" value="<?php if(isset($_POST["telport"])) echo $telport; ?>"/></label>
<br/>

<label>CP: <input type="text" id="cp" name="cp" size="6" required onblur="verifCP(this)" value="<?php if(isset($_POST["cp"])) echo $cp; ?>"/></label>
<br/>

<label>Ville: <input type="text" id="ville" name="ville" size="50" onblur="verifVille(this)" value="<?php if(isset($_POST["ville"])) echo $ville; ?>"/></label><br><br>

<label>Questions Secrètes:
<select name="question" id="question"> 
<option value="animal">Quel est le nom de votre premier animal de compagnie</option>
<option value="maman">Quel est le nom de jeune fille de votre mère</option>
</select>
<br>

<label>Réponse: <input type="text" id="reponse" name="reponse" size="50" onblur="verifReponseSecrete(this)" value="<?php if(isset($_POST["reponse"])) echo $reponse; ?>"/></label><br>

<br>



<label> <input type="submit" value="Envoyer" class="envoyer" /></label>
</p>
</body>
</html>
