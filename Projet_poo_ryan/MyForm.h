#pragma once
#include "CL_CAD.h"
#include"SVC_gestionCommande.h"
#include"CL_svc_gestionClient.h"
#include"SVC_gestionPersonnel.h"
#include"SVC_gestionArticle.h"
#include"CL_mappFACTURE.h"
namespace Projetpooryan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;

	private: NS_SVC::CL_svc_gestionCOMMANDE^ commande;
	private: NS_SVC::CL_svc_gestionPersonnel^ personnel;
	private: NS_SVC::CL_svc_gestionClient^ client;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ text_persnnel_adresse;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text_personnel_prenom;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_id;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_persnnel_date;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ text_client_date;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_client_prenom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_client_nom;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_client_id;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ text_personnel_nom;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ suivant_client;

	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
		

	

	private: DataSet ^dsPersonnel;
	private: NS_SVC::CL_svc_gestionClient^ gestionClients;
	private: NS_SVC::CL_svc_gestionPersonnel^ gestionPersonnel;
	private: NS_SVC::CL_svc_gestionCOMMANDE^ gestionCommande;
	private: NS_SVC::CL_svc_gestionARTICLE^ gestionStock;
							 //gestion stat apres
	private: DataSet^ dsPersonne;

	private: DataSet^ dsPersonneAdresses;
	private:    String^ sup;


	private: DataSet^ ds;

			  private: String^ mode;

			  private: int index;

			  private: int rowsCount;

			  private: int id;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ text_personnel_sup;
