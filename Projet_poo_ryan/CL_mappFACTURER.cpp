#include "pch.h"
#include "CL_mappFACTURER.h"





namespace NS_Composants

{

    CL_mappFACTURER::CL_mappFACTURER(void)

    {

        this->id_client = -1;

        this->id_adresse = -1;

    }

    String^ CL_mappFACTURER::SELECT(void)

    {

        return "SELECT id_adresse, adresse, ville, cp, id_personne " +

            "FROM TB_ADRESSE " +

            "WHERE(id_personne = " + this->id_client + ");";

        return"select ville , cp  from TB_Adresse  Inner join  TB_Livrer on Tb_Adresse.id_adresse = TB_Livrer.id_adresse where( TB_Livrer.id_Client = " + this->getId_client() + " ); ";

    }


    String^ CL_mappFACTURER::INSERT(void)

    {

        return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +

            "VALUES('" + this->id_client + "', '" + this->id_client + "', '" + this->id_client + "', " + this->id_client + ");";

    }

    String^ CL_mappFACTURER::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE " +

            "SET adresse ='" + this->id_client + "', ville ='" + this->id_client + "', cp ='" + this->id_client + "' " +

            "WHERE(id_adresse =  " + this->id_client + "); ";

    }

    String^ CL_mappFACTURER::DELETE(void)

    {

        return "DELETE FROM ARTICLE " +

            "WHERE(id_article = " + this->id_client + ");";

    }

    void CL_mappFACTURER::setId_adresse(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_adresse = Id_adresse;
    }

    void CL_mappFACTURER::setId_client(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_adresse = Id_adresse;
    }

    int CL_mappFACTURER::getId_adresse(void)
    {
        return this->id_adresse;
    }

    int CL_mappFACTURER::getId_client(void)
    {
        return this->id_client;
    }



}
