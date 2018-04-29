#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include "project.h"
#include "LinkedList.h"


namespace SDIGraphical {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainGUI
	/// </summary>
	public ref class mainGUI : public System::Windows::Forms::Form
	{
	public:
		mainGUI(void)
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
		~mainGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblSummary;
	private: System::Windows::Forms::Label^  lblGenre;
	private: System::Windows::Forms::Label^  lblLanguage;
	protected:

	protected:



	private: System::Windows::Forms::Label^  lblLocations;

	private: System::Windows::Forms::Label^  lblReleaseDate;
	private: System::Windows::Forms::Label^  lblSales;


	private: System::Windows::Forms::Label^  lblKeywords;

	private: System::Windows::Forms::Label^  lblRuntime;
	private: System::Windows::Forms::Label^  contTitle;
	private: System::Windows::Forms::Label^  contSummary;
	private: System::Windows::Forms::Label^  contGenre;
	private: System::Windows::Forms::Label^  contReleaseDate;
	private: System::Windows::Forms::Label^  contLocations;
	private: System::Windows::Forms::Label^  contLanguage;
	private: System::Windows::Forms::Label^  contRuntime;
	private: System::Windows::Forms::Label^  contKeywords;
	private: System::Windows::Forms::Label^  contStatus;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::Label^  contSales;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnPrevious;
	private: System::Windows::Forms::Button^  btnMaterials;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Button^  btnNewProject;


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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblSummary = (gcnew System::Windows::Forms::Label());
			this->lblGenre = (gcnew System::Windows::Forms::Label());
			this->lblLanguage = (gcnew System::Windows::Forms::Label());
			this->lblLocations = (gcnew System::Windows::Forms::Label());
			this->lblReleaseDate = (gcnew System::Windows::Forms::Label());
			this->lblSales = (gcnew System::Windows::Forms::Label());
			this->lblKeywords = (gcnew System::Windows::Forms::Label());
			this->lblRuntime = (gcnew System::Windows::Forms::Label());
			this->contTitle = (gcnew System::Windows::Forms::Label());
			this->contSummary = (gcnew System::Windows::Forms::Label());
			this->contGenre = (gcnew System::Windows::Forms::Label());
			this->contReleaseDate = (gcnew System::Windows::Forms::Label());
			this->contLocations = (gcnew System::Windows::Forms::Label());
			this->contLanguage = (gcnew System::Windows::Forms::Label());
			this->contRuntime = (gcnew System::Windows::Forms::Label());
			this->contKeywords = (gcnew System::Windows::Forms::Label());
			this->contStatus = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->contSales = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrevious = (gcnew System::Windows::Forms::Button());
			this->btnMaterials = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnNewProject = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Location = System::Drawing::Point(163, 83);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(30, 13);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Title:";
			// 
			// lblSummary
			// 
			this->lblSummary->AutoSize = true;
			this->lblSummary->Location = System::Drawing::Point(140, 105);
			this->lblSummary->Name = L"lblSummary";
			this->lblSummary->Size = System::Drawing::Size(53, 13);
			this->lblSummary->TabIndex = 1;
			this->lblSummary->Text = L"Summary:";
			// 
			// lblGenre
			// 
			this->lblGenre->AutoSize = true;
			this->lblGenre->Location = System::Drawing::Point(154, 128);
			this->lblGenre->Name = L"lblGenre";
			this->lblGenre->Size = System::Drawing::Size(39, 13);
			this->lblGenre->TabIndex = 2;
			this->lblGenre->Text = L"Genre:";
			// 
			// lblLanguage
			// 
			this->lblLanguage->AutoSize = true;
			this->lblLanguage->Location = System::Drawing::Point(135, 196);
			this->lblLanguage->Name = L"lblLanguage";
			this->lblLanguage->Size = System::Drawing::Size(58, 13);
			this->lblLanguage->TabIndex = 5;
			this->lblLanguage->Text = L"Language:";
			// 
			// lblLocations
			// 
			this->lblLocations->AutoSize = true;
			this->lblLocations->Location = System::Drawing::Point(102, 173);
			this->lblLocations->Name = L"lblLocations";
			this->lblLocations->Size = System::Drawing::Size(91, 13);
			this->lblLocations->TabIndex = 4;
			this->lblLocations->Text = L"Filming Locations:";
			// 
			// lblReleaseDate
			// 
			this->lblReleaseDate->AutoSize = true;
			this->lblReleaseDate->Location = System::Drawing::Point(118, 151);
			this->lblReleaseDate->Name = L"lblReleaseDate";
			this->lblReleaseDate->Size = System::Drawing::Size(75, 13);
			this->lblReleaseDate->TabIndex = 3;
			this->lblReleaseDate->Text = L"Release Date:";
			// 
			// lblSales
			// 
			this->lblSales->AutoSize = true;
			this->lblSales->Location = System::Drawing::Point(84, 285);
			this->lblSales->Name = L"lblSales";
			this->lblSales->Size = System::Drawing::Size(108, 13);
			this->lblSales->TabIndex = 8;
			this->lblSales->Text = L"Weekly Ticket Sales:";
			// 
			// lblKeywords
			// 
			this->lblKeywords->AutoSize = true;
			this->lblKeywords->Location = System::Drawing::Point(137, 241);
			this->lblKeywords->Name = L"lblKeywords";
			this->lblKeywords->Size = System::Drawing::Size(56, 13);
			this->lblKeywords->TabIndex = 7;
			this->lblKeywords->Text = L"Keywords:";
			// 
			// lblRuntime
			// 
			this->lblRuntime->AutoSize = true;
			this->lblRuntime->Location = System::Drawing::Point(144, 219);
			this->lblRuntime->Name = L"lblRuntime";
			this->lblRuntime->Size = System::Drawing::Size(49, 13);
			this->lblRuntime->TabIndex = 6;
			this->lblRuntime->Text = L"Runtime:";
			// 
			// contTitle
			// 
			this->contTitle->AutoSize = true;
			this->contTitle->Location = System::Drawing::Point(200, 83);
			this->contTitle->Name = L"contTitle";
			this->contTitle->Size = System::Drawing::Size(35, 13);
			this->contTitle->TabIndex = 9;
			this->contTitle->Text = L"label1";
			// 
			// contSummary
			// 
			this->contSummary->AutoSize = true;
			this->contSummary->Location = System::Drawing::Point(200, 105);
			this->contSummary->Name = L"contSummary";
			this->contSummary->Size = System::Drawing::Size(35, 13);
			this->contSummary->TabIndex = 10;
			this->contSummary->Text = L"label2";
			// 
			// contGenre
			// 
			this->contGenre->AutoSize = true;
			this->contGenre->Location = System::Drawing::Point(200, 128);
			this->contGenre->Name = L"contGenre";
			this->contGenre->Size = System::Drawing::Size(35, 13);
			this->contGenre->TabIndex = 11;
			this->contGenre->Text = L"label3";
			// 
			// contReleaseDate
			// 
			this->contReleaseDate->AutoSize = true;
			this->contReleaseDate->Location = System::Drawing::Point(200, 151);
			this->contReleaseDate->Name = L"contReleaseDate";
			this->contReleaseDate->Size = System::Drawing::Size(35, 13);
			this->contReleaseDate->TabIndex = 12;
			this->contReleaseDate->Text = L"label4";
			// 
			// contLocations
			// 
			this->contLocations->AutoSize = true;
			this->contLocations->Location = System::Drawing::Point(200, 173);
			this->contLocations->Name = L"contLocations";
			this->contLocations->Size = System::Drawing::Size(35, 13);
			this->contLocations->TabIndex = 13;
			this->contLocations->Text = L"label5";
			// 
			// contLanguage
			// 
			this->contLanguage->AutoSize = true;
			this->contLanguage->Location = System::Drawing::Point(200, 196);
			this->contLanguage->Name = L"contLanguage";
			this->contLanguage->Size = System::Drawing::Size(35, 13);
			this->contLanguage->TabIndex = 14;
			this->contLanguage->Text = L"label6";
			// 
			// contRuntime
			// 
			this->contRuntime->AutoSize = true;
			this->contRuntime->Location = System::Drawing::Point(200, 219);
			this->contRuntime->Name = L"contRuntime";
			this->contRuntime->Size = System::Drawing::Size(35, 13);
			this->contRuntime->TabIndex = 15;
			this->contRuntime->Text = L"label7";
			// 
			// contKeywords
			// 
			this->contKeywords->AutoSize = true;
			this->contKeywords->Location = System::Drawing::Point(200, 241);
			this->contKeywords->Name = L"contKeywords";
			this->contKeywords->Size = System::Drawing::Size(35, 13);
			this->contKeywords->TabIndex = 16;
			this->contKeywords->Text = L"label8";
			// 
			// contStatus
			// 
			this->contStatus->AutoSize = true;
			this->contStatus->Location = System::Drawing::Point(198, 263);
			this->contStatus->Name = L"contStatus";
			this->contStatus->Size = System::Drawing::Size(35, 13);
			this->contStatus->TabIndex = 17;
			this->contStatus->Text = L"label9";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(152, 263);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(40, 13);
			this->lblStatus->TabIndex = 18;
			this->lblStatus->Text = L"Status:";
			// 
			// contSales
			// 
			this->contSales->AutoSize = true;
			this->contSales->Location = System::Drawing::Point(199, 285);
			this->contSales->Name = L"contSales";
			this->contSales->Size = System::Drawing::Size(41, 13);
			this->contSales->TabIndex = 19;
			this->contSales->Text = L"label11";
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(584, 366);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 23);
			this->btnNext->TabIndex = 20;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// btnPrevious
			// 
			this->btnPrevious->Location = System::Drawing::Point(13, 366);
			this->btnPrevious->Name = L"btnPrevious";
			this->btnPrevious->Size = System::Drawing::Size(75, 23);
			this->btnPrevious->TabIndex = 21;
			this->btnPrevious->Text = L"Previous";
			this->btnPrevious->UseVisualStyleBackColor = true;
			// 
			// btnMaterials
			// 
			this->btnMaterials->Location = System::Drawing::Point(295, 366);
			this->btnMaterials->Name = L"btnMaterials";
			this->btnMaterials->Size = System::Drawing::Size(98, 23);
			this->btnMaterials->TabIndex = 22;
			this->btnMaterials->Text = L"Show Materials";
			this->btnMaterials->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(522, 186);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 23;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &mainGUI::btnUpdate_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 24;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(261, 23);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 25;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// btnNewProject
			// 
			this->btnNewProject->Location = System::Drawing::Point(450, 72);
			this->btnNewProject->Name = L"btnNewProject";
			this->btnNewProject->Size = System::Drawing::Size(98, 23);
			this->btnNewProject->TabIndex = 26;
			this->btnNewProject->Text = L"Add New Project";
			this->btnNewProject->UseVisualStyleBackColor = true;
			this->btnNewProject->Click += gcnew System::EventHandler(this, &mainGUI::btnNewProject_Click);
			// 
			// mainGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 401);
			this->Controls->Add(this->btnNewProject);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnMaterials);
			this->Controls->Add(this->btnPrevious);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->contSales);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->contStatus);
			this->Controls->Add(this->contKeywords);
			this->Controls->Add(this->contRuntime);
			this->Controls->Add(this->contLanguage);
			this->Controls->Add(this->contLocations);
			this->Controls->Add(this->contReleaseDate);
			this->Controls->Add(this->contGenre);
			this->Controls->Add(this->contSummary);
			this->Controls->Add(this->contTitle);
			this->Controls->Add(this->lblSales);
			this->Controls->Add(this->lblKeywords);
			this->Controls->Add(this->lblRuntime);
			this->Controls->Add(this->lblLanguage);
			this->Controls->Add(this->lblLocations);
			this->Controls->Add(this->lblReleaseDate);
			this->Controls->Add(this->lblGenre);
			this->Controls->Add(this->lblSummary);
			this->Controls->Add(this->lblTitle);
			this->Name = L"mainGUI";
			this->Text = L"mainGUI";
			this->Load += gcnew System::EventHandler(this, &mainGUI::mainGUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainGUI_Load(System::Object^  sender, System::EventArgs^  e) {

		//vector<Project> allProjects = readAllProjects();

		//contTitle->Text = gcnew String(allProjects[0].title.c_str());
		//contSummary->Text = gcnew String(allProjects[0].summary.c_str());
		//contGenre->Text = gcnew String(allProjects[0].genre.c_str());
		//contReleaseDate->Text = gcnew String(allProjects[0].releaseDate.c_str());
		//contLocations->Text = gcnew String(allProjects[0].filmingLocations.c_str());
		//contLanguage->Text = gcnew String(allProjects[0].language.c_str());
		//contRuntime->Text = gcnew String(to_string(allProjects[0].runTime).c_str());
		//contKeywords->Text = gcnew String(allProjects[0].keywords.c_str());
		//contStatus->Text = gcnew String(allProjects[0].status.c_str());
		//contSales->Text = gcnew String(to_string(allProjects[0].ticketSale).c_str());

	}
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {

		Node* head = readAllProjects();
		Project currentProject = head->project;

		contTitle->Text = gcnew String(head->project.title.c_str());
		contSummary->Text = gcnew String(head->project.summary.c_str());
		contGenre->Text = gcnew String(head->project.genre.c_str());
		contReleaseDate->Text = gcnew String(head->project.releaseDate.c_str());
		contLocations->Text = gcnew String(head->project.filmingLocations.c_str());
		contLanguage->Text = gcnew String(head->project.language.c_str());
		contRuntime->Text = gcnew String(to_string(head->project.runTime).c_str());
		contKeywords->Text = gcnew String(head->project.keywords.c_str());
		contStatus->Text = gcnew String(head->project.status.c_str());
		contSales->Text = gcnew String(to_string(head->project.ticketSale).c_str());


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



			 //Returns a vector of all projects from the file
			 Node* readAllProjects() {

				 List* allProjects = new List();

				 ifstream projects("projects.txt");

				 for (string projectInfo; getline(projects, projectInfo);)
				 {
					
					 allProjects->InsertNode(0, readProject(projectInfo) );

				 }
				
				 /*if (!allProjects->IsEmpty) 
				 {
					
				 
				 }*/
				 return allProjects->GetNode(0);

			 }


			 //Converts from string in saved file to Project

			 Project readProject(string fromFile) {
				 //Title|summary|genre|Date|language|100|71|status|
				 Project curProject;
				 vector<string> splitLine = split(fromFile, '|');
				 
				 curProject.title = splitLine[0];
				 curProject.summary = splitLine[1];
				 curProject.genre = splitLine[2];
				 curProject.releaseDate = splitLine[3];
				 curProject.language = splitLine[4];
				 curProject.runTime = stoi(splitLine[5]);
				 curProject.ticketSale = stoi(splitLine[6]);
				 curProject.status = splitLine[7];
				 curProject.filmingLocations = splitLine[8];
				 curProject.keywords = splitLine[9];

				 return curProject;

			 }




private: System::Void btnNewProject_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	SDIGraphical::addProject addProjectGUI;
	addProjectGUI.ShowDialog();
	this->Show();

}
};
}
