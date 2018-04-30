#pragma once

#include "stdafx.h"
#include <vector>
#include <string>
#include "project.h"
#include "LinkedList.h"
#include <iostream>



List::~List(void) {
	Node* currNode = head, *nextNode = NULL;
	while (currNode != NULL) {
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

Node* List::InsertNode(int index, Project newProject) {

	if (index < 0) {
		return NULL;
	}
	Node* newNode = new Node;
	newNode->project = newProject;

	if (index == 0) {
		newNode->next = head;
		head = newNode;
		return head;
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
		newNode->next = currNode->next;
		currNode->next = newNode;
	}

}


int List::FindNode(Project project) {
	Node* currNode = head;
	int currIndex = 1;
	while (currNode && currNode->project.title != project.title) {
		currNode = currNode->next;
		currIndex++;
	}
	if (currNode) {
		return currIndex;
	}
	return 0;
}

int List::DeleteNode(Project project) {
	Node* prevNode = NULL;
	Node* currNode = head;
	int currIndex = 1;
	while (currNode && currNode->data.title != data.title) {
		prevNode = currNode;
		currNode = currNode->next;
	}
	if (currNode) {
		if (prevNode) {
			prevNode->next = currNode->next;
			delete currNode;
		}
		else {
			head = currNode->next;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}

void List::DisplayList() {
	int num = 0;
	Node* currNode = head;
	while (currNode != NULL) {
		//std::cout << currNode->project.title; << std::endl;
		currNode = currNode->next;
		num++;
	}
	std::cout << "Number of nodes in the list: " << num << std::endl;

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
		return currNode->project;
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
		currNode->project = newProject;
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