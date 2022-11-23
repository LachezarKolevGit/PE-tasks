#pragma once
#include <iostream>
#include <vector>
const int SIZE=10;
using String = std::string;
class Worker {
	
private:
	String id;
	String name;
	int age;
	int workingExpirience;
	String currentJob;
	std::vector<int> salaryList;

	

public:
	Worker();
	Worker(String);														
int calcAverageSalary();
int calcMinSalary();

String getId();
String getName();
int getAge();
int getWorkingExpirience();
String getCurrentJob();
std::vector<int> getListOfSalaries();
void setId(String);
void setName(String);
void setAge(int);
void setWorkingExpirience(int);
void setCurrentJob(String);
void setListOfSalaries(std::vector<int> list);
};