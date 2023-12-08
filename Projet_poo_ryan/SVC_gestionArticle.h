#pragma once

#include "CL_CAD.h"

#include "CL_mappARTICLE.h"

#include "contenir.h"




using namespace System::Data;

using namespace System::Data::SqlClient;

using namespace System::Xml;

using namespace System;



namespace NS_SVC

{

    ref class CL_svc_gestionARTICLE

    {

    private:

        NS_Composants::CL_CAD^ CAD;

        NS_Composants::CL_mappARTICLE^ article;

        NS_Composants::Contenir^ contenir;

        DataSet^ ds;

    public:

        CL_svc_gestionARTICLE(void);

        DataSet^ listeSTOCK(String^);

        void ajouter(String^, int, String^, int);

        void modifier(int, String^, int, String^, int);

        void supprimer(int);

    };

}