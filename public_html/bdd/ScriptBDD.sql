-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema dbNewWorld
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema dbNewWorld
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `dbNewWorld` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci ;
USE `dbNewWorld` ;

-- -----------------------------------------------------
-- Table `dbNewWorld`.`User`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`User` (
			`id` INT(11) NOT NULL,
			`username` VARCHAR(45) NULL,
			`password` VARCHAR(45) NULL,
			`telephone_fixe` VARCHAR(45) NULL,
			`mail` VARCHAR(45) NULL,
			`ville` VARCHAR(45) NULL,
			`adresse` VARCHAR(45) NULL,
			`cp` VARCHAR(45) NULL,
			`temps_creation` VARCHAR(45) NULL,
			`confirmed` VARCHAR(45) NULL,
			`telephone_portable` VARCHAR(45) NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Consommateur`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Consommateur` (
			`id` INT(11) NOT NULL,
			`nom` VARCHAR(45) NULL,
			`prenom` VARCHAR(45) NULL,
			`pdv_prefere` VARCHAR(45) NULL,
			`User_id` INT(11) NOT NULL,
			PRIMARY KEY (`id`),
			INDEX `fk_Consommateur_User1_idx` (`User_id` ASC),
			CONSTRAINT `fk_Consommateur_User1`
			FOREIGN KEY (`User_id`)
			REFERENCES `dbNewWorld`.`User` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION)
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Producteur`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Producteur` (
			`id` INT(11) NOT NULL,
			`nom` VARCHAR(45) NULL,
			`prenom` VARCHAR(45) NULL,
			`n°iban` VARCHAR(45) NULL,
			`rib` VARCHAR(45) NULL,
			`User_id` INT(11) NOT NULL,
			PRIMARY KEY (`id`),
			INDEX `fk_Producteur_User1_idx` (`User_id` ASC),
			CONSTRAINT `fk_Producteur_User1`
			FOREIGN KEY (`User_id`)
			REFERENCES `dbNewWorld`.`User` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION)
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Employe`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Employe` (
			`id` INT(11) NOT NULL,
			`nom` VARCHAR(45) NULL,
			`prenom` VARCHAR(45) NULL,
			`adresse` VARCHAR(45) NULL,
			`telephone` VARCHAR(45) NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`PointDeVente`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`PointDeVente` (
			`id` INT(11) NOT NULL,
			`nom` VARCHAR(45) NULL,
			`n°Siret` VARCHAR(45) NULL,
			`horaire_lundi` VARCHAR(45) NULL,
			`horaire_mardi` VARCHAR(45) NULL,
			`horaire_mercredi` VARCHAR(45) NULL,
			`horaire_jeudi` VARCHAR(45) NULL,
			`horaire_vendredi` VARCHAR(45) NULL,
			`horaire_samedi` VARCHAR(45) NULL,
			`horaire_dimanche` VARCHAR(45) NULL,
			`User_id` INT(11) NOT NULL,
			PRIMARY KEY (`id`),
			INDEX `fk_PointDeVente_User1_idx` (`User_id` ASC),
			CONSTRAINT `fk_PointDeVente_User1`
			FOREIGN KEY (`User_id`)
			REFERENCES `dbNewWorld`.`User` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION)
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Produit`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Produit` (
			`id` INT(11) NOT NULL,
			`prix` FLOAT NULL,
			`datePeremption` DATE NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Lot`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Lot` (
			`id` INT(11) NOT NULL,
			`type` VARCHAR(45) NULL,
			`prix` FLOAT NULL,
			`stock` INT(11) NULL,
			`dateRecolte` DATE NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Commande`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Commande` (
			`id` INT(11) NOT NULL,
			`dateCde` DATE NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Facture`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Facture` (
			`id` INT(11) NOT NULL,
			`dateF` DATE NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Rayon`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Rayon` (
			`id` INT(11) NOT NULL,
			`type` VARCHAR(45) NULL,
			PRIMARY KEY (`id`))
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`TypeDeProduit`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`TypeDeProduit` (
			`id` INT(11) NOT NULL,
			`type` VARCHAR(45) NULL,
			`Produit_id` INT(11) NOT NULL,
			`Rayon_id` INT(11) NOT NULL,
			PRIMARY KEY (`id`),
			INDEX `fk_TypeDeProduit_Produit1_idx` (`Produit_id` ASC),
			INDEX `fk_TypeDeProduit_Rayon1_idx` (`Rayon_id` ASC),
			CONSTRAINT `fk_TypeDeProduit_Produit1`
			FOREIGN KEY (`Produit_id`)
			REFERENCES `dbNewWorld`.`Produit` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION,
			CONSTRAINT `fk_TypeDeProduit_Rayon1`
			FOREIGN KEY (`Rayon_id`)
			REFERENCES `dbNewWorld`.`Rayon` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION)
	ENGINE = InnoDB;


	-- -----------------------------------------------------
	-- Table `dbNewWorld`.`Producteur_has_Produit`
	-- -----------------------------------------------------
	CREATE TABLE IF NOT EXISTS `dbNewWorld`.`Producteur_has_Produit` (
			`Producteur_id` INT(11) NOT NULL,
			`Produit_id` INT(11) NOT NULL,
			PRIMARY KEY (`Producteur_id`, `Produit_id`),
			INDEX `fk_Producteur_has_Produit_Produit1_idx` (`Produit_id` ASC),
			INDEX `fk_Producteur_has_Produit_Producteur1_idx` (`Producteur_id` ASC),
			CONSTRAINT `fk_Producteur_has_Produit_Producteur1`
			FOREIGN KEY (`Producteur_id`)
			REFERENCES `dbNewWorld`.`Producteur` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION,
			CONSTRAINT `fk_Producteur_has_Produit_Produit1`
			FOREIGN KEY (`Produit_id`)
			REFERENCES `dbNewWorld`.`Produit` (`id`)
			ON DELETE NO ACTION
			ON UPDATE NO ACTION)
	ENGINE = InnoDB;


	SET SQL_MODE=@OLD_SQL_MODE;
	SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
	SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
