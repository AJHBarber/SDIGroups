#pragma once

#include "list.h"
#include "project.h"


using namespace std;

List* SelectionSort(List* _toSort) {

	int smallestValue;
	Project temp;
	int i, j;
	List* toSort = _toSort;
	Node* tempNode;
	Node* check;


	int length = toSort->GetListLength();
	cout << "List length: " << length << endl;
	if (length > 1) {
		for (i = 1; i < length - 1; i++)
		{
			tempNode = toSort->GetNode(i);

			for (j = i + 1; j < length; j++) {
				check = toSort->GetNode(j);
				if (check->data.title < tempNode->data.title) {
					tempNode = check;
				}

			}

			//Copy old value into temporary variables
			temp = toSort->GetNodeData(i);
			j = toSort->FindNode(temp);
			cout << "Swapped value: " << temp.title << " and: " << tempNode->data.title << endl;
			//Update values of both nodes
			toSort->UpdateData(i, tempNode->data);
			toSort->UpdateData(j, temp);

			

		}
		
	}
	return toSort;
}