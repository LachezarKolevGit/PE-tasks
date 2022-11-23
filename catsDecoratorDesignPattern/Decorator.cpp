#include "Decorator.h"
Decorator::Decorator(Cat* catPointer) :pCat(catPointer){





}
std::string Decorator::print() const {
	return this->pCat->print();

}

	

