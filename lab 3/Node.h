/*
   Name: Josh Ewalt
   Semester: 2
   Due: 02/17/2021
   Assignment: Lab 3 (Stack)
   Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure.
   This stack must be implemented as a linked structure (ie using pointers).
*/
#pragma once
#include "ItemType.h"
class Node {
private:
	ItemType value;
	Node* next;
public:
	ItemType getValue() { return value; }
	//Pre:
	//Post: Returns the value this node holds

	void setValue(ItemType newItem) { value = newItem; }
	//Pre:  An ItemType to set this Node's value
	//Post: Sets this node's value to the ItemType

	Node* getNext() { return next; }
	//Pre:
	//Post: Returns the next item on the stack

	void setNext(Node* newNext) { next = newNext; }
	//Pre:  A node to set as the next node to this one
	//Post: Sets the next node to the one given
};