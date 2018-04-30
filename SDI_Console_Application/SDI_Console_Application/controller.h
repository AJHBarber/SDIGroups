#include "Model.h"
#include "View.h"
class Controller
{
public:
	Controller(Model* model, View* view);
	string getData(string data);
	
	
	~Controller();




private:
	Model* model;
	View* view;
};
