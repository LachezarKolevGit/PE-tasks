#define _CRT_SECURE_NO_WARNINGS
#include "Item.h"

Item::Item(std::string content,std::string mediaFormat, std::string title):contentType(content),mediaFormat(mediaFormat),title(title){
	
	
	
	time_t timeToday(0);
	time(&timeToday);
	timeOfPurchase = asctime(localtime(&timeToday));
	std::cout << "Purchase date saved "<<"\n";
	
	std::cout << "Enter item id";
	std::cin >> itemId;


	std::cout << "Enter number of items that are in stock ";
	std::cin >> numberOfItems;
	std::cout << "Enter price of item";
	std::cin >> price;

}
std::string Item::getContentType() {
	return contentType;
}
std::string Item::getPurchaseDate(){
return timeOfPurchase;
}
long Item::getItemId() {
	return itemId;
}
std::string Item::getMediaFormat(){
return mediaFormat;
}
int Item::getNumberOfItems() {
	return numberOfItems;
}
double Item::getPrice() {
	return price;
}
std::string Item::getTitle() {
	return title;
}
void Item::setItemId(long newId) {
	itemId = newId;

}
void Item::toString() {
	 std::cout << contentType << " with the title " << title << " was purchased at a price " 
		<< price << " on the date " << timeOfPurchase<<"."<<std::endl;


}