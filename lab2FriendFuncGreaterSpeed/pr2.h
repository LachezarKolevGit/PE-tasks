#pragma once
class pr1;
class pr2 {
private:
	int printing;
public:
	pr2();
	void setPrint(int);
	friend bool inUse(pr1 ,pr2 );
};