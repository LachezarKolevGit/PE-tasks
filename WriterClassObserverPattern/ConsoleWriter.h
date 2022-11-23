#pragma once
#include "Writer.h"
#include "UserInputHandler.h"
class ConsoleWriter :public Writer {
private :
	UserInputHandler* userInputHandler_;
	std::string receivedMessage;

public:
	void write(const std::string &message ) override;
	ConsoleWriter(UserInputHandler* userInputHandler);







};