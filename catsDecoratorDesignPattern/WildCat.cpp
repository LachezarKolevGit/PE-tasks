#include "WildCat.h"

WildCat::WildCat(enum wildCatBreed mBreed, Cat* catPointer) : Decorator(catPointer) {

	this->mBreed = mBreed;
}
std::string WildCat::print() const {
	std::string breed;
	switch (mBreed)
	{
	case European:
		breed = "European";
		break;
	case Caucasian:
		breed = "Caucasian";
		break;
	case African:
		breed = "African";
		break;
	case SouthernAfrican:
		breed = "SouthernAfrican";
		break;
	case Asiatic:
		breed = "Asiatic";
		break;
	default:
		break;
	}


	return "My breed is " + breed + " and I am a wild cat(" + Decorator::print() + ")";






}
