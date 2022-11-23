#include "Music.h"
Music::Music(std::string artistName,std::string mediaFormat, std::string title):Item("Music",mediaFormat,title) {

	artist = artistName;


}
Music::~Music() {
	std::cout << "class Music's destructor"<<std::endl;
}
std::string Music::getArtist() {
	return artist;

}
void Music::playOnCD() {
	std::cout << "PLaying on CD" << std::endl;
}