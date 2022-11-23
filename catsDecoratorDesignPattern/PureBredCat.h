#pragma once
#include "Cat.h"
#include "Decorator.h"
enum domesticCatsBreeds {
	Aegean,
	BritishLonghair,
	BritishShorthair,
	Sphynx,
	Foldex


};


class PureBredCat:public Decorator {
private:
	enum domesticCatsBreeds mBreed;

public:
	PureBredCat(enum domesticCatsBreeds ,Cat* cat);
	std::string print() const override;







};
