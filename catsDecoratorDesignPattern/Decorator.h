#pragma once
#include "Cat.h"

class Decorator :public Cat {
protected:
	Cat* pCat;

public:
	Decorator(Cat* catPointer);
	std::string print() const override;







};