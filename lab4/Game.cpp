#include "Game.h"



Game::Game(enum difficultyOption d, std::string mediaType, std::string title) :Item("Game", mediaType, title) {
	
	difficulty = d;
	
	

}
Game::~Game() {
	std::cout << "Destructor of game"<<"\n";
}
void Game::playOnCD() {
	std::cout << "PLaying on CD" << std::endl;
}
void Game::playOnVideo() {
	std::cout << "PLaying on Video" << std::endl;
}
std::string Game::getEquipment() {
	return "Long sword";
}
enum difficultyOption Game::getDifficultyLevel() {
	return difficulty;
	
}


