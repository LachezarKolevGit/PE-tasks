#include "Movie.h"

Movie::Movie(int movieRating, std::string format, std::string title):Item("Movie",format,title) {
	rating = movieRating;



}
Movie::~Movie() {
	std::cout << "Movie destructor"<<std::endl;

}
void Movie::playOnDVD() {
	std::cout << "PLaying on DVD" << std::endl;
}
void Movie::playOnVideo() {
	std::cout << "PLaying on Video" << std::endl;
}
int Movie::getRating() {
	return rating;

}