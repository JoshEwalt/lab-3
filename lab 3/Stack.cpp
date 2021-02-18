/*
   Name: Josh Ewalt
   Semester: 2
   Due: 02/17/2021
   Assignment: Lab 3 (Stack)
   Description:  A stack is an abstract data type in which elements are added and removed from only one end; a “last in, first out” structure.
   This stack must be implemented as a linked structure (ie using pointers).
*/
#include "Stack.h"

bool Stack::IsEmpty() {
	return top == NULL;
}
ItemType Stack::Top() {
	return top->getValue();
}
bool Stack::IsFull() {
	Node* location;
	try {
		location = new Node();
		delete location;
		return false;
	}
	catch (bad_alloc exception) {
		return true;
	}
}
Stack::~Stack() {
	while (IsEmpty() == false) {
		Pop();
	}
}
void Stack::Push(ItemType item) {
	if (IsFull()) {
		return;
	}
	Node* newTopNode = new Node();
	newTopNode->setValue(item);
	if (IsEmpty()) {
		top = newTopNode;
	}
	else {
		newTopNode->setNext(top);
		top = newTopNode;
	}
}
void Stack::Show() {
	Node* currentItem = top;
	while (currentItem != NULL) {
		cout << currentItem->getValue().getValue() << " ";
		currentItem = currentItem->getNext();
	}
	cout << endl;
}
void Stack::Pop() {
	Node* newTop;
	newTop = top->getNext();
	delete top;
	top = newTop;
}