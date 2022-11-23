#pragma once
#include "Writer.h"
#include "UserInputHandler.h"
class FileWriter :public Writer{
private:
	UserInputHandler* userInputHandler_;
public:
	void write(const std::string &message) override;

	FileWriter(UserInputHandler* );


};
