#include "pch.h"
#include "CL_mappARTICLE.h"





namespace NS_Composants

{

    CL_mappARTICLE::CL_mappARTICLE(void)

    {

        this->id_article = -1;

        this->nom_article = "RIEN";


        this->reap_article = 0;

        this->id_taux_tva = -1;
    }

    String^ CL_mappARTICLE::SELECT(void)

    {

        return "SELECT id_article, nom_article , Reaprovisionnement_Articile, id_taux_tva " +

            "FROM TB_Article "  ;

    }

    String^ CL_mappARTICLE::SELECTbyIDTAUX(void)

    {

        return "SELECT id_article, nom_article, design_article, Reaprovisionnement_Articile  " +

            "FROM TB_Article " +

            "WHERE(id_taux_tva = " + this->id_taux_tva + ");";

    }

    String^ CL_mappARTICLE::SELECTNom()
    {
        return "SELECT nom_article  " +

            "FROM TB_Article " +

            "WHERE(id_taux_tva = " + this->id_article + ");";
    }

    String^ CL_mappARTICLE::INSERT(void)

    {

        return "INSERT INTO TB_Article(nom_article, design_article, reap_article, id_taux_tva) " +

            "VALUES('" + this->nom_article  + "', '" + this->reap_article + "', " + this->id_taux_tva + ");";

    }

    String^ CL_mappARTICLE::UPDATE(void)

    {

        return "UPDATE TB_Article " +

            "SET nom_article ='" + this->nom_article +  "', reap_article ='" + this->reap_article + "' " +

            "WHERE(id_article =  " + this->id_article + "); ";

    }

    String^ CL_mappARTICLE::DELETE(void)

    {

        return "DELETE FROM TB_Article " +

            "WHERE(id_article = " + this->id_article + ");";

    }

    void CL_mappARTICLE::setIdArticle(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_article = IdARTICLE;

    }

    void CL_mappARTICLE::setnom_article(String^ nomartcile)

    {

        if (nomartcile != "")this->nom_article = nomartcile;

    }





    void CL_mappARTICLE::setreap_article(int reap)

    {

        if (reap > 0)this->reap_article = reap;

    }

    void CL_mappARTICLE::setid_taux_tva(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_taux_tva = IdARTICLE;

    }

    ////////////////////////////////////////////////////////////////////////////////

    int CL_mappARTICLE::getIdArticle(void)

    {

        return this->id_article;

    }

    String^ CL_mappARTICLE::getnom_article(void)

    {

        return this->nom_article;

    }


   

    int CL_mappARTICLE::getreap_article(void)

    {

        return this->reap_article;

    }

    int CL_mappARTICLE::getid_taux_tva(void)

    {

        return this->id_taux_tva;

    }

}

