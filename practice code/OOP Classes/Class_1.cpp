#include "Header.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	Name = nullptr;
	Salary = 0;
}

Employee::Employee(char* N, int S)
{
	int count = 0;

	for (int i = 0; N[i] != '\0'; i++)
	{
		count++;
	}
	count += 2;
	
	int i;

	Name = new char [count];
	
	for ( i = 0; N[i] != '\0'; i++)
	{
		Name[i] = N[i];
	}
	
	Name[i] = '\0';
	
	Salary = S;
}

Employee Employee :: operator+ (Employee& E)
{
	Employee temp;

	temp.Name = E.Name;
	temp.Salary = Salary + E.Salary;

return temp;
}

void Employee::Display()
{
	cout << "Name is: " << Name << endl;
	cout << "Salary is: " << Salary << endl;
}