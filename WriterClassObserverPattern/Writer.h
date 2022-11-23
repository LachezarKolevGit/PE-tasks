#pragma once
#include <iostream>
class Writer {

public:
	virtual ~Writer() {};
	virtual void write(const std::string &data)=0;




};
