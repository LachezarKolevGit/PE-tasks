#include "Worker.h"
using String = std::string;
int main() {
	String currentJob="Worker";
	Worker worker1(currentJob);
	std::vector<int> list;
	list= worker1.getListOfSalaries();
	std::cout<<"Printing list"<<std::endl;
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i]<<",";
	}
	int average = worker1.calcAverageSalary();
	std::cout << "Printing average salary:" << average<<std::endl;
	int min = worker1.calcMinSalary();
	std::cout << "Printing min salary:" << min;

	return 0;
}