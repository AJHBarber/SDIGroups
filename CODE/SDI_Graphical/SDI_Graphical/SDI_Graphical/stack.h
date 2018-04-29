#pragma once
//header for linked list need to adapt for projects/ possable add stack for items like box office revenue
#ifndef _LIST_H
#define _LIST_H

#include <iostream>

class Node {
public:
	double data;
	Node* next;

};

class Stack {
public:
	Stack(void) { head = NULL; }			//constructor
	~Stack(void);						    //destructor
	bool IsEmpty() { return head == NULL; }
	Node* Push(double x);
	int Pop();
	int FindNode(double x);
	void DisplaList(void);

private:
	Node * head;
};

#endif 