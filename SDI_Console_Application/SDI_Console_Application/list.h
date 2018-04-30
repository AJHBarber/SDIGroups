
#ifndef _LIST_H
#define _LIST_H

#include <iostream>
#include "project.h"

class Node {
public:
	
	Project data;
	Node* next;
	Node* prev;
};

class List {
public:
	List(void) { head = NULL; tail = NULL; }			//constructor
	~List(void);						//destructor
	bool IsEmpty() { return head == NULL; }
	Node* InsertNode(int index, Project data);
	int FindNode(Project data);
	int DeleteNode(Project data);
	void DisplayList(void);
	Node* GetNode(int index);
	Project GetNodeData(int node);
	int GetListLength();
	void UpdateData(int index, Project project);
	

private:
	Node * head;
	Node* tail;
};
extern List list;

#endif
