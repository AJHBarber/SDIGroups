// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stack.h"
#include <iostream>


Stack::~Stack(void) {
	Node* currNode = head, *nextNode = NULL;
	while (currNode != NULL) {
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

Node* Stack::Push(double x) {

	Node* newNode = new Node;
	newNode->data = x;
	newNode->next = head;
	head = newNode;

	return newNode;

}


int Stack::FindNode(double x) {
	Node* currNode = head;
	int currIndex = 1;
	while (currNode && currNode->data != x) {
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode) {
		return currIndex;
	}
	return 0;
}

int Stack::Pop() {
	if (head == NULL) {//empty
		return 0;
	}
	Node* temp = head;
	head = temp->next;
	delete temp;
	return 0;
}

void Stack::DisplaList() {
	int num = 0;
	Node* currNode = head;
	while (currNode != NULL) {
		std::cout << currNode->data << std::endl;
		currNode = currNode->next;
		num++;
	}
	std::cout << "Number of nodes in the list: " << num << std::endl;

}

