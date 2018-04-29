#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "project.h"

#include <msclr\marshal_cppstd.h>



namespace SDIGraphical {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addProject
	/// </summary>
	public ref class addProject : public System::Windows::Forms::Form
	{
	public:
		addProject(void)
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
		~addProject()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::Label^  lblSummary;
	private: System::Windows::Forms::Label^  lblGenre;
	private: System::Windows::Forms::Label^  lblReleaseDate;
	private: System::Windows::Forms::Label^  lblLocations;
	private: System::Windows::Forms::Label^  lblLanguage;
	private: System::Windows::Forms::Label^  lblRuntime;
	private: System::Windows::Forms::Label^  lblKeywords;

	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtSummary;
	private: System::Windows::Forms::TextBox^  txtGenre;
	private: System::Windows::Forms::TextBox^  txtReleaseDate;
	private: System::Windows::Forms::TextBox^  txtLocations;
	private: System::Windows::Forms::TextBox^  txtLanguage;

	private: System::Windows::Forms::TextBox^  txtRuntime;
	private: System::Windows::Forms::TextBox^  txtKeywords;

	protected:

	protected:



	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Label^  lblAdd;
	private: System::Windows::Forms::TextBox^  txtStatus;

	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::Button^  btnClose;

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
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblSummary = (gcnew System::Windows::Forms::Label());
			this->lblGenre = (gcnew System::Windows::Forms::Label());
			this->lblReleaseDate = (gcnew System::Windows::Forms::Label());
			this->lblLocations = (gcnew System::Windows::Forms::Label());
			this->lblLanguage = (gcnew System::Windows::Forms::Label());
			this->lblRuntime = (gcnew System::Windows::Forms::Label());
			this->lblKeywords = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtSummary = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtReleaseDate = (gcnew System::Windows::Forms::TextBox());
			this->txtLocations = (gcnew System::Windows::Forms::TextBox());
			this->txtLanguage = (gcnew System::Windows::Forms::TextBox());
			this->txtRuntime = (gcnew System::Windows::Forms::TextBox());
			this->txtKeywords = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblAdd = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(92, 61);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Name:";
			// 
			// lblSummary
			// 
			this->lblSummary->AutoSize = true;
			this->lblSummary->Location = System::Drawing::Point(80, 87);
			this->lblSummary->Name = L"lblSummary";
			this->lblSummary->Size = System::Drawing::Size(53, 13);
			this->lblSummary->TabIndex = 1;
			this->lblSummary->Text = L"Summary:";
			// 
			// lblGenre
			// 
			this->lblGenre->AutoSize = true;
			this->lblGenre->Location = System::Drawing::Point(94, 114);
			this->lblGenre->Name = L"lblGenre";
			this->lblGenre->Size = System::Drawing::Size(39, 13);
			this->lblGenre->TabIndex = 2;
			this->lblGenre->Text = L"Genre:";
			// 
			// lblReleaseDate
			// 
			this->lblReleaseDate->AutoSize = true;
			this->lblReleaseDate->Location = System::Drawing::Point(58, 141);
			this->lblReleaseDate->Name = L"lblReleaseDate";
			this->lblReleaseDate->Size = System::Drawing::Size(75, 13);
			this->lblReleaseDate->TabIndex = 3;
			this->lblReleaseDate->Text = L"Release Date:";
			// 
			// lblLocations
			// 
			this->lblLocations->AutoSize = true;
			this->lblLocations->Location = System::Drawing::Point(42, 168);
			this->lblLocations->Name = L"lblLocations";
			this->lblLocations->Size = System::Drawing::Size(91, 13);
			this->lblLocations->TabIndex = 4;
			this->lblLocations->Text = L"Filming Locations:";
			// 
			// lblLanguage
			// 
			this->lblLanguage->AutoSize = true;
			this->lblLanguage->Location = System::Drawing::Point(80, 195);
			this->lblLanguage->Name = L"lblLanguage";
			this->lblLanguage->Size = System::Drawing::Size(58, 13);
			this->lblLanguage->TabIndex = 5;
			this->lblLanguage->Text = L"Language:";
			// 
			// lblRuntime
			// 
			this->lblRuntime->AutoSize = true;
			this->lblRuntime->Location = System::Drawing::Point(84, 222);
			this->lblRuntime->Name = L"lblRuntime";
			this->lblRuntime->Size = System::Drawing::Size(49, 13);
			this->lblRuntime->TabIndex = 6;
			this->lblRuntime->Text = L"Runtime:";
			// 
			// lblKeywords
			// 
			this->lblKeywords->AutoSize = true;
			this->lblKeywords->Location = System::Drawing::Point(80, 249);
			this->lblKeywords->Name = L"lblKeywords";
			this->lblKeywords->Size = System::Drawing::Size(56, 13);
			this->lblKeywords->TabIndex = 7;
			this->lblKeywords->Text = L"Keywords:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(136, 58);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(142, 20);
			this->txtName->TabIndex = 9;
			// 
			// txtSummary
			// 
			this->txtSummary->Location = System::Drawing::Point(136, 84);
			this->txtSummary->Name = L"txtSummary";
			this->txtSummary->Size = System::Drawing::Size(142, 20);
			this->txtSummary->TabIndex = 10;
			// 
			// txtGenre
			// 
			this->txtGenre->Location = System::Drawing::Point(136, 111);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(142, 20);
			this->txtGenre->TabIndex = 11;
			// 
			// txtReleaseDate
			// 
			this->txtReleaseDate->Location = System::Drawing::Point(136, 138);
			this->txtReleaseDate->Name = L"txtReleaseDate";
			this->txtReleaseDate->Size = System::Drawing::Size(142, 20);
			this->txtReleaseDate->TabIndex = 12;
			// 
			// txtLocations
			// 
			this->txtLocations->Location = System::Drawing::Point(136, 165);
			this->txtLocations->Name = L"txtLocations";
			this->txtLocations->Size = System::Drawing::Size(142, 20);
			this->txtLocations->TabIndex = 13;
			// 
			// txtLanguage
			// 
			this->txtLanguage->Location = System::Drawing::Point(136, 192);
			this->txtLanguage->Name = L"txtLanguage";
			this->txtLanguage->Size = System::Drawing::Size(142, 20);
			this->txtLanguage->TabIndex = 14;
			// 
			// txtRuntime
			// 
			this->txtRuntime->Location = System::Drawing::Point(136, 219);
			this->txtRuntime->Name = L"txtRuntime";
			this->txtRuntime->Size = System::Drawing::Size(142, 20);
			this->txtRuntime->TabIndex = 15;
			// 
			// txtKeywords
			// 
			this->txtKeywords->Location = System::Drawing::Point(136, 246);
			this->txtKeywords->Name = L"txtKeywords";
			this->txtKeywords->Size = System::Drawing::Size(142, 20);
			this->txtKeywords->TabIndex = 16;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(123, 323);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &addProject::btnAdd_Click);
			// 
			// lblAdd
			// 
			this->lblAdd->AutoSize = true;
			this->lblAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAdd->Location = System::Drawing::Point(115, 16);
			this->lblAdd->Name = L"lblAdd";
			this->lblAdd->Size = System::Drawing::Size(95, 18);
			this->lblAdd->TabIndex = 19;
			this->lblAdd->Text = L"Add Project";
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(136, 273);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(142, 20);
			this->txtStatus->TabIndex = 20;
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(94, 276);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(40, 13);
			this->lblStatus->TabIndex = 21;
			this->lblStatus->Text = L"Status:";
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(123, 353);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 22;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &addProject::btnClose_Click);
			// 
			// addProject
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 391);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->lblAdd);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtKeywords);
			this->Controls->Add(this->txtRuntime);
			this->Controls->Add(this->txtLanguage);
			this->Controls->Add(this->txtLocations);
			this->Controls->Add(this->txtReleaseDate);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtSummary);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblKeywords);
			this->Controls->Add(this->lblRuntime);
			this->Controls->Add(this->lblLanguage);
			this->Controls->Add(this->lblLocations);
			this->Controls->Add(this->lblReleaseDate);
			this->Controls->Add(this->lblGenre);
			this->Controls->Add(this->lblSummary);
			this->Controls->Add(this->lblName);
			this->Name = L"addProject";
			this->Text = L"addProject";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {

		Project newProject;

		msclr::interop::marshal_context context;

		newProject.title = context.marshal_as<std::string>(txtName->Text);
		newProject.summary = context.marshal_as<std::string>(txtSummary->Text);
		newProject.genre = context.marshal_as<std::string>(txtGenre->Text);
		newProject.releaseDate = context.marshal_as<std::string>(txtReleaseDate->Text);
		newProject.language = context.marshal_as<std::string>(txtLanguage->Text);
		newProject.filmingLocations = context.marshal_as<std::string>(txtLocations->Text);
		newProject.runTime = stoi(context.marshal_as<std::string>(txtRuntime->Text));
		newProject.ticketSale = 0;
		newProject.keywords = context.marshal_as<std::string>(txtKeywords->Text);
		newProject.status = context.marshal_as<std::string>(txtStatus->Text);

		saveProject(newProject);

		MessageBox::Show("Project added successfully");

	}




			 void saveProject(Project project) {

				 ofstream projects;
				 projects.open("projects.txt", ios::app);//open for appending

				 string toFile = project.title + "|" + project.summary + "|" + project.genre + "|"
					 + project.releaseDate + "|" + project.language + "|" + to_string(project.runTime)
					 + "|" + to_string(project.ticketSale) + "|" + project.status + "|" + project.filmingLocations
					 + "|" + project.keywords + "|";

				 //Console.writeLine(toFile);
				 projects << toFile << endl;
				 //projects.flush();
				 projects.close();

			 };




private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();

}
};
}
