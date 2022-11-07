#pragma once

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  age;
	private: System::Windows::Forms::Label^  surname;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button6;
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
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
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ToolStripMenuItem^  dasturdanChiqishToolStripMenuItem;

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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dasturdanChiqishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(210, 334);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 29);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Statistika";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(112, 334);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 29);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Tozalash";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->age);
			this->groupBox1->Controls->Add(this->surname);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Location = System::Drawing::Point(12, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(224, 373);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kafedra qo\'shish";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 20);
			this->textBox3->TabIndex = 22;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(93, 62);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(113, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(92, 265);
			this->maskedTextBox1->Mask = L"+998 (00) 000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(112, 20);
			this->maskedTextBox1->TabIndex = 18;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(109, 138);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(95, 20);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->Value = System::DateTime(2022, 11, 3, 9, 32, 26, 0);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(109, 224);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(95, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 29);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Tozalash";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Telefon:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Fakulteti:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Qo\'shish";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Rahbari";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tashkil etilgan yil";
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Location = System::Drawing::Point(16, 186);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(59, 13);
			this->age->TabIndex = 2;
			this->age->Text = L"Joylashuvi:";
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Location = System::Drawing::Point(16, 227);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(87, 13);
			this->surname->TabIndex = 1;
			this->surname->Text = L"O\'qituvchilar soni";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(16, 31);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(34, 13);
			this->name->TabIndex = 0;
			this->name->Text = L"Nomi:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 334);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 29);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Saqlash";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(712, 30);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(180, 197);
			this->groupBox3->TabIndex = 28;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tanlangan kafedra haqida";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(19, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 29);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Kafedra o\'qituvchilari";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Telefon:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Nomi:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Joylashuvi:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Fakulteti:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Rahbari";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->listView1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(242, 28);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(464, 373);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Kafedralar ro\'yxati";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(6, 17);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(452, 302);
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
			this->columnHeader2->Text = L"Nomi";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Fakulteti";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Rahbari";
			this->columnHeader4->Width = 39;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Tashkil etilgan yil";
			this->columnHeader5->Width = 46;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Joylashuvi";
			this->columnHeader6->Width = 50;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"O\'qituvchilar soni";
			this->columnHeader7->Width = 55;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Telefon";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(306, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Jami soni: ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->homeToolStripMenuItem,
					this->viewToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(901, 24);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newWindowToolStripMenuItem,
					this->opernFileToolStripMenuItem, this->exitToolStripMenuItem, this->dasturdanChiqishToolStripMenuItem
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
			this->exitToolStripMenuItem->Text = L"Fakultet qo\'shish";
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
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Location = System::Drawing::Point(712, 233);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(180, 164);
			this->groupBox4->TabIndex = 33;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ma\'limot";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(6, 19);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 131);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Kafedra o\'qituvchilari haqida ma\'lumot olish uchun kafedrani tanlab \"Kafedra o\'qi"
				L"tuvchilari\" tugmasini bosing yoki kafedrani ikki marta bosing";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dasturdanChiqishToolStripMenuItem
			// 
			this->dasturdanChiqishToolStripMenuItem->Name = L"dasturdanChiqishToolStripMenuItem";
			this->dasturdanChiqishToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->dasturdanChiqishToolStripMenuItem->Text = L"Dasturdan chiqish";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 409);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Home";
			this->Text = L"Home";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
