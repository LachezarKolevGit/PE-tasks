#pragma once
#include "Item.h"

class Movie:public Item{
private:
	int rating;
public:
	Movie(int, std::string,std::string);
	~Movie();
	
	int getRating();
	void playOnVideo();
	void playOnDVD();
};