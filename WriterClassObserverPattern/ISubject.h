#pragma once
#include "Writer.h"
class ISubject {

public:
	virtual ~ISubject() {};
	virtual void Attach(Writer* writer)= 0;
	virtual void Detach(Writer* writer) = 0;
	virtual void Notify() = 0;
	
};