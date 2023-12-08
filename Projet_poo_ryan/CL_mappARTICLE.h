#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappARTICLE

    {

    private:

        int id_article;

        String^ nom_article;

        String^ design_article;

        int reap_article;

        int id_taux_tva;

    public:

        CL_mappARTICLE(void);

        String^ SELECT(void);

        String^ SELECTbyIDTAUX(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);
        //////////////////////////////////

        void setIdArticle(int);

        void setnom_article(String^);

        void setdesign_article(String^);

        void setreap_article(int);

        void setid_taux_tva(int);

        ///////////////////////////////////////////////
        int getIdArticle(void);

        String^ getnom_article(void);


        String^ getdesign_article(void);

        int getreap_article(void);

        int getid_taux_tva(void);

    };

}

