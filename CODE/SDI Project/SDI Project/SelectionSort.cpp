

#include <String>
#include "LinkedList.h"

using namespace std;




List testList = List();


void SelectionSort(List _toSort) {

	int smallestValue;
	double temp;
	int i, j;
	List toSort = _toSort;
	Node* tempNode;
	Node* check;

	
	int length = toSort.GetListLength;

	if (length > 1) {
		for (i = 1; i < length - 1; i++)
		{
			tempNode = toSort.GetNode(i);

			for (j = i + 1; j < length; j++) {
				check = toSort.GetNode(j);
				if ( check->data < tempNode->data) {
					tempNode = check;
				}

			}
			

			
			
			//Copy old value into temporary variables
			temp = toSort.GetNodeData(i);
			j = toSort.FindNode(temp);

			//Update values of both nodes
			toSort.UpdateData(i, tempNode->data);
			toSort.UpdateData(j, temp);
			

			

		}
	}
	//Find Smallest,put it first,
	//Find next smallest, put it second, 
	//etc.



}