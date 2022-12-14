#pragma once

namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opernFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lageIconToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  detalsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  systemInfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutAuthorToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  age;

	private: System::Windows::Forms::Label^  surname;

	private: System::Windows::Forms::Label^  name;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader18;
	private: System::Windows::Forms::ColumnHeader^  columnHeader19;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::ColumnHeader^  columnHeader22;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label14;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opernFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lageIconToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->detalsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->systemInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutAuthorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
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
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->homeToolStripMenuItem,
					this->viewToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(891, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newWindowToolStripMenuItem,
					this->opernFileToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->homeToolStripMenuItem->Text = L"Asosiy";
			// 
			// newWindowToolStripMenuItem
			// 
			this->newWindowToolStripMenuItem->Name = L"newWindowToolStripMenuItem";
			this->newWindowToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->newWindowToolStripMenuItem->Text = L"Asosiy oyna";
			// 
			// opernFileToolStripMenuItem
			// 
			this->opernFileToolStripMenuItem->Name = L"opernFileToolStripMenuItem";
			this->opernFileToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->opernFileToolStripMenuItem->Text = L"Kafedra qo\'shish";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->exitToolStripMenuItem->Text = L"Dasturdan chiqish";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lageIconToolStripMenuItem,
					this->detalsToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->viewToolStripMenuItem->Text = L"Ko\'rinish";
			// 
			// lageIconToolStripMenuItem
			// 
			this->lageIconToolStripMenuItem->Name = L"lageIconToolStripMenuItem";
			this->lageIconToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->lageIconToolStripMenuItem->Text = L"LageIcon";
			// 
			// detalsToolStripMenuItem
			// 
			this->detalsToolStripMenuItem->Name = L"detalsToolStripMenuItem";
			this->detalsToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->detalsToolStripMenuItem->Text = L"Detals";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->systemInfoToolStripMenuItem,
					this->aboutAuthorToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->helpToolStripMenuItem->Text = L"Yordam";
			// 
			// systemInfoToolStripMenuItem
			// 
			this->systemInfoToolStripMenuItem->Name = L"systemInfoToolStripMenuItem";
			this->systemInfoToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->systemInfoToolStripMenuItem->Text = L"Tizim ma\'luotlari";
			// 
			// aboutAuthorToolStripMenuItem
			// 
			this->aboutAuthorToolStripMenuItem->Name = L"aboutAuthorToolStripMenuItem";
			this->aboutAuthorToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->aboutAuthorToolStripMenuItem->Text = L"Muallif haqida";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->age);
			this->groupBox1->Controls->Add(this->surname);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Location = System::Drawing::Point(9, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(248, 425);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"O\'qituvchi qo\'shish";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(20, 100);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(206, 41);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Jinsi";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(110, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(45, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ayol";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(17, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Erkak";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(93, 184);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(134, 21);
			this->comboBox3->TabIndex = 21;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(93, 309);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(134, 21);
			this->comboBox2->TabIndex = 20;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(93, 279);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(93, 341);
			this->maskedTextBox1->Mask = L"+998 (00) 000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(133, 20);
			this->maskedTextBox1->TabIndex = 18;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(93, 150);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(134, 20);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->Value = System::DateTime(2022, 11, 3, 9, 32, 26, 0);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(93, 216);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(133, 20);
			this->numericUpDown3->TabIndex = 16;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(93, 246);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(133, 20);
			this->numericUpDown2->TabIndex = 15;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(93, 74);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(133, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Tozalash";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 344);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Telefon:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Ilmiy darajasi:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Kafedra:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Maosh:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tajribasi:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 379);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Qo\'shish";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Lavozim:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tug\'ilgan kuni";
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Location = System::Drawing::Point(17, 76);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(34, 13);
			this->age->TabIndex = 2;
			this->age->Text = L"Yosh:";
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Location = System::Drawing::Point(17, 49);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(47, 13);
			this->surname->TabIndex = 1;
			this->surname->Text = L"Familiya:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(17, 23);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(26, 13);
			this->name->TabIndex = 0;
			this->name->Text = L"Ism:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listView1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(263, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(400, 425);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"O\'qituvchilar ro\'yxati";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(12) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(6, 17);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(388, 356);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"T/r";
			this->columnHeader1->Width = 28;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Ism";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Familiya";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Yosh";
			this->columnHeader4->Width = 39;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Jinsi";
			this->columnHeader5->Width = 46;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Tug\'ilgan kuni";
			this->columnHeader6->Width = 50;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Lavozimi";
			this->columnHeader7->Width = 55;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Tajribasi";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Maoshi";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Kafedrasi";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Ilmiy darajasi";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Telefoni";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(290, 387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Jami soni: ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(669, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(213, 154);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tanlangan o\'qituvchi haqida";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Maosh:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 106);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Telefon:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Kafedra:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(21, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Ism va Familiya:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 52);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Lavozim:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(269, 406);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 29);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Saqlash";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(369, 406);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 29);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Tozalash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(467, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 29);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Statistika";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->listView3);
			this->groupBox5->Controls->Add(this->listView2);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Location = System::Drawing::Point(669, 183);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(213, 269);
			this->groupBox5->TabIndex = 29;
			this->groupBox5->TabStop = false;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader16, this->columnHeader17,
					this->columnHeader18, this->columnHeader19
			});
			this->listView3->GridLines = true;
			this->listView3->Location = System::Drawing::Point(6, 158);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(198, 105);
			this->listView3->TabIndex = 32;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"T/r";
			this->columnHeader16->Width = 23;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Ism";
			this->columnHeader17->Width = 54;
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Familiya";
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"Kafedrasi";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader13, this->columnHeader14,
					this->columnHeader15, this->columnHeader22
			});
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(9, 31);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(198, 105);
			this->listView2->TabIndex = 23;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"T/r";
			this->columnHeader13->Width = 22;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Ism";
			this->columnHeader14->Width = 48;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Familiya";
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"Kafedrasi";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 142);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Akademik";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 15);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Akademik";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 464);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Kafedra o\'qituvchilari haqida";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//ism, familiya, lavozim, yosh, tug'ilgan yil-oy-kun, maosh, staj, telefon, email
		//kafedra, ilmiy daraja, 
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
