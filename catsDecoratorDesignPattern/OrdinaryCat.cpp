#include "OrdinaryCat.h"

OrdinaryCat::OrdinaryCat(std:: string catName,enum gender catGender):Cat(catName,catGender) {

	/*std::cout <<"\nEnter ordinary cat's name" <<std::endl;
	std::cin >> catName;
	std::cout << "Enter ordinary cat's gender" << std::endl;*/
	mCatGender = catGender;
}
std::string OrdinaryCat::print() const {

	std::string stringCatGender;
	switch (mCatGender)
	{
	case Male:
		stringCatGender ="Male";
		break;
	case Female:
		stringCatGender = "Female";
		break;
	default:
		break;
	}
	return "i am a cat, my name is " + mName + " and my gender is " + stringCatGender;


}