#pragma once
class pr2;
class pr1 {
private:
	int printing;



public:
	pr1();
	 void setPrint(int);
	 friend bool inUse(pr1 ,pr2 );


};