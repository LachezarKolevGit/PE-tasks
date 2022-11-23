#pragma once
#include <iostream>
enum gender
{
	Male, Female
};
class Cat {
protected:
	enum gender mCatGender;
	std::string mName;
public:
	Cat(std::string ,enum gender);
	Cat();
	virtual ~Cat() {};   
	virtual std::string print() const =0;
};

