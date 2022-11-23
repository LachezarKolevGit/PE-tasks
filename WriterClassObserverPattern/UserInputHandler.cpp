#include "UserInputHandler.h"

void UserInputHandler::takeUserInput() {

	std::string inputString="empty";
	std::string saveInput="empty";
	std::cout << "Please, enter your data"<<std::endl;

	 while (!(inputString.find("*") != std::string::npos)) {
		 saveInput = inputString;
		 std::getline(std::cin,inputString);
		
		
	}

	userInput = saveInput;

	


}
void UserInputHandler::Attach(Writer *writer) {

	std::list<Writer*>::iterator iterator =list.begin();
	while (iterator!=list.end())
	{
		if ((*iterator)==writer)
		{
			std::cout <<"Object is already subscribed !" ;
			return;
		}
		++iterator;
		
	}
	

	list.push_back(writer);



}
void UserInputHandler::Detach(Writer* writer) {

	std::list<Writer*>::iterator iterator=list.begin();
	while (iterator!=list.end())
	{
		if ((*iterator)==writer)
		{
			list.remove(writer);
			std::cout << "Object succesfully removed"<<std::endl;
		}

		++iterator;
	}
	std::cout << "Object is not present in the subscribers's list !" << std::endl;
	



}
void UserInputHandler::Notify() {
	
	
	for (std::list<Writer*>::iterator i = list.begin(); i != list.end(); i++) {
	
		
		(*i)->write(userInput);
	
	
	}




}