#pragma once
#include <iostream>
#include <chrono>


class Item {
private:
	const std::string contentType;
	
	std::string timeOfPurchase;
	 long itemId;
	const std::string mediaFormat;
	int numberOfItems;
	double price;
	const std::string title;
public :
	Item(std::string,std::string,std::string);
	std::string getContentType();
	std::string getPurchaseDate();
	long getItemId();
	std::string getMediaFormat();
	int getNumberOfItems();
	double getPrice();
	std::string getTitle();
	void setItemId(long);
	void toString();










};


