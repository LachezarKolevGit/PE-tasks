#define _CRT_SECURE_NO_WARNINGS
#include "Item.h"
#include "Game.h"
int main() {


	Item firstItem("Film","mp4","Star Wars");
	firstItem.toString();
	

	Game witcher(easy,"exe","The witcher" );
	witcher.toString();

	return 0;

}