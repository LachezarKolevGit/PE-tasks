#pragma once
#include "Cat.h"

class OrdinaryCat:public Cat {
public:
	OrdinaryCat(std::string, enum gender);
	std::string print() const override;








};
