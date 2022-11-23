#pragma once
#include "Item.h"
class Music:public Item {
private:
	std::string artist;
public:
	Music(std::string, std::string, std::string);
	~Music();
	std::string getArtist();
	void playOnCD();


};