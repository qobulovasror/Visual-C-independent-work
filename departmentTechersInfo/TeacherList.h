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

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  tahrirlashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ochirishToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewImageColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column10;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherList::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tahrirlashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ochirishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column11,
					this->Column10
			});
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::Color::DarkOrange;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 25;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DimGray;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->Size = System::Drawing::Size(782, 432);
			this->dataGridView1->TabIndex = 25;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle2->NullValue = (cli::safe_cast<System::Object^>(resources->GetObject(L"dataGridViewCellStyle2.NullValue")));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"Rasm";
			this->Column2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Column2.Image")));
			this->Column2->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column2->Width = 85;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ism";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Familiyasi";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Yoshi";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 45;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Jinsi";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 70;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Tug\'ilgan yili";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 70;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Lavosim";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Tajriba";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 45;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Maosh";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 45;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Fayl";
			this->Column10->Name = L"Column10";
			this->Column10->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column10->Width = 65;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tahrirlashToolStripMenuItem,
					this->ochirishToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(125, 48);
			// 
			// tahrirlashToolStripMenuItem
			// 
			this->tahrirlashToolStripMenuItem->Name = L"tahrirlashToolStripMenuItem";
			this->tahrirlashToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->tahrirlashToolStripMenuItem->Text = L"Tahrirlash";
			// 
			// ochirishToolStripMenuItem
			// 
			this->ochirishToolStripMenuItem->Name = L"ochirishToolStripMenuItem";
			this->ochirishToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ochirishToolStripMenuItem->Text = L"O\'chirish";
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
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TeacherList_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dataConnect();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
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
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[i]->Cells[0]->Value = dataReader->GetValue(0)->ToString();
				dataGridView1->Rows[i]->Cells[1]->Value = Image::FromFile("C:\\Users\\CodingMyLife\\Documents\\Visual Studio 2015\\Projects\\departmentTechersInfo\\imgs\\user.png");
				dataGridView1->Rows[i]->Cells[2]->Value = dataReader->GetValue(2)->ToString();
				dataGridView1->Rows[i]->Cells[3]->Value = dataReader->GetValue(3)->ToString();
				dataGridView1->Rows[i]->Cells[4]->Value = dataReader->GetValue(4)->ToString();
				dataGridView1->Rows[i]->Cells[5]->Value = dataReader->GetValue(5)->ToString();
				dataGridView1->Rows[i]->Cells[6]->Value = dataReader->GetValue(6)->ToString();
				dataGridView1->Rows[i]->Cells[7]->Value = dataReader->GetValue(7)->ToString();
				dataGridView1->Rows[i]->Cells[8]->Value = dataReader->GetValue(8)->ToString();

				++i;
			}
		}
		catch (String ^err) {
			MessageBox::Show(err, "Xatolik");
		}
	}
};
}


