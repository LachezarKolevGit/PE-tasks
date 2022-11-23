#pragma once
#include "Cat.h"
#include "Decorator.h"
enum wildCatBreed {

	European ,
	Caucasian ,
	African ,
	SouthernAfrican ,
	Asiatic 

};


class WildCat: public Decorator {
private: 
	enum wildCatBreed mBreed;

public:
	WildCat(enum wildCatBreed wildCatBreed, Cat* catPointer);
	std::string print() const override;




};