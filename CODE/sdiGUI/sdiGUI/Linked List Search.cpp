// Linked List Search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

struct node {
	int data;
	node* next;
};

void SearchRecursive(node* ptr, int searchValue);


int main()
{

	node* n = new node; // N points to the next node
	node* head = n;
	node* t = n;

	n->data = 1;

	for (int i = 2; i < 10; i++) {
		n = new node;
		n->data = i;
		t->next = n;
		t = n;
	}

	n->next = NULL;


	t = head;
	while (t !=NULL) {
		cout << t->data << " ";
		t = t->next;
	}

	cout << "\n\n";
	SearchRecursive(head, 4);
	SearchRecursive(head, 11);

	
	

	
	







    return 0;
}

void SearchRecursive(node* ptr, int searchValue) {
	if (ptr == NULL) {
		cout << searchValue << " was not found in the list\n";
	}
	else if (ptr->data == searchValue) {
		cout << searchValue << " is in the list\n";
	}
	else {
		SearchRecursive(ptr->next, searchValue);
	}
}
