#pragma once
#include "Home.h"
namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;






	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  passView;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::ProgressBar^  passIndecator;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::Button^  forgotPass;
	private: System::Windows::Forms::Button^  error;
	private: System::Windows::Forms::Label^  label1;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->error = (gcnew System::Windows::Forms::Button());
			this->forgotPass = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->passIndecator = (gcnew System::Windows::Forms::ProgressBar());
			this->passView = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::HighlightText;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(96, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Kirish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(328, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 38);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(354, 451);
			this->panel1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 48);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Dasturdan foydalanish uchun \r\navtorizatsiyadan o\'ting\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(33, 92);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(60);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(280, 280);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Login::pictureBox1_MouseLeave);
			this->pictureBox1->MouseHover += gcnew System::EventHandler(this, &Login::pictureBox1_MouseHover);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Blue;
			this->panel2->Controls->Add(this->error);
			this->panel2->Controls->Add(this->forgotPass);
			this->panel2->Controls->Add(this->username);
			this->panel2->Controls->Add(this->passIndecator);
			this->panel2->Controls->Add(this->passView);
			this->panel2->Controls->Add(this->password);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(354, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(375, 450);
			this->panel2->TabIndex = 3;
			// 
			// error
			// 
			this->error->BackColor = System::Drawing::Color::Transparent;
			this->error->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->error->FlatAppearance->BorderSize = 0;
			this->error->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->error->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->error->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->error->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error->ForeColor = System::Drawing::Color::Red;
			this->error->Location = System::Drawing::Point(101, 109);
			this->error->Name = L"error";
			this->error->Size = System::Drawing::Size(193, 35);
			this->error->TabIndex = 14;
			this->error->Text = L"Login yoki Parol xato";
			this->error->UseVisualStyleBackColor = false;
			this->error->Visible = false;
			// 
			// forgotPass
			// 
			this->forgotPass->BackColor = System::Drawing::Color::Transparent;
			this->forgotPass->FlatAppearance->BorderSize = 0;
			this->forgotPass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Crimson;
			this->forgotPass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->forgotPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->forgotPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgotPass->ForeColor = System::Drawing::Color::Transparent;
			this->forgotPass->Location = System::Drawing::Point(130, 364);
			this->forgotPass->Name = L"forgotPass";
			this->forgotPass->Size = System::Drawing::Size(150, 26);
			this->forgotPass->TabIndex = 13;
			this->forgotPass->Text = L"Parolni unutdingizmi \?";
			this->forgotPass->UseVisualStyleBackColor = false;
			this->forgotPass->Click += gcnew System::EventHandler(this, &Login::forgotPass_Click);
			// 
			// username
			// 
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.55F));
			this->username->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->username->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->username->Location = System::Drawing::Point(98, 153);
			this->username->Margin = System::Windows::Forms::Padding(5);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(215, 40);
			this->username->TabIndex = 0;
			this->username->Text = L"Foydalanuvchi nomi";
			this->username->Enter += gcnew System::EventHandler(this, &Login::username_Enter);
			this->username->Leave += gcnew System::EventHandler(this, &Login::username_Leave);
			// 
			// passIndecator
			// 
			this->passIndecator->BackColor = System::Drawing::Color::Red;
			this->passIndecator->ForeColor = System::Drawing::Color::Red;
			this->passIndecator->Location = System::Drawing::Point(98, 267);
			this->passIndecator->Name = L"passIndecator";
			this->passIndecator->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->passIndecator->Size = System::Drawing::Size(215, 9);
			this->passIndecator->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->passIndecator->TabIndex = 11;
			this->passIndecator->Value = 50;
			this->passIndecator->Visible = false;
			// 
			// passView
			// 
			this->passView->BackColor = System::Drawing::SystemColors::Info;
			this->passView->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passView.BackgroundImage")));
			this->passView->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->passView->CausesValidation = false;
			this->passView->Cursor = System::Windows::Forms::Cursors::Hand;
			this->passView->FlatAppearance->BorderSize = 0;
			this->passView->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->passView->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->passView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passView->Location = System::Drawing::Point(276, 228);
			this->passView->Name = L"passView";
			this->passView->Size = System::Drawing::Size(30, 30);
			this->passView->TabIndex = 9;
			this->passView->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->passView->UseVisualStyleBackColor = false;
			this->passView->Visible = false;
			this->passView->Click += gcnew System::EventHandler(this, &Login::passView_Click);
			// 
			// password
			// 
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.55F));
			this->password->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->password->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->password->Location = System::Drawing::Point(98, 223);
			this->password->Margin = System::Windows::Forms::Padding(5);
			this->password->Multiline = true;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(215, 40);
			this->password->TabIndex = 1;
			this->password->Text = L"Parol";
			this->password->TextChanged += gcnew System::EventHandler(this, &Login::password_TextChanged);
			this->password->Enter += gcnew System::EventHandler(this, &Login::password_Enter);
			this->password->Leave += gcnew System::EventHandler(this, &Login::password_Leave);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(53, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 39);
			this->button5->TabIndex = 8;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(53, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 39);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(145, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Samarqand 2022";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(105, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tizimga kirish";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 450);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(728, 450);
			this->MinimumSize = System::Drawing::Size(688, 450);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

