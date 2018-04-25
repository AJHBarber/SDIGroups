#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int Read(string fromFile)
{
	ifstream file(fromFile);
	string str;
	string file_contents;
	while (getline(file, str))
	{
		file_contents += str;
		file_contents.push_back('\n');
	}
	cout << file_contents << endl;
	file.close();
	return 0;
}

void Write(string tofile)
{
	ifstream wfile(tofile);
	string data;
	while (!wfile.eof()) {
		getline(wfile, data);
		cout << data << "\n";
	}
	cin.get();
}
