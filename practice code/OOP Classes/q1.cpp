// C++ program to demonstrate accessing of data members
#include <iostream>
using namespace std;

class Car
{
	// Access Specifier

	public:
		// Data Members
		string type, brand, name, color;
		int model, seats, fuelcapacity, issuance, speedometer, price;

	// Member Functions()
	void printname()
	{
		cout << "This is a " << type << " car. It is of " <<  brand << " brand and its name is " << name << ". Its model is " << model << " and its color is " << color << ". It is a " << seats << "-seater car. Its date of issuance is " << issuance << ". It has a " << fuelcapacity << " litres fuel capacity. Its top speed is " << speedometer  << " Km per hour. Its Price is " << price  << " Lac."<< endl;
	}
};

int main()
{

	// Declare an object of class geeks
	int num = 3;
	Car obj[num];

	for (int i=0; i < num; i++)
	{
		cout << "Car: " << i+1 << endl;

		cout << "Type of Car: ";
		cin >> obj[i].type;

		cout << "Brand of Car: ";
		cin >> obj[i].brand;

		cout << "Name of Car: ";
		cin >> obj[i].name;

		cout << "Model of Car: ";
		cin >> obj[i].model;

		cout << "Color of Car: ";
		cin >> obj[i].color;

		cout << "Seats of Car: ";
		cin >> obj[i].seats;

		cout << "Issuance date of Car: ";
		cin >> obj[i].issuance;

		cout << "Fuel Capacity of Car: ";
		cin >> obj[i].fuelcapacity;

		cout << "Highest Speed of Car: ";
		cin >> obj[i].speedometer;

		cout << "Price of Car: ";
		cin >> obj[i].price;

		cout << endl;
	}

	// Accessing Member Functions
	for (int i=0; i < num; i++)
	{
		cout << "Car: " << i+1 << endl;

		obj[i].printname();

		cout << endl;
	}
	
return 0;
}