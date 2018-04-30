#pragma once

#include <string>
#include "userStruct.h"
#include "vector"
#include "list.h"
#include "project.h"

 
using namespace std;


class Model
{
public:
	Model();
	~Model();

	User* SetUser(User* login);
	Node* readAllProjects();
	public:Project readProject(string projectInfo);
	bool saveProject(Project project);
	User currentUser;
	


};
class UserModel : public Model {


	//Functions -> Add project, view materials, add materials


};

class AdminModel : public UserModel {


	//Functions -> remove project, delete materials, 


};
class BoxOfficeUser : public Model {


	//Functions -> Add project, remove project


};