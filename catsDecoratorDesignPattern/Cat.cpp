#include "Cat.h"
Cat::Cat(std::string mName,enum gender mGender) {
	this->mName = mName;
   mCatGender=mGender;


}
Cat::Cat() {
	/*std::cout << "This is the default constructor" << "\n";
	std::cout << "Enter name" << std::endl;
	std::cin >> mName;
	std::cout << "Enter cat's gender.Enter 1 for Male and 2 for Female" << std::endl;
	int userInput=0;
	std::cin >> userInput;
	mCatGender = static_cast<gender>(userInput);
	*/
}


