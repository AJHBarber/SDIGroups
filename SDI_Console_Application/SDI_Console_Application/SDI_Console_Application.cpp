// SDI_Console_Application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Model.h"
#include "Controller.h"
#include "View.h"

int main()
{
	View view = View();
	
	
	Model model = Model();


	Controller controller = Controller(&model, &view);




    return 0;
}

