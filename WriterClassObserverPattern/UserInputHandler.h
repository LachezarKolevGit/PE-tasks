#pragma once
#include <iostream>
#include "ISubject.h"
#include "Writer.h"
#include <list>
#include <string>
class UserInputHandler:public ISubject {
private:
	std::list<Writer*> list;
	std::string userInput;

public:
	void takeUserInput();
	
	void Attach(Writer *writer) override;
	void Detach(Writer *writer) override;
	void Notify() override;
	




};