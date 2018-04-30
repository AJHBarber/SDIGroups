#include "model.h"
#include <fstream>
#include <sstream>
#include "split.h"
#include "stdafx.h"
#include "SelectionSort.h"

using namespace std;


Model::Model()
{
	
}


Model::~Model()
{
}

User* Model::SetUser(User* login)
{
	ifstream users("users.txt");

	User* currentUser = login;
	currentUser->privilege = 0; // 0 = not a user

	
	if (currentUser->name != "" && currentUser->password != "")
	{
		string userInfo;
		for (string userInfo; getline(users, userInfo);)
		{
			vector<string> values = split(userInfo, ',');

			if (values[0] == currentUser->name && values[1] == currentUser->password) {

				switch (stoi(values[2])) {

				case 1:
					currentUser->privilege = 1; //1: Admin User
					return currentUser;
					break;

				case 2:
					currentUser->privilege = 2; //2: Regular user
					return currentUser;
					break;

				case 3:
					currentUser->privilege = 3; //3: Box Office User
					return currentUser;
					break;
				}
			}
		}
	}
	return currentUser;
}

Node * Model::readAllProjects()
{

		List* allProjects = new List();

		ifstream projects("projects.txt");
		int count = 0;
		for (string projectInfo; getline(projects, projectInfo);)
		{

			allProjects->InsertNode(count, readProject(projectInfo));
			count++;
		}
		allProjects = SelectionSort(allProjects);
		return allProjects->GetNode(1);

}

Project Model::readProject(string projectInfo)
{

	//Title|summary|genre|Date|language|100|71|status|id
	

	Project curProject;
	vector<string> splitLine = split(projectInfo, '|');

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
	curProject.id = stoi(splitLine[10]);

	return curProject;
}


bool Model::saveProject(Project project) {
	
	ifstream projects("projects.txt");
	
	int count = 0;

	for (string project; getline(projects, project);) { count++; }
	try {
		ofstream projects;
		projects.open("projects.txt", ios::app);//open for appending

		string toFile = project.title + "|" + project.summary + "|" + project.genre + "|"
			+ project.releaseDate + "|" + project.language + "|" + to_string(project.runTime)
			+ "|" + to_string(project.ticketSale) + "|" + project.status + "|" + project.filmingLocations
			+ "|" + project.keywords + "|" + to_string(count);

		//Console.writeLine(toFile);
		projects << toFile << endl;
		//projects.flush();
		projects.close();
		return true;
	}

	catch (...) { return false; }

};


