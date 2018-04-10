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

class List {
public:
	List(void) { head = NULL; }			//constructor
	~List(void);						//destructor
	bool IsEmpty() { return head == NULL; }
	Node* InsertNode(int index, double x);
	int FindNode(double x);
	int DeleteNode(double x);
	void DisplaList(void);

private:
	Node * head;
};

#endif 