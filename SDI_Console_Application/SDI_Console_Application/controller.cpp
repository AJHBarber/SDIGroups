#include "controller.h"
#include "userStruct.h"
#include <iostream>


Controller::Controller(Model* _model, View* _view)
{
	model = _model;
	view = _view;
	//Get user to log in
	User currentUser = view->getLoginDetails();
	currentUser.privilege = 0;
	while (currentUser.privilege == 0) {
		
		model->SetUser(&currentUser);
		view->displayUser(&currentUser);
		
	}
	Node* currentProject = model->readAllProjects();

	view->displayProject(currentProject);

	cout << "Here";

	while (true){}
}

string Controller::getData(string data)
{
	return data;
}


Controller::~Controller()
{
}
