#pragma once

namespace CalculatorNET {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ clear_butn;
	private: System::Windows::Forms::Button^ znak_minus;
	protected:


	protected:

	protected:

	protected:







	private: System::Windows::Forms::Button^ butn_equal;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_6;





	private: System::Windows::Forms::Button^ button_5;

	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_3;


	private: System::Windows::Forms::Button^ button_2;

	private: System::Windows::Forms::Button^ button_1;

	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ button_0;


	private: System::Windows::Forms::Button^ procent;
	private: System::Windows::Forms::Button^ butn_plus;
	private: System::Windows::Forms::Button^ butn_minus;
	private: System::Windows::Forms::Button^ butn_multiplication;
	private: System::Windows::Forms::Button^ butn_division;

	private: float first_number;
	private: char user_action = ' ';
	private: bool equal = false;














	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->clear_butn = (gcnew System::Windows::Forms::Button());
			this->znak_minus = (gcnew System::Windows::Forms::Button());
			this->butn_equal = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->procent = (gcnew System::Windows::Forms::Button());
			this->butn_plus = (gcnew System::Windows::Forms::Button());
			this->butn_minus = (gcnew System::Windows::Forms::Button());
			this->butn_multiplication = (gcnew System::Windows::Forms::Button());
			this->butn_division = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::Control;
			this->result_label->Location = System::Drawing::Point(12, 9);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(312, 96);
			this->result_label->TabIndex = 4;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// clear_butn
			// 
			this->clear_butn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->clear_butn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_butn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_butn->Location = System::Drawing::Point(12, 118);
			this->clear_butn->Name = L"clear_butn";
			this->clear_butn->Size = System::Drawing::Size(146, 60);
			this->clear_butn->TabIndex = 6;
			this->clear_butn->Text = L"Очистить";
			this->clear_butn->UseVisualStyleBackColor = false;
			this->clear_butn->Click += gcnew System::EventHandler(this, &Calculator::clear_butn_Click);
			// 
			// znak_minus
			// 
			this->znak_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->znak_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->znak_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->znak_minus->Location = System::Drawing::Point(164, 118);
			this->znak_minus->Name = L"znak_minus";
			this->znak_minus->Size = System::Drawing::Size(70, 60);
			this->znak_minus->TabIndex = 8;
			this->znak_minus->Text = L"+/-";
			this->znak_minus->UseVisualStyleBackColor = false;
			this->znak_minus->Click += gcnew System::EventHandler(this, &Calculator::znak_minus_Click);
			// 
			// butn_equal
			// 
			this->butn_equal->BackColor = System::Drawing::SystemColors::HotTrack;
			this->butn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_equal->Location = System::Drawing::Point(254, 118);
			this->butn_equal->Name = L"butn_equal";
			this->butn_equal->Size = System::Drawing::Size(70, 60);
			this->butn_equal->TabIndex = 22;
			this->butn_equal->Text = L"=";
			this->butn_equal->UseVisualStyleBackColor = false;
			this->butn_equal->Click += gcnew System::EventHandler(this, &Calculator::butn_equal_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::DimGray;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->Location = System::Drawing::Point(12, 193);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(70, 60);
			this->button_7->TabIndex = 23;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::DimGray;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->Location = System::Drawing::Point(88, 193);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(70, 60);
			this->button_8->TabIndex = 24;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::DimGray;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->Location = System::Drawing::Point(164, 193);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(70, 60);
			this->button_9->TabIndex = 25;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::DimGray;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->Location = System::Drawing::Point(164, 259);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(70, 60);
			this->button_6->TabIndex = 28;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::DimGray;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->Location = System::Drawing::Point(88, 259);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(70, 60);
			this->button_5->TabIndex = 27;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::DimGray;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->Location = System::Drawing::Point(12, 259);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(70, 60);
			this->button_4->TabIndex = 26;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::DimGray;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->Location = System::Drawing::Point(164, 325);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(70, 60);
			this->button_3->TabIndex = 31;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::DimGray;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->Location = System::Drawing::Point(88, 325);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(70, 60);
			this->button_2->TabIndex = 30;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::DimGray;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->Location = System::Drawing::Point(12, 325);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(70, 60);
			this->button_1->TabIndex = 29;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::Color::DimGray;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dot->Location = System::Drawing::Point(164, 391);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(70, 60);
			this->dot->TabIndex = 34;
			this->dot->Text = L",";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &Calculator::dot_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::DimGray;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->Location = System::Drawing::Point(88, 391);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(70, 60);
			this->button_0->TabIndex = 33;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &Calculator::ButnNum_Click);
			// 
			// procent
			// 
			this->procent->BackColor = System::Drawing::Color::DimGray;
			this->procent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procent->Location = System::Drawing::Point(12, 391);
			this->procent->Name = L"procent";
			this->procent->Size = System::Drawing::Size(70, 60);
			this->procent->TabIndex = 32;
			this->procent->Text = L"%";
			this->procent->UseVisualStyleBackColor = false;
			this->procent->Click += gcnew System::EventHandler(this, &Calculator::procent_Click);
			// 
			// butn_plus
			// 
			this->butn_plus->BackColor = System::Drawing::SystemColors::HotTrack;
			this->butn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_plus->Location = System::Drawing::Point(254, 193);
			this->butn_plus->Name = L"butn_plus";
			this->butn_plus->Size = System::Drawing::Size(70, 60);
			this->butn_plus->TabIndex = 35;
			this->butn_plus->Text = L"+";
			this->butn_plus->UseVisualStyleBackColor = false;
			this->butn_plus->Click += gcnew System::EventHandler(this, &Calculator::butn_plus_Click);
			// 
			// butn_minus
			// 
			this->butn_minus->BackColor = System::Drawing::SystemColors::HotTrack;
			this->butn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_minus->Location = System::Drawing::Point(254, 259);
			this->butn_minus->Name = L"butn_minus";
			this->butn_minus->Size = System::Drawing::Size(70, 60);
			this->butn_minus->TabIndex = 36;
			this->butn_minus->Text = L"-";
			this->butn_minus->UseVisualStyleBackColor = false;
			this->butn_minus->Click += gcnew System::EventHandler(this, &Calculator::butn_minus_Click);
			// 
			// butn_multiplication
			// 
			this->butn_multiplication->BackColor = System::Drawing::SystemColors::HotTrack;
			this->butn_multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butn_multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_multiplication->Location = System::Drawing::Point(254, 325);
			this->butn_multiplication->Name = L"butn_multiplication";
			this->butn_multiplication->Size = System::Drawing::Size(70, 60);
			this->butn_multiplication->TabIndex = 37;
			this->butn_multiplication->Text = L"*";
			this->butn_multiplication->UseVisualStyleBackColor = false;
			this->butn_multiplication->Click += gcnew System::EventHandler(this, &Calculator::butn_multiplication_Click);
			// 
			// butn_division
			// 
			this->butn_division->BackColor = System::Drawing::SystemColors::HotTrack;
			this->butn_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butn_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_division->Location = System::Drawing::Point(254, 391);
			this->butn_division->Name = L"butn_division";
			this->butn_division->Size = System::Drawing::Size(70, 60);
			this->butn_division->TabIndex = 38;
			this->butn_division->Text = L"/";
			this->butn_division->UseVisualStyleBackColor = false;
			this->butn_division->Click += gcnew System::EventHandler(this, &Calculator::butn_division_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(336, 461);
			this->Controls->Add(this->butn_division);
			this->Controls->Add(this->butn_multiplication);
			this->Controls->Add(this->butn_minus);
			this->Controls->Add(this->butn_plus);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->procent);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->butn_equal);
			this->Controls->Add(this->znak_minus);
			this->Controls->Add(this->clear_butn);
			this->Controls->Add(this->result_label);
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ButnNum_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		if (this->result_label->Text == "0" || equal == true){
			this->result_label->Text = button->Text;
			this->equal = false;
		}
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}
	private: System::Void butn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		action_for_num('+');
	}
	private: System::Void butn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		action_for_num('-');
	}
	private: System::Void butn_multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		action_for_num('*');
	}
	private: System::Void butn_division_Click(System::Object^ sender, System::EventArgs^ e) {
		action_for_num('/');
	}
	private: System::Void action_for_num(char action) {
		this->first_number = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void butn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') return;
		float secont_number = System::Convert::ToDouble(this->result_label->Text);
		float result;
		switch (this->user_action) {
		case '+': result = this->first_number + secont_number; break;
		case '-': result = this->first_number - secont_number; break;
		case '*': result = this->first_number * secont_number; break;
		case '%': result = this->first_number * secont_number / 100; break;
		case '/':
			if (secont_number == 0) {
				result = 0;
				this->result_label->ForeColor = Color::Red;
				MessageBox::Show(this, "На 0 делить нельзя...", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
			result = this->first_number / secont_number;
			break;
			}
		}
		this->equal = true;
		this->result_label->Text = System::Convert::ToString(result);
	}
	private: System::Void clear_butn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_number = 0;
		this->user_action = ' ';
		equal = false;
	}
	private: System::Void znak_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		float label_number = System::Convert::ToDouble(this->result_label->Text);
		label_number *= -1;
		this->result_label->Text = System::Convert::ToString(label_number);
	}
	private: System::Void procent_Click(System::Object^ sender, System::EventArgs^ e) {
		action_for_num('%');
	}
	private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->result_label->Text -> Contains(","))
			this->result_label->Text = this->result_label->Text + ",";
	}
};
}
