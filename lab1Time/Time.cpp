#include "Time.h"


Time::Time() {
	std::cout << "Using default construcor" << std::endl;
	std::cout << "Enter hours" << std::endl;
	std::cin >> hours;
	while (hours > 23 || hours < 0)
	{
		std::cout << "Invalid hours entered, please enter new value for hours" << "\n";
		std::cin >> hours;
	}
	std::cout << "Enter minutes" << std::endl;
	std::cin >> minutes;
	while (minutes > 60 || minutes < 0)
	{
		std::cout << "Invalid minutes entered, please enter new value for minutes" << "\n";
		std::cin >> minutes;
	}
	std::cout << "Enter seconds" << std::endl;
	std::cin >> seconds;
	while (seconds > 60 || seconds < 0)
	{
		std::cout << "Invalid seconds entered, please enter new value for seconds" << "\n";
		std::cin >> seconds;
	}


}

void Time::printTime() {
	int convertHour;
	std::cout << "Which mode would you like to use to print the time" << std::endl;
	int choice;
	std::cout<<"Select 1 for 24 hour standart or 2 for AM/PM standart"<<"\n";
	std::cin >> choice;
	if (choice == 1) {
		std::cout << "Time is: " << hours<<":" << minutes<<":" << seconds;
	}
	else if (choice == 2) {
	

		if (hours>12)
		{
			convertHour = hours - 12;
			std::cout << "Time is " << convertHour << ":" << minutes << ":" << seconds <<"PM"<< "\n";
		}
		else				
		std::cout << "Time is " << hours << ":" << minutes << ":" << seconds << "AM" << "\n";

	}
	else
	{
		std::cout << "Invalid mode selected"<<"\n";
	}




}
