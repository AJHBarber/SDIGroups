#pragma once
#include <string>
#include "login.h"
#include "mainGUI.h"
#include <fstream>

using namespace std;

namespace SDIGraphical {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for registration
	/// </summary>
	public ref class registration : public System::Windows::Forms::Form
	{
	public:
		registration(void)
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
		~registration()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::Button^  btnRegister;
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Label^  lblRegistration;


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
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblRegistration = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(113, 53);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 2;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &registration::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(113, 87);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &registration::txtPassword_TextChanged);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(43, 53);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(58, 13);
			this->lblUsername->TabIndex = 0;
			this->lblUsername->Text = L"Username:";
			this->lblUsername->Click += gcnew System::EventHandler(this, &registration::lblUsername_Click);
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(45, 90);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 1;
			this->lblPassword->Text = L"Password:";
			this->lblPassword->Click += gcnew System::EventHandler(this, &registration::lblPassword_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(98, 149);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(75, 23);
			this->btnRegister->TabIndex = 4;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &registration::btnRegister_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(98, 178);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &registration::btnLogin_Click);
			// 
			// lblRegistration
			// 
			this->lblRegistration->AutoSize = true;
			this->lblRegistration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistration->Location = System::Drawing::Point(65, 14);
			this->lblRegistration->Name = L"lblRegistration";
			this->lblRegistration->Size = System::Drawing::Size(140, 18);
			this->lblRegistration->TabIndex = 6;
			this->lblRegistration->Text = L"User Registration";
			// 
			// registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 229);
			this->Controls->Add(this->lblRegistration);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Name = L"registration";
			this->Text = L"registration";
			this->Load += gcnew System::EventHandler(this, &registration::registration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void lblUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void registration_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtUsername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lblPassword_Click(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void btnRegister_Click(System::Object^  sender, System::EventArgs^  e) {

	msclr::interop::marshal_context context;
	string username = context.marshal_as<std::string>(txtUsername->Text);
	string password = context.marshal_as<std::string>(txtPassword->Text);

	if (createUser(username,password) == true) {
		this->Hide();
		SDIGraphical::login loginGUI;
		loginGUI.ShowDialog();
	}
	else
	{
		MessageBox::Show("Username already taken");
	}

}




bool createUser(string username, string password) {

	ifstream userFile("users.txt");
	
	if (checkUserExists(username) == true) {
		
		userFile.close();
		return false;
	}

	else {
		ofstream users;
		users.open("users.txt", ios::app);
		//Defaults to regular user privilages (1)
		string userDetails = username + "," + password + ",1";
		users << userDetails << endl ;
		users.flush();
		users.close();
		return true;
	}
}


vector<string> split(string data, char split)
{
	vector<string> result;
	stringstream stream(data);
	string buffer = "";
	while (getline(stream, buffer, split)) {
		result.push_back(buffer);
	}
	return result;
}


bool checkUserExists(string username) {

	ifstream users("users.txt");
	bool userExists = false;

	string userInfo;
	getline(users, userInfo);

	for (string userInfo; getline(users, userInfo);)
	{
		vector<string> values = split(userInfo, ',');

		if (values[0] == username){

			userExists = true;
			return userExists;
	}
	}
	return userExists;
}

private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	SDIGraphical::login loginGUI;
	loginGUI.ShowDialog();

}
};


}
