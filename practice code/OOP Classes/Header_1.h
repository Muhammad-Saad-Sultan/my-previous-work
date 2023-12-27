#pragma once
#include <iostream>
using namespace std;

class Employee
{
private:
	char* Name;
	int Salary;


public:
	Employee();
	Employee(char*, int);
	Employee operator+ (Employee& E);
	
	void Display();

};