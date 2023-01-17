#pragma once
#include "TeacherList.h"
namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;

	/// <summary>
	/// Summary for DepartmentList
	/// </summary>
	public ref class DepartmentList : public System::Windows::Forms::Form
	{
	public:
		DepartmentList(void)
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
		~DepartmentList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:


	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;








	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  tahrirlashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ochirishToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DepartmentList::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tahrirlashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ochirishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView1->Location = System::Drawing::Point(1, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(782, 483);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &DepartmentList::dataGridView1_RowHeaderMouseDoubleClick);
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
			this->tahrirlashToolStripMenuItem->Click += gcnew System::EventHandler(this, &DepartmentList::tahrirlashToolStripMenuItem_Click);
			// 
			// ochirishToolStripMenuItem
			// 
			this->ochirishToolStripMenuItem->Name = L"ochirishToolStripMenuItem";
			this->ochirishToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ochirishToolStripMenuItem->Text = L"O\'chirish";
			this->ochirishToolStripMenuItem->Click += gcnew System::EventHandler(this, &DepartmentList::ochirishToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(1, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(782, 432);
			this->panel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Location = System::Drawing::Point(32, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 35);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &DepartmentList::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Location = System::Drawing::Point(727, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 39);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DepartmentList::button1_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 25;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nomi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fakulteti";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Rahbari";
			this->Column4->Name = L"Column4";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Joylashuv";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"O\'qituvchi soni";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 80;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Telefon";
			this->Column8->Name = L"Column8";
			// 
			// DepartmentList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(783, 488);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DepartmentList";
			this->Text = L"DepartmentList";
			this->Load += gcnew System::EventHandler(this, &DepartmentList::DepartmentList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DepartmentList_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dataGridViewReafesh();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->dataGridViewReafesh();
	}
	private: void dataGridViewReafesh() {
		/*[Id] [nomi] [fakulteti] [rahbari] [tashkilTopganYil] [joylashuvi] [oqituvchiSoni] [telefon] */
		dataGridView1->Rows->Clear();
		try {
			String ^conntionString;
			conntionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\CodingMyLife\\Documents\\dataBase.mdf;Integrated Security=True;Connect Timeout=30";
			SqlConnection^ cnn = gcnew SqlConnection(conntionString);
			cnn->Open();
			String ^sql;
			sql = "SELECT Id, nomi, fakulteti, rahbari, joylashuvi, oqituvchiSoni, telefon  FROM kafedra";
			SqlCommand^ command = gcnew SqlCommand(sql, cnn);
			SqlDataReader ^ dataReader = command->ExecuteReader();
			int i = 0;
			while (dataReader->Read()) {
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[i]->Cells[0]->Value = dataReader->GetValue(0)->ToString();
				dataGridView1->Rows[i]->Cells[1]->Value = dataReader->GetValue(1)->ToString();
				dataGridView1->Rows[i]->Cells[2]->Value = dataReader->GetValue(2)->ToString();
				dataGridView1->Rows[i]->Cells[3]->Value = dataReader->GetValue(3)->ToString();
				dataGridView1->Rows[i]->Cells[4]->Value = dataReader->GetValue(4)->ToString();
				dataGridView1->Rows[i]->Cells[5]->Value = dataReader->GetValue(5)->ToString();
				dataGridView1->Rows[i]->Cells[6]->Value = dataReader->GetValue(6)->ToString();
		
				++i;
			}
		}
		catch (String^ str) {
			MessageBox::Show(str, "xato");
		}
	}
	//add
	private: int ID;
	private: TeacherList^ teacherList;
	private: System::Void dataGridView1_RowHeaderMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
		dataGridView1->Visible = false;
		button2->Visible = true;
		button1->Visible = false;
		ID = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString());
		teacherList = gcnew TeacherList(ID);
		teacherList->TopLevel = false;
		teacherList->AutoScroll = true;
		panel1->Controls->Add(teacherList);
		teacherList->Show();
		/*panel1->Controls->Remove(teacherList);
		teacherList->Close();
		dataGridView1->Visible = true;*/
	}
	//remove
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Visible = true;
		button2->Visible = false;
		button1->Visible = true;
		teacherList = gcnew TeacherList(ID);
		panel1->Controls->Remove(teacherList);
	}

	private: System::Void nextWin(System::Object^  sender, System::EventArgs^  e) {
		DataGridViewRow ^row = safe_cast<DataGridViewRow^>(sender);
		//DataGridViewCell ^cell = safe_cast<DataGridViewCell^>(sender);
		/*
		Button ^btn = safe_cast<Button^>(sender);
		TeacherList^ teacherList = gcnew TeacherList(btn->Name);
		dataGridView1->Visible = false;
		teacherList->TopLevel = false;
		teacherList->AutoScroll = true;
		panel1->Controls->Add(teacherList);
		teacherList->Show();
		*/

		MessageBox::Show(Convert::ToString(row->Cells[0]->Value), "info");
	}

	
	//tahrirlash
	private: System::Void tahrirlashToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(Convert::ToString(dataGridView1->SelectedRows[0]), "info");
	}
	//o'chirish
	private: System::Void ochirishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ID = Convert::ToInt32(dataGridView1->SelectedCells[0]->Value->ToString());
		
		if (dataGridView1->SelectedCells->Count!=0)
		{
			SqlConnection ^con = gcnew SqlConnection("Data Source = (LocalDB)\\MSSQLLocalDB;AttachDbFilename = C:\\Users\\CodingMyLife\\Documents\\dataBase.mdf;Integrated Security = True;Connect Timeout = 30");
			SqlCommand ^cmd = gcnew SqlCommand("DELETE kafedra WHERE Id=@id", con);
			con->Open();
			cmd->Parameters->AddWithValue("@id", ID);
			cmd->ExecuteNonQuery();
			con->Close();
			MessageBox::Show("Muvaffaqiyatli o'chirildi!");
			dataGridViewReafesh();
		}
	}
};
}
