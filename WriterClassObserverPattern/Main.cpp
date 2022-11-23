#include "ConsoleWriter.h"
#include "FileWriter.h"
#include "UserInputHandler.h"




int main() {

	UserInputHandler* user = new UserInputHandler();
	
	Writer* consoleWriter = new ConsoleWriter(user);
	
	Writer* fileWriter = new FileWriter(user);

	

	user->Attach(consoleWriter);
	
	user->takeUserInput();
	user->Notify();

	delete consoleWriter;
	delete fileWriter;
	delete user;




	return 0;
}