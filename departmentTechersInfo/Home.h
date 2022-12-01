#pragma once
#include "AddDepartment.h"
#include "AddTeacher.h"

namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button5;
	protected:
	private: System::Windows::Forms::Button^  button4;

















	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;




	private: System::Windows::Forms::Label^  label8;














	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  search;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::Button^  button17;


private: System::Windows::Forms::Button^  button18;



























private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fakultet;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rahbar;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Yil;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Joylashuv;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  oqituvchisoni;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefon;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fakultet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rahbar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Yil = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Joylashuv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->oqituvchisoni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefon = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(265, 370);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 44);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Statistika";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(139, 370);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 44);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Tozalash";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(15, 370);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 44);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Saqlash";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(705, 55);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(184, 246);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tanlangan kafedra haqida";
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button17->Location = System::Drawing::Point(17, 177);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(148, 44);
			this->button17->TabIndex = 33;
			this->button17->Text = L"O\'qituvchilari";
			this->button17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Home::button17_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Telefon:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(10, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 16);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Nomi:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(10, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Joylashuvi:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Fakulteti:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(10, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Rahbari";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(204, 55);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(495, 419);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Kafedralar ro\'yxati";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->ForeColor = System::Drawing::Color::White;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(514, 270);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(483, 347);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"T/r";
			this->columnHeader1->Width = 28;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nomi";
			this->columnHeader2->Width = 68;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Fakulteti";
			this->columnHeader3->Width = 69;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Rahbari";
			this->columnHeader4->Width = 57;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Tashkil etilgan yil";
			this->columnHeader5->Width = 72;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Joylashuvi";
			this->columnHeader6->Width = 63;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"O\'qituvchilar soni";
			this->columnHeader7->Width = 75;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Telefon";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(381, 383);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Jami soni: ";
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(896, 48);
			this->panel1->TabIndex = 34;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(849, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 40);
			this->button16->TabIndex = 6;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Home::button16_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(65, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Kafedralar";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(389, 37);
			this->button8->Margin = System::Windows::Forms::Padding(1);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 2);
			this->button8->TabIndex = 4;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// search
			// 
			this->search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search->Location = System::Drawing::Point(390, 12);
			this->search->Multiline = true;
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(170, 32);
			this->search->TabIndex = 3;
			this->search->Text = L"Izlash...";
			this->search->Enter += gcnew System::EventHandler(this, &Home::textBox1_Enter);
			this->search->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Home::search_KeyDown);
			this->search->Leave += gcnew System::EventHandler(this, &Home::search_Leave);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(560, 8);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 25);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(180, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 41);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(9, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 37);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->groupBox5);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Location = System::Drawing::Point(0, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 426);
			this->panel2->TabIndex = 35;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(9, 244);
			this->button9->Margin = System::Windows::Forms::Padding(1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(175, 2);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox5->Location = System::Drawing::Point(4, 250);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(183, 170);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Qo\'shimcha";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(14, 64);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 37);
			this->button15->TabIndex = 5;
			this->button15->Text = L"Muallif haqida";
			this->button15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->Location = System::Drawing::Point(14, 22);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(156, 37);
			this->button14->TabIndex = 4;
			this->button14->Text = L"Dastur haqida";
			this->button14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(186, 225);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Asosiy";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button18->Location = System::Drawing::Point(15, 132);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(157, 37);
			this->button18->TabIndex = 4;
			this->button18->Text = L"O\'qituvchi qo\'shish";
			this->button18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Home::button18_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->Location = System::Drawing::Point(16, 178);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(157, 37);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Dasturdan chiqish";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Home::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->Location = System::Drawing::Point(16, 95);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(157, 37);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Fakultet qo\'shish";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(16, 58);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(157, 37);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Kafedra qo\'shish";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Home::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(17, 23);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 37);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Asosiy oyna";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Home::button10_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->listView1);
			this->panel3->Location = System::Drawing::Point(204, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(692, 423);
			this->panel3->TabIndex = 36;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Id, this->Name,
					this->Fakultet, this->Rahbar, this->Yil, this->Joylashuv, this->oqituvchisoni, this->Telefon
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(483, 345);
			this->dataGridView1->TabIndex = 32;
			// 
			// Id
			// 
			this->Id->HeaderText = L"T/r";
			this->Id->Name = L"Id";
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nomi";
			this->Name->Name = L"Name";
			// 
			// Fakultet
			// 
			this->Fakultet->HeaderText = L"Fakultet";
			this->Fakultet->Name = L"Fakultet";
			// 
			// Rahbar
			// 
			this->Rahbar->HeaderText = L"Rahbar";
			this->Rahbar->Name = L"Rahbar";
			// 
			// Yil
			// 
			this->Yil->HeaderText = L"Tashkil etilgan yil";
			this->Yil->Name = L"Yil";
			// 
			// Joylashuv
			// 
			this->Joylashuv->HeaderText = L"Joylashuv";
			this->Joylashuv->Name = L"Joylashuv";
			// 
			// oqituvchisoni
			// 
			this->oqituvchisoni->HeaderText = L"O\'qituvchilar soni";
			this->oqituvchisoni->Name = L"oqituvchisoni";
			// 
			// Telefon
			// 
			this->Telefon->HeaderText = L"Telefoni";
			this->Telefon->Name = L"Telefon";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(896, 478);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->Text = L"Asosiy Oyna";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (panel2->Width != 75) {
		button10->Text = "";  button10->Width = 40;
		button11->Text = "";  button11->Width = 40;
		button12->Text = "";  button12->Width = 40;
		button13->Text = "";  button13->Width = 40;
		button14->Text = "";  button14->Width = 40;
		button15->Text = "";  button15->Width = 40;
		button18->Text = "";  button18->Width = 40;
		//O'qituvchi qo'shish
		panel2->Width = 75;
		groupBox1->Text = "";	groupBox1->Width = 68;
		groupBox5->Text = "";	groupBox5->Width = 68;

		button9->Width = 50;
		listView1->Width = 608; groupBox2->Width = 620;
		groupBox2->Location = System::Drawing::Point(81, 55);
		
		panel3->Width = 808;
	}
	else {
		button10->Text = "Asosiy oyna";  button10->Width = 157;
		button11->Text = "Kafedra qo'shish";	button11->Width = 157;
		button12->Text = "Fakultet qo'shish";	button12->Width = 157;
		button13->Text = "Dasturdan chiqish";	button13->Width = 157;
		button14->Text = "Dastur haqida";	button14->Width = 157;
		button15->Text = "Mualif haqida";	button15->Width = 157;
		button18->Text = "O'qituvchi qo'shish";  button18->Width = 157;
		panel2->Width = 196;
		groupBox1->Text = "Asosiy";		groupBox1->Width = 183;
		groupBox5->Text = "Qo'shimcha"; groupBox5->Width = 183;
		button9->Width = 175;
		listView1->Width = 483; groupBox2->Width = 495;
		groupBox2->Location = System::Drawing::Point(204, 55);

	}
	
}
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (search->Text == "Izlash...") {
		search->Text = "";
		search->ForeColor = Color::Black;
		button7->Visible = true;
	}
}
private: System::Void search_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (search->Text == "") {
		search->Text = "Izlash...";
		search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		button7->Visible = false;
	}
}

	private: bool searchKafedra = true;
	//private: array<String^>^ list = gcnew array<String^>{"123465", "lhudnk", "*&^$&#"};
	private: System::Void search_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (search->Text != "") {
			ListViewItem ^lvi = gcnew ListViewItem();
			//lvi->Text = Convert::ToString(listView2->Items->Count + 1);

			ListViewItem::ListViewSubItem ^lvsi1 = gcnew ListViewItem::ListViewSubItem();
			lvsi1->Text = search->Text;
			lvi->SubItems->Add(lvsi1);
			//(searchKafedra) ? listView1->Items->Add(lvi) : listView2->Items->Add(lvi);
		}
		else {

		}
	}

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		AddDepartment ^addDepartment = gcnew AddDepartment();
		addDepartment->ShowDialog();
		MessageBox::Show(Convert::ToString(addDepartment->DialogResult), "info", MessageBoxButtons::OK);

	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		AddTeacher ^addTeacher = gcnew AddTeacher();
		addTeacher->ShowDialog();
	}
	private: bool dragging = false;
	private: Point dragCursorPoint;
	private: Point dragFormpoint;
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = true;
		dragCursorPoint = Cursor->Position;
		dragFormpoint = this->Location;
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (dragging) {
			Point dif = Point::Subtract(Cursor->Position, System::Drawing::Size(dragCursorPoint));
			this->Location = Point::Add(dragFormpoint, System::Drawing::Size(dif));
		}
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = false;
	}

	//o'qituvchilar jadvalida o'tish
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		searchKafedra = false;
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		//groupBox6->Visible = true;
		//location 204, 55
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		searchKafedra = false;
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		//groupBox6->Visible = true;
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		searchKafedra = true;
		groupBox2->Visible = true;
		groupBox3->Visible = true;
		//groupBox6->Visible = false;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		search->Text = "Izlash...";
		search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		button7->Visible = false;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//diagramm uchun yangi oynani chaqirish
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		String ^connStr = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\temp.mdf;Integrated Security=True;Connect Timeout=30";
		String ^sql = "Select * From fakulteti";
		SqlConnection^ connect = gcnew SqlConnection(connStr);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sql, connect);
		DataSet^ ds = gcnew DataSet();
		connect->Open();
		dataAdapter->Fill(ds, "Fakultetlar");
		connect->Close();
		dataGridView1->DataSource = ds;
		dataGridView1->DataMember = "Fakultetlar";

		dataGridView1->Columns[0]->HeaderText = "T/r";
		dataGridView1->Columns[0]->Width = 30;
		dataGridView1->Columns[0]->ReadOnly = true;
		dataGridView1->Columns[0]->Name = "Tr";

		dataGridView1->Columns[1]->HeaderText = "Nomi";
		dataGridView1->Columns[1]->Name = "Nomi";
		dataGridView1->Columns[1]->ReadOnly = true;
	}
	catch (String ^message)
	{
		MessageBox::Show(message, "xatolik", MessageBoxButtons::OK);
	}
}
};
}
