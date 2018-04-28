#include "stdafx.h"
#include "linkedList.h"
#include <iostream>
#include <string>

using namespace std;

void strToList(string fromFile) {
	std::string code = fromFile;
	std::string split = "$,$";//this is what will devide each item in the string so the computer knows each word

	size_t pos = 0;
	//std::string token;

	//find all of the commas
	while ((pos = code.find(split)) != std::string::npos) {

		string temp(code, 0, pos);
		std::cout << temp << std::endl;
		code.erase(0, pos + split.length());
		//save each into the node right now there is only data in node

	}
}


string listToStr() {
	//read data from node
	string new = "";

	new.append(//add first data from node)
	);
	new.append("$,$");
	//loop how ever many strings make up node



}