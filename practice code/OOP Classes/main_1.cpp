#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	char* N = new char [20] {};
	int S;

	cout << "Enter Name of the employee: ";
	cin.getline(N, 20);

	cout << "Enter salary of the employee: ";
	cin >> S;

	Employee E(N , S);

	cout << "enter name of the employee: ";
	cin.ignore();
	cin.getline(N, 20);

	Employee E1 (N , S);
	
	//E1 = Employee(N, S);

	//Employee sum(N , S);

	Employee sum = E + E1;

	sum.Display();



}