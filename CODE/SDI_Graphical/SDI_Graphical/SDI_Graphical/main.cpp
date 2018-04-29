#include "stdafx.h"
#include "stack.h"

#include<iostream>

using namespace std;


int main()
{
	Stack stack;
	stack.Push(7.0);
	stack.Push(5.0);
	stack.Push(8.0);
	stack.DisplaList();
	stack.Pop();
	stack.DisplaList();
	cout << "Hello world!" << endl;
	while (true) {}
	return 0;
}
