#pragma once
using namespace System;
namespace NS_Composants {
	ref class Contenir
	{
	private:
		int id_commande;
		String^ id_article;
		String^ quantite_article;
		String^ prix;
	     String^ remise_commerciale;

	public:
		Contenir();
		String^ SELECT();
		String^ SELECTbyId_commande();
		String^ SELECTbyId_article();
		String^ UPDATE();
		String^ DELETE();
		String^ INSERT();
		void setId_article(String^);
		void setId_commande(int);
		void setQuantite(String^);
		void setPrix(String^);
		void setRemise_commerciale(String^);
		int getId_commande();
		String^ getId_article();
		String^ getQuantite();
		String^ getPrix();
		String^ getRemise_commerciale();

	};
}

