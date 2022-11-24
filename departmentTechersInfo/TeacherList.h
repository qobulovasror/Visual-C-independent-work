#pragma once

namespace departmentTechersInfo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeacherList
	/// </summary>
	public ref class TeacherList : public System::Windows::Forms::Form
	{
	public:
		TeacherList(void)
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
		~TeacherList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox6;
	protected:
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader21;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader18;
	private: System::Windows::Forms::ColumnHeader^  columnHeader19;
	private: System::Windows::Forms::ColumnHeader^  columnHeader20;
	private: System::Windows::Forms::Label^  label4;

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
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->listView2);
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->ForeColor = System::Drawing::Color::White;
			this->groupBox6->Location = System::Drawing::Point(1, -1);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(685, 420);
			this->groupBox6->TabIndex = 33;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"O\'qituvchilar ro\'yxati";
			this->groupBox6->Visible = false;
			// 
			// listView2
			// 
			this->listView2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(13) {
				this->columnHeader9, this->columnHeader21,
					this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14, this->columnHeader15,
					this->columnHeader16, this->columnHeader17, this->columnHeader18, this->columnHeader19, this->columnHeader20
			});
			this->listView2->ForeColor = System::Drawing::SystemColors::Window;
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(12, 19);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(665, 363);
			this->listView2->TabIndex = 23;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"T/r";
			this->columnHeader9->Width = 28;
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Rasm";
			this->columnHeader21->Width = 55;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Ism";
			this->columnHeader10->Width = 56;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Familiya";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Yosh";
			this->columnHeader12->Width = 39;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Jinsi";
			this->columnHeader13->Width = 46;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Tug\'ilgan kuni";
			this->columnHeader14->Width = 50;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Lavozimi";
			this->columnHeader15->Width = 55;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Tajribasi";
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Maoshi";
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Kafedrasi";
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"Ilmiy darajasi";
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"Telefoni";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(24, 397);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Jami soni: ";
			// 
			// TeacherList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(690, 421);
			this->Controls->Add(this->groupBox6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TeacherList";
			this->Text = L"TeacherList";
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
