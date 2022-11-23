#include "Stack.h"
#include <iostream>
void fillStackWithAlphabet(Stack &stack,int upper) {
	char uppercaseLetter = 'A';
	char lowerCaseLetter = 'a';
	if (upper==1)
	{
		while (uppercaseLetter<='Z')
		{
			stack.push(uppercaseLetter);
			uppercaseLetter++;
		}
		return;
	}
	while (lowerCaseLetter<='z')
	{
		stack.push(lowerCaseLetter);
		lowerCaseLetter++;
	}



}
void swapValues(int &a,int &b) {
	a = a +b;
	b = a - b;
	a = a - b;

}


int main() {
	Stack stackDS;
	stackDS.printStack();
	stackDS.push('A');
	stackDS.printStack();
	stackDS.push('B');
	stackDS.printStack();
	stackDS.pop();
	stackDS.printStack();

	Stack anotherStack;
	fillStackWithAlphabet(anotherStack,1);
	anotherStack.printStack();
	int a = 5;
	int b = 10;
	swapValues(a, b);
	std::cout << a <<"||"<< b << std::endl;
	return 0;
}