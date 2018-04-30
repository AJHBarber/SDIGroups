
#pragma once

#include <string>
#include <vector>
#include <sstream>

using namespace std;

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
