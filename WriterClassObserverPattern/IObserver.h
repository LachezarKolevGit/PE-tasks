#pragma once
class IObserver {

public:
	virtual ~IObserver() {};
	virtual void ReceiveMessage()=0;
	


};