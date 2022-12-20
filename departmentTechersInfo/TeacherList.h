#pragma once

namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;
	/// <summary>
	/// Summary for TeacherList
	/// </summary>
	public ref class TeacherList : public System::Windows::Forms::Form
	{
	public:
		int ID;
		TeacherList(int ID)
		{
			InitializeComponent();
			this->ID = ID;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeacherList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rasm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ism;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Familiya;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Yosh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Jinsi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  yili;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Lavozim;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tajribasi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Maoshi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Kafedrasi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  darajasi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefoni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fayli;
	private: System::Windows::Forms::Button^  button1;


	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherList::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rasm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ism = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Familiya = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Yosh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Jinsi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->yili = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lavozim = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tajribasi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Maoshi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Kafedrasi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->darajasi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefoni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fayli = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->id, this->Rasm,
					this->Ism, this->Familiya, this->Yosh, this->Jinsi, this->yili, this->Lavozim, this->Tajribasi, this->Maoshi, this->Kafedrasi,
					this->darajasi, this->Telefoni, this->Fayli
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::Color::DarkOrange;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 25;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::DimGray;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Size = System::Drawing::Size(782, 432);
			this->dataGridView1->TabIndex = 25;
			// 
			// id
			// 
			this->id->HeaderText = L"T/r";
			this->id->Name = L"id";
			this->id->Width = 30;
			// 
			// Rasm
			// 
			this->Rasm->HeaderText = L"Rasm";
			this->Rasm->Name = L"Rasm";
			// 
			// Ism
			// 
			this->Ism->HeaderText = L"Ism";
			this->Ism->Name = L"Ism";
			// 
			// Familiya
			// 
			this->Familiya->HeaderText = L"Familiya";
			this->Familiya->Name = L"Familiya";
			// 
			// Yosh
			// 
			this->Yosh->HeaderText = L"Yosh";
			this->Yosh->Name = L"Yosh";
			this->Yosh->Width = 60;
			// 
			// Jinsi
			// 
			this->Jinsi->HeaderText = L"Jinsi";
			this->Jinsi->Name = L"Jinsi";
			this->Jinsi->Width = 50;
			// 
			// yili
			// 
			this->yili->HeaderText = L"Tug\'ilgan yili";
			this->yili->Name = L"yili";
			this->yili->Width = 60;
			// 
			// Lavozim
			// 
			this->Lavozim->HeaderText = L"Lavozim";
			this->Lavozim->Name = L"Lavozim";
			// 
			// Tajribasi
			// 
			this->Tajribasi->HeaderText = L"Tajribasi";
			this->Tajribasi->Name = L"Tajribasi";
			this->Tajribasi->Width = 50;
			// 
			// Maoshi
			// 
			this->Maoshi->HeaderText = L"Maoshi";
			this->Maoshi->Name = L"Maoshi";
			this->Maoshi->Width = 50;
			// 
			// Kafedrasi
			// 
			this->Kafedrasi->HeaderText = L"Kafedrasi";
			this->Kafedrasi->Name = L"Kafedrasi";
			// 
			// darajasi
			// 
			this->darajasi->HeaderText = L"Imliy darajasi";
			this->darajasi->Name = L"darajasi";
			// 
			// Telefoni
			// 
			this->Telefoni->HeaderText = L"Telefoni";
			this->Telefoni->Name = L"Telefoni";
			// 
			// Fayli
			// 
			this->Fayli->HeaderText = L"Fayli";
			this->Fayli->Name = L"Fayli";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Location = System::Drawing::Point(728, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 39);
			this->button1->TabIndex = 26;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeacherList::button1_Click);
			// 
			// TeacherList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(782, 432);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TeacherList";
			this->Text = L"TeacherList";
			this->Load += gcnew System::EventHandler(this, &TeacherList::TeacherList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TeacherList_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dataConnect();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->dataConnect();
	}
	private: void dataConnect() {
		/*[oqituvchilar]
		[Id] [rasm] [ism] [familiya][yosh][jinsi] [tugYili] [lavozim] [tajriba] [moash] [fayl]
		//id; Rasm; Ism;  Familiya; Yosh; Jinsi;  yili;    Lavozim;   Tajribasi;  Maoshi; Kafedrasi; darajasi; Telefoni; Fayli;
		SELECT * FROM oqituvchilar WHERE Id=2*/
		try {
			String ^conntionString;
			conntionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\dataBase.mdf;Integrated Security=True;Connect Timeout=30";
			SqlConnection^ cnn = gcnew SqlConnection(conntionString);
			cnn->Open();
			String ^sql;
			sql = "SELECT Id, rasm, ism, familiya, yosh, jinsi, tugYili, lavozim, tajriba, moash, fayl  FROM oqituvchilar WHERE kafedraId='" + this->ID + "'";
			SqlCommand^ command = gcnew SqlCommand(sql, cnn);
			SqlDataReader ^ dataReader = command->ExecuteReader();
			int i = 0;
			while (dataReader->Read()) {
				dataGridView1->Rows[i]->Cells[0]->Value = dataReader->GetValue(0)->ToString();
				dataGridView1->Rows[i]->Cells[1]->Value = dataReader->GetValue(1)->ToString();
				/*dataGridView1->Rows[i]->Cells[2]->Value = dataReader->GetValue(2)->ToString();
				dataGridView1->Rows[i]->Cells[3]->Value = dataReader->GetValue(3)->ToString();
				dataGridView1->Rows[i]->Cells[4]->Value = dataReader->GetValue(4)->ToString();
				dataGridView1->Rows[i]->Cells[5]->Value = dataReader->GetValue(5)->ToString();
				dataGridView1->Rows[i]->Cells[6]->Value = dataReader->GetValue(6)->ToString();
				dataGridView1->Rows[i]->Cells[7]->Value = dataReader->GetValue(7)->ToString();
				dataGridView1->Rows[i]->Cells[8]->Value = dataReader->GetValue(8)->ToString();
				dataGridView1->Rows[i]->Cells[9]->Value = dataReader->GetValue(9)->ToString();
				dataGridView1->Rows[i]->Cells[10]->Value = dataReader->GetValue(10)->ToString();*/

				++i;
			}
		}
		catch (String ^err) {
			MessageBox::Show(err, "Xatolik");
		}
	}
};
}


