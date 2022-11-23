#include "PureBredCat.h"


PureBredCat::PureBredCat(enum domesticCatsBreeds mCatBreed,Cat* catPointer ):Decorator(catPointer) {
	
	mBreed = mCatBreed;

}
std::string PureBredCat::print() const {
	std::string breed;
	switch (mBreed)
	{
	case Aegean:
		breed = "Aegean";
		break;
	case BritishLonghair:
		breed = "BritishLonghair";
		break;
	case BritishShorthair:
		breed = "BritishShorthair";
		break;
	case Sphynx:
		breed = "Sphynx";
		break;
	case Foldex:
		breed = "Foldex";
		break;
	default:
		break;
	}




	return "My breed is "+breed+" and I am pure bred cat(" + Decorator::print() + ")";




}


