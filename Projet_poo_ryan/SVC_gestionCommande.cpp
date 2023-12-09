
#include "pch.h"

#include "SVC_gestionCommande.h"




namespace NS_SVC

{

    CL_svc_gestionCOMMANDE::CL_svc_gestionCOMMANDE(void)

    {

        this->cad = gcnew NS_Composants::CL_CAD();

        this->commande = gcnew NS_Composants::map_Commande();
        this->personne = gcnew NS_Composants::CL_mappPERSONNEL();
        this->article = gcnew NS_Composants::CL_mappARTICLE();
        this->client = gcnew NS_Composants::CL_Client();
        this->paiement = gcnew NS_Composants::map_Paiment();
        this->contenir = gcnew  NS_Composants::Contenir();
        
    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommande(String^ dataTableName)

    {

        this->ds = gcnew DataSet();
      

        this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandePaiement(int id_com, String^ dataTableName)
    {
        this->ds = gcnew DataSet();

        this->paiement->setId_commande(id_com);

        this->ds = this->cad->getRows(this->paiement->SELECTbyId_commande(), dataTableName);

        return this->ds;
    }

   

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeArticle(/*int id_art*/ int id_cm, String^ dataTableName)
    {
        this->ds = gcnew DataSet();

        this->contenir->setId_commande(id_cm);
        //this->contenir->setId_article(id_art);
        //this->ds = this->cad->getRows(this->article->SELECTNom(), dataTableName);
        this->ds = this->cad->getRows(this->contenir->SELECTbyId_commande(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeNomArtc(String^ id_art, String^ dataTableName)
    {
        this->ds = gcnew DataSet();
        this->contenir->setId_article(id_art);

        this->ds = this->cad->getRows(this->article->SELECTNom(),dataTableName);
        return this->ds;
    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_Client(String^ dataTableName)
    {
        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECTbyId_Client(), dataTableName);

        return this->ds;
    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_Personnel(String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECTbyId_Personnel(), dataTableName);

        return this->ds;

    }


    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_adresse(String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECTbyId_Adresse(), dataTableName);

        return this->ds;

    }

    
    
    void CL_svc_gestionCOMMANDE::ajouter(String^ ref,String^ date_cmd , String^ date_liv, int id_cl, int id_perso,array<String^>^ paiement, array<String^>^ contenir/*, array<String^>^ remise, array<String^>^ quantite, array<String^>^ prix*/)
    {
        int id1 ,id2,i;
        this->commande->setNom_commande(ref);
        this->commande->setdate_commande(date_cmd);
        this->commande->setdate_liv(date_liv);
        this->commande->setId_Client(id_cl);
        this->commande->setId_Personnel(id_perso);

        id1 = this->cad->actionRowsID(this->commande->INSERT());
        

       /* id2 = this->cad->actionRowsID(this->article->INSERT());*/

        for (i = 0; i < paiement->Length - 1; i++)
        {

            this->paiement->setDate_Paiement(paiement[i]); i++;
            this->paiement->setMoyen_Paiement(paiement[i]);
            this->paiement->setId_commande(id1);
            this->cad->actionRows(this->paiement->INSERT());

        }
   
        for (i = 0; i < contenir->Length - 1; i++)
        {
            /* id2 = this->cad->actionRowsID(this->article->INSERT());*/
            //this->contenir->setId_commande(Convert::ToInt32(contenir[i])); i++;
            //this->contenir->setId_article(Convert::ToInt32(contenir[i]));
  
            this->contenir->setId_commande(id1);
            this->contenir->setId_article(contenir[i]);i++;
            this->contenir->setPrix(contenir[i]); i++;
            this->contenir->setQuantite(contenir[i]); i++;
            this->contenir->setRemise_commerciale(contenir[i]);
            this->cad->actionRows(this->contenir->INSERT());
          


        }



    }


    

    void CL_svc_gestionCOMMANDE::modifier(int id_personne, String^ date, array<String^>^ paiement, array<String^>^ article, float remise, int quantite, float prix)

    {
        /*
        /*int id1, i;
        this->commande->setId_Commande(id_personne);
        this->commande->setdate_commande(date);
        id1 = this->cad->actionRowsID(this->commande->UPDATE());
        /* id2 = this->cad->actionRowsID(this->article->INSERT());

        for (i = 0; i < paiement->Length - 1; i++)
        {

            this->paiement->setDate_Paiement(paiement[i]); i++;
            this->paiement->setMoyen_Paiement(paiement[i]);
            this->paiement->setId_commande(id1);
            this->cad->actionRows(this->paiement->UPDATE());

        }
        for (i = 0; i < article->Length - 1; i++)
        {

            this->article->setnom_article(article[i]); i++;
            /* id2 = this->cad->actionRowsID(this->article->INSERT());*/
        /*
            this->contenir->setId_article(id1);
            this->contenir->setPrix(prix);
            this->contenir->setQuantite(quantite);
            this->contenir->setRemise_commerciale(remise);
            this->contenir->setId_commande(id1);
            this->cad->actionRows(this->contenir->UPDATE());
            */
            

        }




    

    void CL_svc_gestionCOMMANDE::supprimer(int idPersonne)

    {

        this->commande->setId_Commande(idPersonne);

        this->cad->actionRows(this->commande->DELETE());

    }

}
