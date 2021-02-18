/*
   Name: Josh Ewalt
   Semester: 2
   Due: 02/17/2021
   Assignment: Lab 3 (Stack)
   Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure.
   This stack must be implemented as a linked structure (ie using pointers).
*/
#include <iostream>
#include "Stack.h"
using namespace std;
int main() {
	Stack myStack = Stack();
	cout << "Is the stack empty? " << myStack.IsEmpty() << endl;
	myStack.Show();
	myStack.Push(1);
	myStack.Show();
	myStack.Push(2);
	myStack.Show();
	myStack.Push(3);
	myStack.Show();
	myStack.Pop();
	myStack.Show();
	cout << "New top of the stack: " << myStack.Top().getValue() << endl;
	cout << "Is the stack full? " << myStack.IsFull() << endl;
	return 0;
}