private: System::Windows::Forms::DataGridView^ dataGridView5;















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->text_personnel_sup = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->text_personnel_nom = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->text_persnnel_date = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_persnnel_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_personnel_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->text_client_date = (gcnew System::Windows::Forms::TextBox());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->text_client_prenom = (gcnew System::Windows::Forms::TextBox());
			this->suivant_client = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->text_client_nom = (gcnew System::Windows::Forms::TextBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_client_id = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(363, 1);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(543, 1);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 1);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Personnel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->Location = System::Drawing::Point(731, 1);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistique";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 1);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->text_personnel_sup);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->text_personnel_nom);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->text_persnnel_date);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->text_persnnel_adresse);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->text_personnel_prenom);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->text_id);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 65);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(928, 553);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(28, 330);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(133, 16);
			this->label18->TabIndex = 26;
			this->label18->Text = L"personnel supreviser";
			// 
			// text_personnel_sup
			// 
			this->text_personnel_sup->Location = System::Drawing::Point(29, 353);
			this->text_personnel_sup->Margin = System::Windows::Forms::Padding(4);
			this->text_personnel_sup->Name = L"text_personnel_sup";
			this->text_personnel_sup->Size = System::Drawing::Size(241, 22);
			this->text_personnel_sup->TabIndex = 25;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(12, 452);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(100, 28);
			this->button23->TabIndex = 24;
			this->button23->Text = L"<<";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(29, 385);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(125, 57);
			this->button22->TabIndex = 18;
			this->button22->Text = L"Ajouter";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(336, 452);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(100, 28);
			this->button24->TabIndex = 23;
			this->button24->Text = L">>";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(27, 166);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 16);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Nom";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(120, 452);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(100, 28);
			this->button25->TabIndex = 22;
			this->button25->Text = L"<";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// text_personnel_nom
			// 
			this->text_personnel_nom->Location = System::Drawing::Point(29, 186);
			this->text_personnel_nom->Margin = System::Windows::Forms::Padding(4);
			this->text_personnel_nom->Name = L"text_personnel_nom";
			this->text_personnel_nom->Size = System::Drawing::Size(241, 22);
			this->text_personnel_nom->TabIndex = 8;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(228, 452);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(100, 28);
			this->button26->TabIndex = 21;
			this->button26->Text = L">";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(311, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(593, 399);
			this->dataGridView1->TabIndex = 7;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(168, 487);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(123, 62);
			this->button27->TabIndex = 20;
			this->button27->Text = L"Afficher";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(163, 385);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(123, 59);
			this->button28->TabIndex = 19;
			this->button28->Text = L"modifier";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// text_persnnel_date
			// 
			this->text_persnnel_date->Location = System::Drawing::Point(29, 295);
			this->text_persnnel_date->Margin = System::Windows::Forms::Padding(4);
			this->text_persnnel_date->Name = L"text_persnnel_date";
			this->text_persnnel_date->Size = System::Drawing::Size(241, 22);
			this->text_persnnel_date->TabIndex = 7;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(32, 487);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(123, 62);
			this->button29->TabIndex = 18;
			this->button29->Text = L"Supprimer";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 273);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date_Embauche";
			// 
			// text_persnnel_adresse
			// 
			this->text_persnnel_adresse->Location = System::Drawing::Point(29, 238);
			this->text_persnnel_adresse->Margin = System::Windows::Forms::Padding(4);
			this->text_persnnel_adresse->Name = L"text_persnnel_adresse";
			this->text_persnnel_adresse->Size = System::Drawing::Size(241, 22);
			this->text_persnnel_adresse->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 214);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"adresse";
			// 
			// text_personnel_prenom
			// 
			this->text_personnel_prenom->Location = System::Drawing::Point(29, 130);
			this->text_personnel_prenom->Margin = System::Windows::Forms::Padding(4);
			this->text_personnel_prenom->Name = L"text_personnel_prenom";
			this->text_personnel_prenom->Size = System::Drawing::Size(241, 22);
			this->text_personnel_prenom->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prenom";
			// 
			// text_id
			// 
			this->text_id->Location = System::Drawing::Point(31, 73);
			this->text_id->Margin = System::Windows::Forms::Padding(4);
			this->text_id->Name = L"text_id";
			this->text_id->Size = System::Drawing::Size(240, 22);
			this->text_id->TabIndex = 1;
			this->text_id->TextChanged += gcnew System::EventHandler(this, &MyForm::text_id_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id_Personnel";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->dataGridView5);
			this->panel3->Controls->Add(this->button30);
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Controls->Add(this->button31);
			this->panel3->Controls->Add(this->text_client_date);
			this->panel3->Controls->Add(this->button32);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->button33);
			this->panel3->Controls->Add(this->text_client_prenom);
			this->panel3->Controls->Add(this->suivant_client);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->text_client_nom);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->text_client_id);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(9, 58);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(693, 371);
			this->panel3->TabIndex = 7;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// dataGridView5
			// 
			this->dataGridView5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(259, 188);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(414, 142);
			this->dataGridView5->TabIndex = 33;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(13, 285);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 32;
			this->button30->Text = L"<<";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(259, 37);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(414, 141);
			this->dataGridView2->TabIndex = 8;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(26, 230);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(94, 46);
			this->button31->TabIndex = 25;
			this->button31->Text = L"Ajouter";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// text_client_date
			// 
			this->text_client_date->Location = System::Drawing::Point(31, 188);
			this->text_client_date->Name = L"text_client_date";
			this->text_client_date->Size = System::Drawing::Size(207, 22);
			this->text_client_date->TabIndex = 7;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(228, 341);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 23);
			this->button32->TabIndex = 31;
			this->button32->Text = L">>";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Date_naissance";
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(94, 285);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 30;
			this->button33->Text = L"<";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// text_client_prenom
			// 
			this->text_client_prenom->Location = System::Drawing::Point(31, 143);
			this->text_client_prenom->Name = L"text_client_prenom";
			this->text_client_prenom->Size = System::Drawing::Size(207, 22);
			this->text_client_prenom->TabIndex = 5;
			// 
			// suivant_client
			// 
			this->suivant_client->Location = System::Drawing::Point(175, 285);
			this->suivant_client->Name = L"suivant_client";
			this->suivant_client->Size = System::Drawing::Size(75, 23);
			this->suivant_client->TabIndex = 29;
			this->suivant_client->Text = L">";
			this->suivant_client->UseVisualStyleBackColor = true;
			this->suivant_client->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Prenom";
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(130, 314);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(92, 50);
			this->button35->TabIndex = 28;
			this->button35->Text = L"Afficher";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// text_client_nom
			// 
			this->text_client_nom->Location = System::Drawing::Point(31, 96);
			this->text_client_nom->Name = L"text_client_nom";
			this->text_client_nom->Size = System::Drawing::Size(207, 22);
			this->text_client_nom->TabIndex = 3;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(130, 228);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(92, 48);
			this->button36->TabIndex = 27;
			this->button36->Text = L"modifier";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(28, 314);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(92, 50);
			this->button37->TabIndex = 26;
			this->button37->Text = L"Supprimer";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Nom";
			// 
			// text_client_id
			// 
			this->text_client_id->Location = System::Drawing::Point(31, 44);
			this->text_client_id->Name = L"text_client_id";
			this->text_client_id->Size = System::Drawing::Size(207, 22);
			this->text_client_id->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"id_Client";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Controls->Add(this->button13);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(8, 57);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(949, 446);
			this->panel5->TabIndex = 7;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(266, 22);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(664, 338);
			this->dataGridView3->TabIndex = 17;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(4, 368);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 16;
			this->button13->Text = L"<<";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(247, 368);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 15;
			this->button12->Text = L">>";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(85, 368);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 14;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(166, 368);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(149, 397);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(92, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Afficher";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(149, 314);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(92, 48);
			this->button9->TabIndex = 11;
			this->button9->Text = L"modifier";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(32, 397);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(92, 50);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Supprimer";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(28, 314);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 46);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Ajouter";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(29, 252);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"date_Livraison";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(28, 271);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(204, 22);
			this->textBox12->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(28, 211);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(204, 22);
			this->textBox11->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"date_Commande";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(28, 138);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(204, 22);
			this->textBox10->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(25, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"NomReference";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(28, 56);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(204, 22);
			this->textBox9->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 16);
			this->label10->TabIndex = 0;
			this->label10->Text = L"id_commande";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->dataGridView4);
			this->panel6->Controls->Add(this->button21);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->button19);
			this->panel6->Controls->Add(this->button18);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->button16);
			this->panel6->Controls->Add(this->button15);
			this->panel6->Controls->Add(this->button14);
			this->panel6->Controls->Add(this->textBox15);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->textBox14);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->textBox13);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Location = System::Drawing::Point(3, 57);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(962, 418);
			this->panel6->TabIndex = 7;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(329, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(630, 323);
			this->dataGridView4->TabIndex = 35;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(86, 303);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 34;
			this->button21->Text = L"<";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(5, 303);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 33;
			this->button20->Text = L"<<";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(167, 303);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 32;
			this->button19->Text = L">";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(248, 303);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 31;
			this->button18->Text = L">>";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(21, 332);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(98, 39);
			this->button17->TabIndex = 30;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(199, 332);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 43);
			this->button16->TabIndex = 29;
			this->button16->Text = L"Afficher";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(135, 245);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(84, 44);
			this->button15->TabIndex = 28;
			this->button15->Text = L"Modifier";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(21, 245);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(98, 43);
			this->button14->TabIndex = 27;
			this->button14->Text = L"Ajouter";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(21, 200);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(150, 22);
			this->textBox15->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 176);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(119, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"reaprovisionement";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(21, 115);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(150, 22);
			this->textBox14->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 84);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Nom_article";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(21, 43);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(150, 22);
			this->textBox13->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"id_Article";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 758);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panel1);

		this->panel3->Hide();
		this->panel5->Hide();
		this->panel6->Hide();
		this->panel1->Show();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panel5);

		this->panel1->Hide();
		this->panel3->Hide();
		this->panel6->Hide();
		this->panel5->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panel6);
		this->panel1->Hide();
		this->panel3->Hide();
		this->panel5->Hide();
		this->panel6->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panel3);
		
		this->panel1->Hide();
		this->panel5->Hide();
		this->panel6->Hide();
		panel3->Show();
	}


	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		this->text_id->Text = "";
		this->text_personnel_nom->Text = "";
		this->text_personnel_prenom->Text = "";
		this->text_persnnel_adresse->Text = "";
		this->text_persnnel_date->Text = "";
		this->text_personnel_sup->Text = "";
		//this->id = 1;

	
		this->mode = "ajP";

	}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {



	this->text_personnel_nom->Text = "";
	this->text_personnel_prenom->Text = "";
	this->text_persnnel_adresse->Text = "";
	this->text_persnnel_date->Text = "";
	this->text_personnel_sup->Text = "";
	this->mode = "Supprimer_Perso";
   


    }

	   private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		   this->mode = "ModP";


	   }
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	if (mode == "ajP"){
		this->gestionPersonnel->ajouter(this->text_personnel_nom->Text, this->text_personnel_prenom->Text, this->text_persnnel_adresse->Text, this->text_persnnel_date->Text, this->text_personnel_sup->Text);
	}
	else if(mode == "ModP"){
		this->gestionPersonnel->modifier(Convert::ToInt32(this->text_id->Text),this->text_personnel_nom->Text, this->text_personnel_prenom->Text, this->text_persnnel_adresse->Text, this->text_persnnel_date->Text, this->text_personnel_sup->Text);
	}
	else if (mode == "Supprimer_Perso") {
		this->gestionPersonnel->supprimer(Convert::ToInt32(this->text_id->Text));
	}
	
	


		this->dataGridView1->Refresh();
		this->dsPersonne = this->gestionPersonnel->listePersonnels("LesPersonnel");
		this->dataGridView1->DataSource = this->dsPersonne;
		this->dataGridView1->DataMember = "LesPersonnel";
	

	}

		  private: void initialisationPersonnel(void)

		  {

			  this->gestionPersonnel = gcnew NS_SVC::CL_svc_gestionPersonnel();

			  this->dataGridView1->Columns->Clear();

			
			  this->dsPersonnel = this->gestionPersonnel->listePersonnels("LesPersonnel");

			  this->rowsCount = this->dsPersonnel->Tables["LesPersonnel"]->Rows->Count;

			  this->index = 0;

			  this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[0]);

			  this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[1]);

			  this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[2]);

			  this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[3]);

			  this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[4]);

			  this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[5]);



			  this->dsPersonneAdresses = this->gestionPersonnel->listePersonnels("LesPersonnel");

			  this->dataGridView1->DataSource = this->dsPersonneAdresses;

			  this->dataGridView1->DataMember = "LesPersonnel";



		  }
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

		this->text_client_id->Text = "";
		this->text_client_nom->Text = "";
		this->text_client_prenom->Text = "";
		this->text_client_date->Text = "";

		this->dataGridView2->DataSource = nullptr;
		this->dataGridView2->Columns->Add("ville","ville");
		this->dataGridView2->Columns->Add("cp", "cp");

		this->dataGridView5->DataSource = nullptr;
		this->dataGridView5->Columns->Add("ville", "ville");
		this->dataGridView5->Columns->Add("cp", "cp");

		this->mode = "nouveauclient";



	}
		   private: void initialisationENR(void)

		   {

			   this->gestionClients = gcnew NS_SVC::CL_svc_gestionClient();

			   this->dataGridView2->Columns->Clear();

			   this->dataGridView5->Columns->Clear();



			   this->dsPersonne = this->gestionClients->listeClients("LesClients");

			   this->rowsCount = this->dsPersonne->Tables["LesClients"]->Rows->Count;

			   this->index = 0;


			   this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[0]);

			   this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[1]);

			   this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[2]);

			   this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[3]);



			   this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

			   this->dataGridView2->DataSource = this->dsPersonneAdresses;

			   this->dataGridView2->DataMember = "AdressesPersonnes";



			   

		   }
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->mode == "nouveauclient") {
		int i;

		int ii;



		int taille = (this->dataGridView2->RowCount - 1) * 3;

		int taillen = (this->dataGridView5->RowCount - 1) * 3;



		array<String^>^ lesAdresses = gcnew array<String^>(taille);

		array<String^>^ lesAdressesn = gcnew array<String^>(taillen);



		ii = 0;

		for (i = 0; i < taille - 1; i++)

		{

			lesAdresses[i] = Convert::ToString(this->dataGridView2[0, ii]->Value); i++;

			lesAdresses[i] = Convert::ToString(this->dataGridView2[1, ii]->Value); i++;

			lesAdresses[i] = Convert::ToString(this->dataGridView2[2, ii]->Value);

			ii++;


		}

		for (i = 0; i < taillen - 1; i++)

		{

			lesAdressesn[i] = Convert::ToString(this->dataGridView5[0, ii]->Value); i++;

			lesAdressesn[i] = Convert::ToString(this->dataGridView5[1, ii]->Value); i++;

			lesAdressesn[i] = Convert::ToString(this->dataGridView5[2, ii]->Value);

			ii++;

		}








		this->gestionClients->ajouter(this->text_client_nom->Text, this->text_client_prenom->Text, this->text_client_date->Text, lesAdresses, lesAdressesn);
	}


}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	//this->initialisationENR();
	this->initialisationPersonnel();
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->index < this->rowsCount - 1)

	{

		this->index++;

		this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);

		this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);

		this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);

		this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[3]);

		this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

		this->dataGridView2->DataSource = this->dsPersonneAdresses;

		this->dataGridView2->DataMember = "AdressesPersonnes";

	}
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {


	if (this->index > 0)

	{

		this->index--;

		this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[0]);

		this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[1]);

		this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[2]);

		this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->index]->ItemArray[3]);

		this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

		this->dataGridView2->DataSource = this->dsPersonneAdresses;

		this->dataGridView2->DataMember = "AdressesPersonnes";


	}
}
private: System::Void text_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0)

	{

		this->index++;

		this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[0]);
		this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[1]);
		this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[2]);
		this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[3]);
		this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[4]);
		this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[5]);

		this->dsPersonneAdresses = this->gestionPersonnel->listePersonnels("LesPersonnel");

		this->dataGridView1->DataSource = this->dsPersonneAdresses;

		this->dataGridView1->DataMember = "LesPersonnel";


	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}


};

	}
	
