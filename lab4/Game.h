#pragma once
#include "Item.h"
	enum difficultyOption
	{
		easy,
		normal,
		hard,
		expert
	};
class Game :public Item{
private:
	enum  difficultyOption difficulty;
	
public:
	Game(enum difficultyOption, std::string , std::string );

	~Game();
	enum difficultyOption getDifficultyLevel();
	std::string getEquipment();
	void playOnCD();
	void playOnVideo();

};