#pragma once
class Car;
class Truck {

private:

	int weight;
	int speed;


public:
	Truck(int ,int);
	friend int sp_greater(Car ,Truck);
	int getSpeed();
	friend void calcTravelTime(Car ,int , Truck);



};
