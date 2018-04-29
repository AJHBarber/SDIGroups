
#pragma once
//header for linked list need to adapt for projects/ possable add stack for items like box office revenue
#ifndef _LIST_H
#define _LIST_H

#include <iostream>

class Node{
	public:
		Project project;
		Node* next;
};

class List {
	public:
		List(void) { head = NULL; }			//constructor
		~List(void);						//destructor
		bool IsEmpty() { return head == NULL; }
		Node* InsertNode(int index, Project newProject);
		int FindNode(Project project);
		int DeleteNode(Project project);
		void DisplayList(void);
		double GetNodeData(int node);
		int GetListLength();
		void UpdateData(int index, Project project);
		Node* GetNode(int index);

	private:
		Node * head;
};

#endif
