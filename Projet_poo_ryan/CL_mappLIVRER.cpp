
#include "pch.h"
#include "CL_mappLIVRER.h"





namespace NS_Composants

{

    CL_mappLIVRER::CL_mappLIVRER(void)

    {

        this->id_client = -1;

        this->id_adresse = -1;

    }

    String^ CL_mappLIVRER::SELECT(void)

    {


        return"select ville , cp  from TB_Adresse  Inner join  TB_Livrer on Tb_Adresse.id_adresse = TB_Livrer.id_adresse where( TB_Livrer.id_Client = " + this->getId_client() + " ); ";

        //return"select ville , cp  from TB_Adresse  Inner join  TB_Livrer on Tb_Adresse.id_adresse = TB_Livrer.id_adresse where( TB_Livrer.id_Client=2); ";

    }







    String^ CL_mappLIVRER::SELECTbyid(void)

    {

        return "SELECT id_adresse, id_client " +

            "FROM TB_Livrer " +
            "WHERE(id_client = " + this->id_client + ");";

    }


    String^ CL_mappLIVRER::INSERT(void)

    {

        return "INSERT INTO TB_LIVRER(id_adresse, id_client) " +

            "VALUES('" + this->id_adresse + "', '" + this->id_client + ");";

    }

    String^ CL_mappLIVRER::UPDATE(void)

    {

        return "UPDATE TB_LIVRER " +

            "SET id_adresse ='" + this->id_adresse + "', id_client ='" + this->id_client + "' " +

            "WHERE(id_adresse =  " + this->id_adresse + "); ";

    }

    String^ CL_mappLIVRER::DELETE(void)

    {

        return "DELETE FROM TB_LIVRER " +

            "WHERE(id_adresse = " + this->id_adresse + ");";

    }

    void CL_mappLIVRER::setId_adresse(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_adresse = Id_adresse;
    }

    void CL_mappLIVRER::setId_client(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_client = Id_adresse;
    }

    int CL_mappLIVRER::getId_adresse(void)
    {
        return this->id_adresse;
    }

    int CL_mappLIVRER::getId_client(void)
    {
        return this->id_client;
    }

}