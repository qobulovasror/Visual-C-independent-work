#pragma once
#include "AddDepartment.h"
#include "AddTeacher.h"
#include "DepartmentList.h"
#include "AddFaculty.h"
#include "ProgrammInfo.h"

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

	protected:








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

	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button20;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->groupBox4);
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
			this->panel1->Size = System::Drawing::Size(1015, 48);
			this->panel1->TabIndex = 34;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(824, 4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(106, 34);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(56, 10);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(44, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Kun";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Tun";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButton1_CheckedChanged);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(963, 4);
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
			this->button8->Location = System::Drawing::Point(459, 35);
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
			this->search->Location = System::Drawing::Point(460, 10);
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
			this->button7->Location = System::Drawing::Point(630, 6);
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
			this->panel2->Size = System::Drawing::Size(198, 494);
			this->panel2->TabIndex = 35;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(9, 303);
			this->button9->Margin = System::Windows::Forms::Padding(1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(175, 2);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox5->Location = System::Drawing::Point(6, 322);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(183, 161);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Qo\'shimcha";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(14, 97);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Muallif haqida";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Home::button6_Click);
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
			this->button15->Location = System::Drawing::Point(14, 20);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 37);
			this->button15->TabIndex = 5;
			this->button15->Text = L"Sozlanmalar";
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
			this->button14->Location = System::Drawing::Point(14, 60);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(156, 37);
			this->button14->TabIndex = 4;
			this->button14->Text = L"Dastur haqida";
			this->button14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Home::button14_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
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
			this->groupBox1->Size = System::Drawing::Size(186, 283);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Asosiy";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(17, 66);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 37);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Kafedralar ro\'yxati";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button3_Click_1);
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
			this->button18->Location = System::Drawing::Point(17, 188);
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
			this->button13->Location = System::Drawing::Point(17, 232);
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
			this->button12->Location = System::Drawing::Point(17, 152);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(157, 37);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Fakultet qo\'shish";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Home::button20_Click);
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
			this->button11->Location = System::Drawing::Point(17, 109);
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
			this->panel3->Controls->Add(this->groupBox2);
			this->panel3->Location = System::Drawing::Point(202, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(811, 488);
			this->panel3->TabIndex = 36;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(25, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(752, 431);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Bo\'limlar";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Red;
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->Location = System::Drawing::Point(528, 226);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(175, 105);
			this->button21->TabIndex = 36;
			this->button21->Text = L"Dasturdan chiqish";
			this->button21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button21->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Home::button13_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::DarkOrange;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button22->Location = System::Drawing::Point(304, 226);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(175, 105);
			this->button22->TabIndex = 35;
			this->button22->Text = L"Sozlanmalar";
			this->button22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button22->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Blue;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button23->Location = System::Drawing::Point(71, 226);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(175, 105);
			this->button23->TabIndex = 34;
			this->button23->Text = L"O\'qituvchi qo\'shish";
			this->button23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button23->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Home::button18_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->Location = System::Drawing::Point(528, 61);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(175, 105);
			this->button20->TabIndex = 33;
			this->button20->Text = L"Fakultet qo\'shish";
			this->button20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button20->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Home::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkGray;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button19->Location = System::Drawing::Point(304, 61);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(175, 105);
			this->button19->TabIndex = 32;
			this->button19->Text = L"Kafedra qo\'shish";
			this->button19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button19->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Home::button11_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(71, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 105);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Kafedralar ro\'yxati";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button3_Click_1);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1015, 544);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->Text = L"Asosiy Oyna";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: DepartmentList ^departmentList = gcnew DepartmentList();
	//panelda boshqa oynani chaqirish
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		groupBox2->Visible = false;
		this->departmentList->TopLevel = false;
		departmentList->AutoScroll = true;
		panel3->Controls->Add(departmentList);
		departmentList->Show();
	}
	//oynani yopish
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	//menuni qisqrtirish
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (panel2->Width != 75) {
			button10->Text = "";  button10->Width = 40;
			button11->Text = "";  button11->Width = 40;
			button4->Text = "";  button4->Width = 40;
			button12->Text = "";  button12->Width = 40;
			button13->Text = "";  button13->Width = 40;
			button14->Text = "";  button14->Width = 40;
			button15->Text = "";  button15->Width = 40;
			button18->Text = "";  button18->Width = 40;
			button6->Text = "";  button6->Width = 40;
			//O'qituvchi qo'shish
			panel2->Width = 75;
			groupBox1->Text = "";	groupBox1->Width = 68;
			groupBox5->Text = "";	groupBox5->Width = 68;

			button9->Width = 50;
			//listView1->Width = 608; groupBox2->Width = 620;
			//groupBox2->Location = System::Drawing::Point(81, 55);
		
			panel3->Width = 808;
		}
		else {
			button10->Text = "Asosiy oyna";  button10->Width = 157;
			button4->Text = "Kafedralar ro'yxati";  button4->Width = 157;
			button11->Text = "Kafedra qo'shish";	button11->Width = 157;
			button12->Text = "Fakultet qo'shish";	button12->Width = 157;
			button13->Text = "Dasturdan chiqish";	button13->Width = 157;
			button14->Text = "Dastur haqida";	button14->Width = 157;
			button15->Text = "Sozlanmalar";	button15->Width = 157;
			button6->Text = "Mualif haqida";  button6->Width = 157;
			button18->Text = "O'qituvchi qo'shish";  button18->Width = 157;
			panel2->Width = 196;
			groupBox1->Text = "Asosiy";		groupBox1->Width = 183;
			groupBox5->Text = "Qo'shimcha"; groupBox5->Width = 183;
			button9->Width = 175;
			//listView1->Width = 483; groupBox2->Width = 495;
			//groupBox2->Location = System::Drawing::Point(204, 55);

		}
	
	}
	//izlash uchun
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

	//kafedra qo'shish
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		AddDepartment ^addDepartment = gcnew AddDepartment();
		addDepartment->ShowDialog();
		MessageBox::Show(Convert::ToString(addDepartment->DialogResult), "info", MessageBoxButtons::OK);
	}

	//o'qituvchi qo'shish
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		AddTeacher ^addTeacher = gcnew AddTeacher();
		addTeacher->ShowDialog();
	}

	//oynani surish
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
		//groupBox2->Visible = false;
		//groupBox6->Visible = true;
		//location 204, 55
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		searchKafedra = false;
		//groupBox2->Visible = false;
		//groupBox6->Visible = true;
	}

	//Asosiy oyna bosish
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		searchKafedra = true;
		//groupBox6->Visible = false;

		if (groupBox2->Visible == false) {
			groupBox2->Visible = true;
			panel3->Controls->Remove(departmentList);
			//departmentList->Close();
		}

	}

	//chiqish uchun
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
		/*try
		{
			String ^connStr = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\dataBase.mdf;Integrated Security=True;Connect Timeout=30";
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
		}*/
	}

	//light mode
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = Color::White;
		this->ForeColor = Color::Black;
		//panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
		panel2->BackColor = Color::White;
		panel2->ForeColor = Color::Black;
		groupBox1->ForeColor = Color::Black;
		groupBox5->ForeColor = Color::Black;

		//defoult o'zgarishsiz qolish uchun
		this->panel1->BackColor = System::Drawing::Color::White;
		this->panel1->ForeColor = System::Drawing::Color::Black;
	}
	//dark mode
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = Color::Black;
		this->ForeColor = Color::White;
		panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
		panel2->ForeColor = Color::White;
		groupBox1->ForeColor = Color::White;
		groupBox5->ForeColor = Color::White;

		//defoult o'zgarishsiz qolish uchun
		this->panel1->BackColor = System::Drawing::Color::White;
		this->panel1->ForeColor = System::Drawing::Color::Black;
	}

	//fakultet qo'shish 
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		AddFaculty ^addFaculty = gcnew AddFaculty();
		addFaculty->ShowDialog();
	}

	//dastur haqida
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		ProgrammInfo ^programmInfo = gcnew ProgrammInfo();
		programmInfo->ShowDialog();
	}

	//dasturch haqida
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Dasturchi: \n \t F.I.SH: Qobulov Asror Raxmat o'g'li \n\t   \n \t telegram: t.me/QobulovAsror", "Dasturchi haqida", MessageBoxButtons::OK);
	}
};
}