private: System::Void passView_Click(System::Object^  sender, System::EventArgs^  e) {
	if (password->PasswordChar == '*') {
		password->PasswordChar = Convert::ToChar("\0");
	}
	else
		password->PasswordChar = '*';
}
private: System::Void password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (password->Text != "Parol" || password->Text != "") {
		passView->Visible = true;
		passIndecator->Visible = true;
		if (password->Text->Length >= 8) {
			passIndecator->Value = 100;
		}
		else {
			if (password->Text->Length >= 4) {
				passIndecator->Value = 50;
			}
			else
				passIndecator->Value = 10;
		}
	}
	else {
		error->Visible = false;
		passView->Visible = false;
		passIndecator->Visible = false;
	}
}

private: System::Void password_Enter(System::Object^  sender, System::EventArgs^  e) {
	//parol kiritganda parolni ko'rish va progress bar korsatadi
	if (password->Text == "Parol") {
		password->Text = "";
		password->ForeColor = Color::Black;
		passView->Visible = true;
		passIndecator->Visible = true;
		password->PasswordChar = '*';
	}
	else {
		passView->Visible = false;
		passIndecator->Visible = false;
		error->Visible = false;
	}
}

private: System::Void password_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (password->Text == "") {
		password->Text = "Parol";
		password->ForeColor = System::Drawing::SystemColors::InactiveCaption;
		password->PasswordChar = Convert::ToChar("\0");
		passIndecator->Visible = false;
		passView->Visible = false;
	}
}
private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	//pictureBox hoverda o'lchamini o'zgartirish
	//33, 92  280, 280
	pictureBox1->Location = System::Drawing::Point(33, 92);
	pictureBox1->Size = System::Drawing::Size(280, 280);
}

private: System::Void pictureBox1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	//pictureBox hoverda o'lchamini o'zgartirish
	pictureBox1->Location = System::Drawing::Point(10, 83);
	pictureBox1->Size = System::Drawing::Size(330, 330);
}

private: System::Void forgotPass_Click(System::Object^  sender, System::EventArgs^  e) {
	//parolni tiklash yuriqnomasi
	MessageBox::Show("Xurmatli foydalanuvchi login yoki parolni tiklash uchun tizim admini bilan bog'laning !\nTel: +9989 93 358 28 27 \nTelegram: @Qobulov_Asror ", "Yoriqnoma", MessageBoxButtons::OK);
}
private: System::Void username_Enter(System::Object^  sender, System::EventArgs^  e) {
	error->Visible = false;
	if (username->Text == "Foydalanuvchi nomi")
	{
		username->Text = "";
		username->ForeColor = Color::Black;
	}
}
private: System::Void username_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (username->Text == "")
	{
		username->Text = "Foydalanuvchi nomi";
		username->ForeColor = System::Drawing::SystemColors::InactiveCaption;
	}
}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (username->Text == "Foydalanuvchi nomi" || password->Text == "Parol") {
			MessageBox::Show("Maydonlarga qiymat kiriting");
			return;
		}
		String ^login1, ^password1;
		login1 = username->Text;
		password1 = password->Text;
		try {
			String ^conntionString;
			conntionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\departmentTeacher.mdf;Integrated Security=True;Connect Timeout=30";

			SqlConnection^ cnn = gcnew SqlConnection(conntionString);
			cnn->Open();
			String ^sql;
			sql = "SELECT login, password FROM users";
			SqlCommand^ command = gcnew SqlCommand(sql, cnn);
			SqlDataReader ^ dataReader = command->ExecuteReader();
			bool check = false;
			String ^ a = "";
			String ^ b = "";
			int w = 0;
			while (dataReader->Read()) {
				w++;
				a += dataReader->GetValue(1)->ToString() + " ";
				b += dataReader->GetValue(2)->ToString() + " ";
				if (dataReader->GetValue(2)->ToString() == username->Text && 
					dataReader->GetValue(1)->ToString() == password->Text) {
					check = true;
					break;
				}	
				if (w == 6) {
					break;
				}
			}
			MessageBox::Show(a, "xato");
			MessageBox::Show(b, "xato");
			cnn->Close();
			//parol xato alert
			if (!check)
			{
				error->Visible = true;
				error->Text = a;
				username->Text = "Foydalanuvchi nomi";
				password->Text = "Parol";
				//password->PasswordChar = Convert::ToChar("\0");
				username->ForeColor = System::Drawing::SystemColors::InactiveCaption;
				password->ForeColor = System::Drawing::SystemColors::InactiveCaption;

				//MessageBox::Show(dataReader->GetValue(1)->ToString(), username->Text, MessageBoxButtons::OK);
			}
			else {
				Visible = false;
				Home ^home = gcnew Home();
				home->ShowDialog();
				Close();
			}
			
		}
		catch (String^ str ) {
			MessageBox::Show(str, "xato");
		}
		
	}

};
}
