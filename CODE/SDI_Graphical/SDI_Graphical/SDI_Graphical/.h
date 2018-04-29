#pragma once
#include "project.h";
#include <string>;
#include <vector>;
#include <fstream>;
#include <iostream>;





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
	protected:
	private: System::Windows::Forms::Label^  lblSummary;
	private: System::Windows::Forms::Label^  lblGenre;
	private: System::Windows::Forms::Label^  lblRelease;
	private: System::Windows::Forms::Label^  lblLocations;
	private: System::Windows::Forms::Label^  lblLanguage;
	private: System::Windows::Forms::Label^  lblRuntime;
	private: System::Windows::Forms::Label^  lblKeywords;
	private: System::Windows::Forms::Label^  lblSales;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnPrev;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::Button^  btnMaterials;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::Label^  lblSearch;
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::Label^  contTitle;
	private: System::Windows::Forms::Label^  contSummary;
	private: System::Windows::Forms::Label^  contGenre;
	private: System::Windows::Forms::Label^  contReleaseDate;
	private: System::Windows::Forms::Label^  contLanguage;
	private: System::Windows::Forms::Label^  contRuntime;
	private: System::Windows::Forms::Label^  contStatus;
	private: System::Windows::Forms::Label^  contSales;
	private: System::Windows::Forms::Button^  btnLoad;

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
			this->lblRelease = (gcnew System::Windows::Forms::Label());
			this->lblLocations = (gcnew System::Windows::Forms::Label());
			this->lblLanguage = (gcnew System::Windows::Forms::Label());
			this->lblRuntime = (gcnew System::Windows::Forms::Label());
			this->lblKeywords = (gcnew System::Windows::Forms::Label());
			this->lblSales = (gcnew System::Windows::Forms::Label());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnMaterials = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->lblSearch = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->contTitle = (gcnew System::Windows::Forms::Label());
			this->contSummary = (gcnew System::Windows::Forms::Label());
			this->contGenre = (gcnew System::Windows::Forms::Label());
			this->contReleaseDate = (gcnew System::Windows::Forms::Label());
			this->contLanguage = (gcnew System::Windows::Forms::Label());
			this->contRuntime = (gcnew System::Windows::Forms::Label());
			this->contStatus = (gcnew System::Windows::Forms::Label());
			this->contSales = (gcnew System::Windows::Forms::Label());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Location = System::Drawing::Point(130, 103);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(30, 13);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Title:";
			// 
			// lblSummary
			// 
			this->lblSummary->AutoSize = true;
			this->lblSummary->Location = System::Drawing::Point(107, 125);
			this->lblSummary->Name = L"lblSummary";
			this->lblSummary->Size = System::Drawing::Size(53, 13);
			this->lblSummary->TabIndex = 1;
			this->lblSummary->Text = L"Summary:";
			// 
			// lblGenre
			// 
			this->lblGenre->AutoSize = true;
			this->lblGenre->Location = System::Drawing::Point(121, 148);
			this->lblGenre->Name = L"lblGenre";
			this->lblGenre->Size = System::Drawing::Size(39, 13);
			this->lblGenre->TabIndex = 2;
			this->lblGenre->Text = L"Genre:";
			// 
			// lblRelease
			// 
			this->lblRelease->AutoSize = true;
			this->lblRelease->Location = System::Drawing::Point(85, 170);
			this->lblRelease->Name = L"lblRelease";
			this->lblRelease->Size = System::Drawing::Size(75, 13);
			this->lblRelease->TabIndex = 3;
			this->lblRelease->Text = L"Release Date:";
			// 
			// lblLocations
			// 
			this->lblLocations->AutoSize = true;
			this->lblLocations->Location = System::Drawing::Point(69, 193);
			this->lblLocations->Name = L"lblLocations";
			this->lblLocations->Size = System::Drawing::Size(91, 13);
			this->lblLocations->TabIndex = 4;
			this->lblLocations->Text = L"Filming Locations:";
			// 
			// lblLanguage
			// 
			this->lblLanguage->AutoSize = true;
			this->lblLanguage->Location = System::Drawing::Point(102, 216);
			this->lblLanguage->Name = L"lblLanguage";
			this->lblLanguage->Size = System::Drawing::Size(58, 13);
			this->lblLanguage->TabIndex = 5;
			this->lblLanguage->Text = L"Language:";
			// 
			// lblRuntime
			// 
			this->lblRuntime->AutoSize = true;
			this->lblRuntime->Location = System::Drawing::Point(111, 239);
			this->lblRuntime->Name = L"lblRuntime";
			this->lblRuntime->Size = System::Drawing::Size(49, 13);
			this->lblRuntime->TabIndex = 6;
			this->lblRuntime->Text = L"Runtime:";
			// 
			// lblKeywords
			// 
			this->lblKeywords->AutoSize = true;
			this->lblKeywords->Location = System::Drawing::Point(104, 261);
			this->lblKeywords->Name = L"lblKeywords";
			this->lblKeywords->Size = System::Drawing::Size(56, 13);
			this->lblKeywords->TabIndex = 7;
			this->lblKeywords->Text = L"Keywords:";
			// 
			// lblSales
			// 
			this->lblSales->AutoSize = true;
			this->lblSales->Location = System::Drawing::Point(58, 303);
			this->lblSales->Name = L"lblSales";
			this->lblSales->Size = System::Drawing::Size(102, 13);
			this->lblSales->TabIndex = 8;
			this->lblSales->Text = L"Weekly ticket sales:";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Location = System::Drawing::Point(120, 283);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(40, 13);
			this->lblStatus->TabIndex = 9;
			this->lblStatus->Text = L"Status:";
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(547, 378);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 23);
			this->btnNext->TabIndex = 10;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// btnPrev
			// 
			this->btnPrev->Location = System::Drawing::Point(13, 378);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(75, 23);
			this->btnPrev->TabIndex = 11;
			this->btnPrev->Text = L"Previous";
			this->btnPrev->UseVisualStyleBackColor = true;
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(61, 50);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(206, 20);
			this->txtSearch->TabIndex = 12;
			// 
			// btnMaterials
			// 
			this->btnMaterials->Location = System::Drawing::Point(264, 378);
			this->btnMaterials->Name = L"btnMaterials";
			this->btnMaterials->Size = System::Drawing::Size(103, 23);
			this->btnMaterials->TabIndex = 13;
			this->btnMaterials->Text = L"Show Materials";
			this->btnMaterials->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(133, 378);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(432, 378);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(75, 23);
			this->btnRemove->TabIndex = 15;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = true;
			// 
			// lblSearch
			// 
			this->lblSearch->AutoSize = true;
			this->lblSearch->Location = System::Drawing::Point(61, 31);
			this->lblSearch->Name = L"lblSearch";
			this->lblSearch->Size = System::Drawing::Size(103, 13);
			this->lblSearch->TabIndex = 16;
			this->lblSearch->Text = L"Search for a project:";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(274, 48);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(60, 23);
			this->btnSearch->TabIndex = 17;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// contTitle
			// 
			this->contTitle->AutoSize = true;
			this->contTitle->Location = System::Drawing::Point(167, 103);
			this->contTitle->Name = L"contTitle";
			this->contTitle->Size = System::Drawing::Size(35, 13);
			this->contTitle->TabIndex = 18;
			this->contTitle->Text = L"label1";
			// 
			// contSummary
			// 
			this->contSummary->AutoSize = true;
			this->contSummary->Location = System::Drawing::Point(167, 125);
			this->contSummary->Name = L"contSummary";
			this->contSummary->Size = System::Drawing::Size(35, 13);
			this->contSummary->TabIndex = 19;
			this->contSummary->Text = L"label2";
			// 
			// contGenre
			// 
			this->contGenre->AutoSize = true;
			this->contGenre->Location = System::Drawing::Point(167, 148);
			this->contGenre->Name = L"contGenre";
			this->contGenre->Size = System::Drawing::Size(35, 13);
			this->contGenre->TabIndex = 20;
			this->contGenre->Text = L"label3";
			// 
			// contReleaseDate
			// 
			this->contReleaseDate->AutoSize = true;
			this->contReleaseDate->Location = System::Drawing::Point(167, 170);
			this->contReleaseDate->Name = L"contReleaseDate";
			this->contReleaseDate->Size = System::Drawing::Size(35, 13);
			this->contReleaseDate->TabIndex = 21;
			this->contReleaseDate->Text = L"label4";
			// 
			// contLanguage
			// 
			this->contLanguage->AutoSize = true;
			this->contLanguage->Location = System::Drawing::Point(167, 216);
			this->contLanguage->Name = L"contLanguage";
			this->contLanguage->Size = System::Drawing::Size(35, 13);
			this->contLanguage->TabIndex = 22;
			this->contLanguage->Text = L"label5";
			// 
			// contRuntime
			// 
			this->contRuntime->AutoSize = true;
			this->contRuntime->Location = System::Drawing::Point(167, 239);
			this->contRuntime->Name = L"contRuntime";
			this->contRuntime->Size = System::Drawing::Size(35, 13);
			this->contRuntime->TabIndex = 23;
			this->contRuntime->Text = L"label6";
			// 
			// contStatus
			// 
			this->contStatus->AutoSize = true;
			this->contStatus->Location = System::Drawing::Point(170, 283);
			this->contStatus->Name = L"contStatus";
			this->contStatus->Size = System::Drawing::Size(35, 13);
			this->contStatus->TabIndex = 24;
			this->contStatus->Text = L"label7";
			// 
			// contSales
			// 
			this->contSales->AutoSize = true;
			this->contSales->Location = System::Drawing::Point(170, 303);
			this->contSales->Name = L"contSales";
			this->contSales->Size = System::Drawing::Size(35, 13);
			this->contSales->TabIndex = 25;
			this->contSales->Text = L"label8";
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(432, 193);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 26;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &mainGUI::btnLoad_Click);
			// 
			// mainGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 413);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->contSales);
			this->Controls->Add(this->contStatus);
			this->Controls->Add(this->contRuntime);
			this->Controls->Add(this->contLanguage);
			this->Controls->Add(this->contReleaseDate);
			this->Controls->Add(this->contGenre);
			this->Controls->Add(this->contSummary);
			this->Controls->Add(this->contTitle);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->lblSearch);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnMaterials);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnPrev);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->lblSales);
			this->Controls->Add(this->lblKeywords);
			this->Controls->Add(this->lblRuntime);
			this->Controls->Add(this->lblLanguage);
			this->Controls->Add(this->lblLocations);
			this->Controls->Add(this->lblRelease);
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




	Project getProject() {

			ifstream projects("projects.txt");

			string projectInfo;
			getline(projects, projectInfo);

			Project project;

			for (string userInfo; getline(projects, projectInfo);)
			{
				vector<string> values = split(projectInfo, '|');

				project.title = values[0];
				project.summary = values[1];
				project.genre = values[2];
				project.releaseDate = values[3];
				project.language = values[4];
				project.runTime = stoi(values[5]);
				project.ticketSale = stoi(values[6]);
				project.status = values[7];
				 
			}
			return project;
			}


	private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {

		contTitle->Text = String::Format("Test");
	}
};
}
