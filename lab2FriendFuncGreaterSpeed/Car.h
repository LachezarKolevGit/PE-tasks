#pragma once
class Truck ;
 class Car {
	
public:
	Car(int, int);
	friend int sp_greater(Car, Truck);
	int getSpeed();
	friend void calcTravelTime(Car ,int ,Truck);

private:
	int passengers;
	int speed;





};
