#include "pch.h"
#include "Contenir.h"

NS_Composants::Contenir::Contenir()
{
	this->id_article = -1;
	this->id_commande = -1;
	this->quantite_article = -1;
	this->prix = -1.0;
	this->remise_commerciale = -1.0;
}

String^ NS_Composants::Contenir::SELECT()
{
	return" SELECT id_commande , id_article,quantite_article,prix,remise_commerciale FROM TB_Contenir";
}

String^ NS_Composants::Contenir::SELECTbyId_commande()
{
	return "SELECT id_article,quantite_article,prix,remise_commerciale FROM TB_Contenir"
		+ "WHERE(id_commande =" + this->id_commande + ");";
}

String^ NS_Composants::Contenir::SELECTbyId_article()
{
	return "SELECT id_commande,quantite_article,prix,remise_commerciale FROM TB_Contenir"
		+ "WHERE(id_commande =" + this->id_article + ");";
}

String^ NS_Composants::Contenir::UPDATE()
{
	return "UPDATE TB_Contenir" + "SET id_commande= " + this->id_commande + ", id_article=" + this->id_article + ",quantite_article =" + this->quantite_article + ", prix =" + this->prix + ", remise_commerciale =" + this->remise_commerciale + " "
		+ "WHERE(id_commande = " + this->id_commande + "AND id_article = " + this->id_article + ");";
}

String^ NS_Composants::Contenir::DELETE()
{
	return "DELETE FROM TB_Contenir" + "WHERE(id_commande = " + this->id_commande + "AND id_article = " + this->id_article + ");";
}

String^ NS_Composants::Contenir::INSERT()
{
	return "INSERT INTO TB_Contenir(id_commande,id_article,quantite_article,prix,remise_commerciale)" + "VALUES(" + this->id_commande + "','" + this->id_article + "," + this->quantite_article + "," + this->prix + "," + this->remise_commerciale + "); ";
}

void NS_Composants::Contenir::setId_article(int artc)
{
	this->id_article = artc;
}

void NS_Composants::Contenir::setId_commande(int com)
{
	this->id_commande = com;
}

void NS_Composants::Contenir::setQuantite(int quantite)
{
	this->quantite_article = quantite;
}

void NS_Composants::Contenir::setPrix(float prix)
{
	this->prix = prix;

}

void NS_Composants::Contenir::setRemise_commerciale(float remise)
{
	this->remise_commerciale = remise;
}

int NS_Composants::Contenir::getId_article()
{
	return this->id_article;
}

int NS_Composants::Contenir::getId_commande()
{
	return this->id_commande;
}

int NS_Composants::Contenir::getQuantite()
{
	return this->quantite_article;
}

float NS_Composants::Contenir::getPrix()
{
	return this->prix;
}

float NS_Composants::Contenir::getRemise_commerciale()
{
	return this->remise_commerciale;
}

