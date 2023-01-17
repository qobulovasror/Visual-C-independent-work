#pragma once

namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for AddDepartment
	/// </summary>
	public ref class AddDepartment : public System::Windows::Forms::Form
	{
	public:
		//int nextId;
		AddDepartment()
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
		~AddDepartment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  age;
	private: System::Windows::Forms::Label^  surname;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddDepartment::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->age);
			this->groupBox1->Controls->Add(this->surname);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(12, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 346);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(234, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 39);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Yopish";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddDepartment::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(128, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 39);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Tozalash";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(21, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 39);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Qo\'shish";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AddDepartment::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(201, 20);
			this->textBox3->TabIndex = 22;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Matematika", L"Biologiya", L"Tarix", L"Itelektual tizimlar" });
			this->comboBox1->Location = System::Drawing::Point(131, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(132, 224);
			this->maskedTextBox1->Mask = L"+998 (00) 000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(200, 20);
			this->maskedTextBox1->TabIndex = 18;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(149, 184);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(183, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Telefon:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Fakulteti:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Rahbari";
			// 
			// age
			// 
			this->age->AutoSize = true;
			this->age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->Location = System::Drawing::Point(20, 142);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(78, 17);
			this->age->TabIndex = 2;
			this->age->Text = L"Joylashuvi:";
			// 
			// surname
			// 
			this->surname->AutoSize = true;
			this->surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname->Location = System::Drawing::Point(20, 183);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(116, 17);
			this->surname->TabIndex = 1;
			this->surname->Text = L"O\'qituvchilar soni";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(20, 31);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(44, 17);
			this->name->TabIndex = 0;
			this->name->Text = L"Nomi:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(378, 39);
			this->panel1->TabIndex = 28;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddDepartment::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddDepartment::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddDepartment::panel1_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kafedra qo\'shish";
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(343, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 35);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddDepartment::button3_Click);
			// 
			// AddDepartment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(378, 400);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddDepartment";
			this->Text = L"AddDepartment";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}


	/*Oynani surish uchun*/
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

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^nomi, ^fakultet, ^rahbar, ^joylashuv, ^telefon;
		int oqituvchisoni;
		nomi = textBox1->Text;
		fakultet = Convert::ToString(comboBox1->SelectedIndex);
		rahbar = textBox3->Text;
		joylashuv = textBox2->Text;
		oqituvchisoni = Convert::ToInt32(numericUpDown1->Text);
		telefon = maskedTextBox1->Text;
		/*[Id]  [nomi]  [fakulteti]  [rahbari] [tashkilTopganYil] [joylashuvi] [oqituvchiSoni] [telefon]*/
		try
		{
			String ^connStr = "Data Source = (LocalDB)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\CodingMyLife\\Documents\\dataBase.mdf;Integrated Security = True;Connect Timeout = 30";
			SqlConnection^ connection = gcnew SqlConnection(connStr);
			connection->Open();
			//String^ sql = "INSERT INTO kafedra ( nomi, fakulteti, rahbari, joylashuvi, oqituvchiSoni, telefon) VALUES( 'nomi', 'fakultet', 'rahbar', 'joylashuv', '12', 'telefon')";
			String^ sql = "INSERT INTO kafedra ( nomi, fakulteti, rahbari, joylashuvi, oqituvchiSoni, telefon) VALUES('" + nomi + "','" + fakultet + "','" + rahbar  + "','" + joylashuv + "','" + oqituvchisoni + "','"+ telefon +"')";
			SqlCommand^ sql_command = gcnew SqlCommand();
			sql_command->Connection = connection;
			sql_command->CommandText = sql;
			int result = sql_command->ExecuteNonQuery();
			if (result > 0){
				MessageBox::Show("Ma'lumotlar saqlandi ", "Info");
			}
			else{
				MessageBox::Show("SQL QUERY ERROR");
			}
			connection->Close();

		}
		catch (String ^msg)
		{
			MessageBox::Show(msg, "Xato", MessageBoxButtons::OK);
		}
	}
};
}
