/*
   Name: Josh Ewalt
   Semester: 2
   Due: 02/17/2021
   Assignment: Lab 3 (Stack)
   Description:  A stack is an abstract data type in which elements are added and removed from only one end; a �last in, first out� structure.
   This stack must be implemented as a linked structure (ie using pointers).
*/
#pragma once
#include "ItemType.h"
#include "Node.h"
#include <iostream>
using namespace std;
class Stack {
private:
	Node* top = NULL;
public:
	Stack() {}
	~Stack();
	bool IsEmpty();
	//Pre:
	//Post: Returns true if the stack is empty and false if it is not.

	ItemType Top();
	//Pre:
	//Post: Returns the top of the stack

	bool IsFull();
	//Pre:
	//Post: Returns true if the stack is full and false if it is not

	void Push(ItemType item);
	//Pre:  The item that will be at the top of the list
	//Post: Sets the top of the list to that item

	void Show();
	//Pre:
	//Post: Displays the stack's value to the screen

	void Pop();
	//Pre:
	//Post: Removes the top of the stack

};