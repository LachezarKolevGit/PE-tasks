#include "Worker.h"


Worker::Worker() {
	std::cout << "Initializing id and work expirience" << "\n";
	workingExpirience = 0;
	id ="" ; //might cause an error here
	std::cout << "Enter your age:" << std::endl;
	
	std::cin >> age;
	std::cout << "Enter you name:" << std::endl;
	std::cin >> name;
	std::cout << "Enter list of salaries" << std::endl;
	std::cout << "If you are done with your list of salaries enter: -1" << std::endl;
	int i = 0;
	int salary;
	salaryList.reserve(50);
	while (i<50)
	{
		
		std::cin >> salary;
		if (salary == -1) {
			break;
		}
		salaryList.push_back(salary);
		
		i++;
	}

		
}

Worker::Worker(String jobInput):Worker() {
	std::cout << "Enter your current job" << std::endl;
	std::cin >> jobInput;
	currentJob = jobInput;
	std::cout <<"Job saved" << "\n";
	


}



String Worker:: getId() {
	return id;
}

String Worker::getName() {
	return name;
}

int Worker::getAge() {
	return age;
}

int Worker::getWorkingExpirience() {
	return workingExpirience;
}
String Worker::getCurrentJob() {
	return currentJob;
}
void Worker::setId(String inputId) {
	id=inputId;
}
void Worker::setName(String inputName) {
	name = inputName;
}
void Worker::setAge(int inputAge) {
	age = age;
}
void Worker::setWorkingExpirience(int expirience) {
	workingExpirience = expirience;
}
void Worker::setCurrentJob(String job) {
	currentJob = job;
}
int Worker::calcAverageSalary() {
	int averageSalary = 0;
	int i = 0;
	int sum=0;
	while (i<salaryList.size())
	{
		sum += salaryList[i];

		i++;
	}
	return sum / salaryList.size();
}
int Worker::calcMinSalary() {
	int min = salaryList[0];
	int i= 0;
	while (i<salaryList.size())
	{
		if (min > salaryList[i])
			min = salaryList[i];
			
	
		i++;
	}

	return min;

}
std::vector<int> Worker::getListOfSalaries() {
	return salaryList;  //shouldn't that be a pointer ??? or smt like that

}
void Worker::setListOfSalaries(std::vector<int> list) {
	salaryList = list;

}