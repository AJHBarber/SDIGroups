#pragma once
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "userStruct.h"
#include "registration.h"

#include <msclr\marshal_cppstd.h>

using namespace std;


namespace SDIGraphical {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Button^  btnRegister;
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblLogin;
	protected:

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
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(97, 148);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &login::btnLogin_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(97, 178);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(75, 23);
			this->btnRegister->TabIndex = 1;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &login::btnRegister_Click);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(48, 67);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(58, 13);
			this->lblUsername->TabIndex = 2;
			this->lblUsername->Text = L"Username:";
			this->lblUsername->Click += gcnew System::EventHandler(this, &login::lblUsername_Click);
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(50, 97);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password:";
			this->lblPassword->Click += gcnew System::EventHandler(this, &login::lblPassword_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(122, 64);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(100, 20);
			this->txtUsername->TabIndex = 4;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &login::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(122, 94);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &login::txtPassword_TextChanged);
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->Location = System::Drawing::Point(90, 20);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(90, 18);
			this->lblLogin->TabIndex = 6;
			this->lblLogin->Text = L"User Login";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 234);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnLogin);
			this->Name = L"login";
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;
		
		string username = context.marshal_as<std::string>(txtUsername->Text);
		string password = context.marshal_as<std::string>(txtPassword->Text);

		std::string loginTest = loginUser(username, password);

		if (loginTest != "Invalid") {
			this->Hide();
			SDIGraphical::mainGUI homeGUI;
			homeGUI.ShowDialog();
		}
		else
		{
			MessageBox::Show("Username or Password Invalid");
		}
	}





	private: System::Void lblUsername_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtUsername_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lblPassword_Click(System::Object^  sender, System::EventArgs^  e) {
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


		
	string loginUser(string username, string password){

		ifstream users("users.txt");
		string login = "Invalid"; 

		string userInfo;
		getline(users, userInfo);

		for (string userInfo; getline(users, userInfo);)
		{
			vector<string> values = split(userInfo, ',');
		
			if (values[0] == username && values[1] == password) {

				switch(stoi(values[2])) {

				case 0: 
						login = "Admin";
						return login;
						break;				

				case 1: 
						login = "Regular";
						return login;
						break;
					
				case 2: 
						login = "BoxOffice";
						return login;
						break;
				}
			}
		}
		return login;
		}
			
			



		 
private: System::Void btnRegister_Click(System::Object^  sender, System::EventArgs^  e) {

	/*this->Hide();
	SDIGraphical::registration registerGUI;
	registerGUI.ShowDialog();
	this->Show();
*/
}
};



}
