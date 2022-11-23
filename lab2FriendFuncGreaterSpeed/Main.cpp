#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "pr1.h"
#include "pr2.h"

int sp_greater(Car  car,Truck truck) {
	
	return car.speed - truck.speed;
}
void calcTravelTime(Car car, int distance, Truck truck) {
	
	std::cout <<"The time you will be traveling with a car is: "<<distance/ car.speed<<std::endl ;
	std::cout << "The time you will be traveling with a car is: " << distance / truck.speed << std::endl;

	
}
bool inUse(pr1 user1,pr2 user2) {

	if (user1.printing==1 || user2.printing==1)
	{
		return true;
	}
	return false;
}

int main() {


	Car audi(4,220);
	Truck ford(6,160);

	std::cout << "Car speed: "<<audi.getSpeed()<<std::endl;
	std::cout << "Truck speed: " << ford.getSpeed()<<std::endl;
	
	int result = sp_greater(audi, ford);
	if (result > 0)
		std::cout <<"Car is faster" ;
	if (result < 0)
		std::cout << "Truck is faster";
	else if (result == 0) {
		std::cout << "They have the same speed";
	}


	calcTravelTime(audi,500,ford);

	bool inUseBool;
	pr1 user1;
	pr2 user2;
	inUseBool=inUse(user1,user2);
	std::cout << "inUse result is :" << inUseBool << std::endl;
	user1.setPrint(1);
	inUseBool = inUse(user1, user2);
	std::cout << "inUse result is :" << inUseBool << std::endl;










	return 0;

}