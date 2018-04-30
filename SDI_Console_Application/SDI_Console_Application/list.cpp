#include "stdafx.h"
#include "list.h"
#include <iostream>



List::~List(void) {
	Node* currNode = head, *nextNode = NULL;
	while (currNode != NULL) {
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

Node* List::InsertNode(int index, Project data) {

	if (index < 0) {
		return NULL;
	}
	Node* newNode = new Node;
	Node* nextNode;
	newNode->data = data;

	if (index == 0) {
		newNode->next = head;
		newNode->prev = NULL;
		head = newNode;
		tail = newNode;

		return head,tail;
	}
	int currIndex = 1;
	Node* currNode = head;
	while (currNode && index > currIndex) {
		currNode = currNode->next;
		currIndex++;
	}
	if (index > 0 && currNode == NULL) {
		return NULL;
	}


	else {
		nextNode = currNode->next;
		newNode->next = currNode->next;
		newNode->prev = currNode;
		
		
		if (currNode->next == NULL){
			tail = newNode;
		}
		else {
			nextNode->prev = newNode;
		}
		currNode->next = newNode;
		
	}
	return currNode,tail,nextNode;

}


int List::FindNode(Project data) {
	Node* currNode = head;
	int currIndex = 1;
	while (currNode && currNode->data.id != data.id) {
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode) {
		return currIndex;
	}
	return 0;
}

int List::DeleteNode(Project data) {
	Node* prevNode = NULL;
	Node* currNode = head;
	Node* nextNode;
	int currIndex = 1;
	while (currNode && currNode->data.id != data.id) {
		prevNode = currNode;
		currNode = currNode->next;
	}
	if (currNode) {
		if (prevNode) {
			prevNode->next = currNode->next;
			nextNode = currNode->next;
			nextNode->prev = prevNode;
			delete currNode;
		}
		else {
			head = currNode->next;
			nextNode = currNode->next;
			nextNode->prev = NULL;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}

void List::DisplayList() {
	int num = 0;
	Node* currNode = head;
	Node* end = tail;
	while (currNode != NULL) {
		std::cout << currNode->data.title << std::endl;
		currNode = currNode->next;
		num++;
	}
	std::cout << "Number of nodes in the list: " << num << std::endl;

	std::cout << "\nlist backwards: " << num << std::endl;
	
	while (end != NULL) {
		std::cout << end->data.title << std::endl;
		end = end->prev;
		
	}
	
}

Project List::GetNodeData(int node)
{
	//Gets data for node from index
	Node* currNode = head;
	int curIndex = 1;
	while (currNode && curIndex != node) {
		currNode = currNode->next;
		curIndex++;
	}
	if (currNode) {
		return currNode->data;
	}
	Project empty;
	return empty;
}

int List::GetListLength()
{
	//Returns length of the current list
	Node* currNode = head;
	int curIndex = 1;
	while (currNode) {
		currNode = currNode->next;
		curIndex++;
	}
	return curIndex;
}

void List::UpdateData(int index, Project newProject)
{
	Node* currNode = head;
	int curIndex = 1;
	while (currNode && curIndex != index) {
		currNode = currNode->next;
		curIndex++;
	}
	if (currNode) {
		currNode->data = newProject;
	}
}

Node* List::GetNode(int index)
{
	//Gets a node based on the index
	Node* currNode = head;
	int curIndex = 1;
	while (currNode && curIndex != index) {
		currNode = currNode->next;
		curIndex++;
	}

	return currNode;
}