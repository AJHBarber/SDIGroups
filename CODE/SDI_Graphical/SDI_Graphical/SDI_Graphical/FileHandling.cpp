// #include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

#include "LinkedList.h"

using namespace std;

//return the head pointer after reading
Node* readFromFile(string fromFile)
{
	ifstream file(fromFile);
	int count = 0;
	double data;
	List *list = new List();

	while (file >> data)
	{
		cout << data << endl;
		list->InsertNode(count, data);
	}
	// cout << file_contents << endl;
	file.close();
	//either make head public or add method in list to get head 
	return list->head;
}

void Write(string tofile, Node *head)
{
	ofstream outfile;
	outfile.open(tofile);

	Node* currNode = head;
	while (currNode != NULL) {
		outfile << currNode->data << endl;
		currNode = currNode->next;
	}
}


