#pragma once
class Stack {

private:

	struct Item {
		char data;
		struct Item* pointer;
	};


	struct Item* stackMainPointer;


public:
	void push(char );
	void pop();
	
	void const printStack();

	Stack();
	~Stack();

};
