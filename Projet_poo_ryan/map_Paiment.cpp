#include "map_Paiment.h"

NS_Composants::map_Paiment::map_Paiment()
{
	this->id_paiement = -1;
	this->id_commande = -1;
	this->date_paiement = "RIEN";
	this->moyen_paiement = "RIEN";
}
String^ NS_Composants::map_Paiment::SELECT()
{
	return "SELECT Id_paiment , date_paiment , moyen_paiment FROM TB_Paiement ";
}
String^ NS_Composants::map_Paiment::SELECTbyId_commande()
{
	return "SELECT date_paiment , moyen_paiment FROM TB_Paiement " + " WHERE(Id_Commande = " + this->id_commande +");";
}

String^ NS_Composants::map_Paiment::UPDATE()
{
	return "UPDATE TB_Paiement" + "SET date_paiement=" + this->date_paiement + ",moyen_paiement=" + this->moyen_paiement + ""
		+ "WHERE(id_paiement = " + this->id_paiement + ");";
}
String^ NS_Composants::map_Paiment::DELETE()
{
	return "DELETE FROM TB_Paiement" + "WHERE(id_paiement =" + this->id_paiement + ");";
}
String^ NS_Composants::map_Paiment::INSERT()
{
	return "INSERT INTO TB_Paiement(date_paiment,moyen_paiment,Id_Commande)" + "VALUES('" + this->date_paiement + "','" + this->moyen_paiement +"','"+this->id_commande + "'); ";
}
int NS_Composants::map_Paiment::getId_paiement()
{
	return id_paiement;
}

int NS_Composants::map_Paiment::getId_Commande()
{
	return id_commande;
}

String^ NS_Composants::map_Paiment::getDate_Paiement()
{
	return this->date_paiement;
}

String^ NS_Composants::map_Paiment::getMoyen_Paiement()
{
	return  this->moyen_paiement;
}


void NS_Composants::map_Paiment::setId_paiement(int id_paiement)
{
	this->id_commande = id_commande;
}

void NS_Composants::map_Paiment::setId_commande(int id_commande)
{
	this->id_commande = id_commande;
}

void NS_Composants::map_Paiment::setDate_Paiement(String^ datePaiement)
{
	this->date_paiement = datePaiement;
}

void NS_Composants::map_Paiment::setMoyen_Paiement(String^ moyenPaiement)
{
	this->moyen_paiement = moyenPaiement;
}
