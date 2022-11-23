#include "Stack.h"
#include <cstdlib>
#include <iostream>
void const Stack::printStack() {
	struct Item* stackPointer=stackMainPointer;

	if (stackMainPointer==NULL)
	{
		std::cout << "Stack is empty"<<std::endl;
		return;
	}
	std::cout << "Printing Stack:" << "\n";
	while (stackPointer!=NULL)
	{
		std::cout << stackPointer->data<<", " << "\n";
		stackPointer = stackPointer->pointer;
	}







}
void Stack::push(char data) {
	struct Item* pointer=NULL;
	if (stackMainPointer==NULL)
	{
		stackMainPointer = (struct Item*)malloc(sizeof(struct Item));
		stackMainPointer->pointer = NULL;
		stackMainPointer->data = data;
	
	}
	else {
		pointer = (struct Item*)malloc(sizeof(struct Item));
		pointer->pointer = stackMainPointer;
		pointer->data = data;
		stackMainPointer = pointer;
	}



	



}
void Stack::pop(){

	if (stackMainPointer==NULL)
	{
		std::cout << "The stack is empty and there is nothing to be deleted" << std::endl;
	}
	struct Item* deletedItemPointer = stackMainPointer;
	stackMainPointer = stackMainPointer->pointer;
	deletedItemPointer->pointer = NULL;
	free(deletedItemPointer);



}
Stack::Stack() {
	stackMainPointer = NULL;
	//stackMainPointer = (struct Item*)malloc(sizeof(struct Item));



}
Stack::~Stack() {
	Item* p1;
	Item* p2;

	p1 = stackMainPointer;
	while (p1 != NULL)
	{
		p2 = p1;
		p1 = p1->pointer;
		p2->pointer = NULL;  //separates item from stack
		free(p2);
	}

}