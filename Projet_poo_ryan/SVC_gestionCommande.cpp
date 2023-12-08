
#include "pch.h"

#include "SVC_gestionCommande.h"




namespace NS_SVC

{

    CL_svc_gestionCOMMANDE::CL_svc_gestionCOMMANDE(void)

    {

        this->cad = gcnew NS_Composants::CL_CAD();

        this->personne = gcnew NS_Composants::CL_mappPERSONNEL();
        this->commande = gcnew NS_Composants::map_Commande();
        this->article = gcnew NS_Composants::CL_mappARTICLE();
        this->client = gcnew NS_Composants::CL_Client();
        this->paiement = gcnew NS_Composants::map_Paiment();
        
        
    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommande(String^ dataTableName)

    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);

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

    

    void CL_svc_gestionCOMMANDE::ajouter(String^ date, array<String^>^paiement, array<String^>^article,float remise,int quantite,float prix)
    {
        int id1, i;
        this->commande->setdate_commande(date);
        id1 = this->cad->actionRowsID(this->commande->INSERT());
       /* id2 = this->cad->actionRowsID(this->article->INSERT());*/

        for (i = 0; i < paiement->Length - 1; i++)
        {

            this->paiement->setDate_Paiement(paiement[i]); i++;
            this->paiement->setMoyen_Paiement(paiement[i]);
            this->paiement->setId_commande(id1);
            this->cad->actionRows(this->paiement->INSERT());

        }
        for (i = 0; i < article->Length - 1; i++)
        {

            this->article->setnom_article(article[i]); i++;
            /* id2 = this->cad->actionRowsID(this->article->INSERT());*/
            this->contenir->setId_article(id1);
            this->contenir->setPrix(prix);
            this->contenir->setQuantite(quantite);
            this->contenir->setRemise_commerciale(remise);
            this->contenir->setId_commande(id1);
            this->cad->actionRows(this->contenir->INSERT());
           


        }



    }


    

    void CL_svc_gestionCOMMANDE::modifier(int id_personne, String^ date, array<String^>^ paiement, array<String^>^ article, float remise, int quantite, float prix)

    {

        int id1, i;
        this->commande->setId_Commande(id_personne);
        this->commande->setdate_commande(date);
        id1 = this->cad->actionRowsID(this->commande->UPDATE());
        /* id2 = this->cad->actionRowsID(this->article->INSERT());*/

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
            this->contenir->setId_article(id1);
            this->contenir->setPrix(prix);
            this->contenir->setQuantite(quantite);
            this->contenir->setRemise_commerciale(remise);
            this->contenir->setId_commande(id1);
            this->cad->actionRows(this->contenir->UPDATE());



        }




    }

    void CL_svc_gestionCOMMANDE::supprimer(int idPersonne)

    {

        this->commande->setId_Commande(idPersonne);

        this->cad->actionRows(this->commande->DELETE());

    }

}
