#include "ConsoleWriter.h"

void ConsoleWriter::write(const std::string& data) {
	std::cout << "Printing string on console";
	std::cout << "\n"<<data<<"\n";



}
ConsoleWriter::ConsoleWriter(UserInputHandler* userInputHandler):userInputHandler_(userInputHandler) {
	
	this->userInputHandler_->Attach(this);


}
