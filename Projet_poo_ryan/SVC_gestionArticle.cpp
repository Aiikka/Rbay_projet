#include "pch.h"
#include "SVC_gestionArticle.h"



namespace NS_SVC

{

    CL_svc_gestionARTICLE::CL_svc_gestionARTICLE(void)
    {

        this->CAD = gcnew NS_Composants::CL_CAD();
        this->article = gcnew NS_Composants::CL_mappARTICLE();
        this->contenir = gcnew NS_Composants::Contenir();
        

    }

    DataSet^ CL_svc_gestionARTICLE::listeSTOCK(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->article->SELECT(), dataTableName);
        return this->ds;

    }



    void CL_svc_gestionARTICLE::ajouter(String^ nomarticle, int prix, String^, int reap_article)
    {
        int id;
        int i;

        this->article->setnom_article(nomarticle);
 /*       this->client->setPrenom(prenom);
        this->client->setdate_nais(date_nais);*/


        id = this->CAD->actionRowsID(this->article->INSERT());




    }

    void CL_svc_gestionARTICLE::CL_svc_gestionARTICLE::modifier(int id_article, String^ nomarticle, int prix, String^, int reap_article)
    {

        int i;
        this->article->setIdArticle(id_article);
        this->CAD->actionRows(this->article->UPDATE());

      // discuss about prix en contenir

    }

    void CL_svc_gestionARTICLE::supprimer(int id_article)
    {
        this->article->setIdArticle(id_article);
        this->CAD->actionRows(this->article->DELETE());

    }

}