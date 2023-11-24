#include <iostream>
using namespace std;
class Wood
{
    public:
        int length;
        int width;
        int price;
        string color;
        string name;

};

int main()
{
    
    
}

/*

Create a class for an electricity board that charges the following rates to users
a) For first 100 units: 40p per unit
b) For next 200 units: 50p per unit
c) Beyond 300 units: 60p per unit
All users are charged a minimum of Rs.500. If the total cost is more than Rs.250.00 then an additional charges of 15% are added. Write a C++ program that used electricity board class created above and reads the names of users & number of units consumed. It also prints out the charges with names. 


// Task_1_main.cpp

#include "Task_1_Header.h"
#include <iostream>
using namespace std;

int main()
{

    cout << "Enter name of user " << i+1 << ": " << endl;
    string name;
    cin >> name;
    
    ElectricityBoard eb(name);
    int totalUnits = 0, billAmount = 0;

    while (true){
        cout << "Enter number of units consumed by "<< name <<": ";
        cin >> totalUnits;
        if (totalUnits == -1) break; //-1 is used as exit command
        billAmount += eb.calculateBill(totalUnits);
    }
    cout << "Total amount paid by " << name << " is : " << billAmount << endl;

return 0;
}

// Task_1_class.cpp

class ElectricityBoard {
    constructor() {}
    
    calculateCost(units){
        let cost = 0;
        if (units <= 100) {
            cost += units * 0.4;
            } else if (units > 100 && units <= 300) {
                cost += 100 * 0.4 + (units - 100) * 0.5;
                } else {
                    cost += 100 * 0.4 + 200 * 0.5 + (units - 3
                    00) * 0.6;
                }
        return cost;
    }
    }

let eb = new ElectricityBoard();
console.log("The total cost is " + eb.calculateCost(70));



#include "Task_1_Header.h"
#include <iostream>
using namespace std;

class electricity
{
    public:
	double rateA,rateB,rateC;
};

int main()
{
	electricity e;
    e.rateA=0.4;
	e.rateB=0.5;
    e.rateC=0.6;
	cout<<"Enter number of units consumed : ";
	int n;
    cin>>n;
	if(n<=100)
    {
        cout<<"Total Cost="<<n*e.rateA;
        }
        else if(n>100&&n<=300)
        {
            cout<<"Total Cost="<<100*e.rateA+(n-100)*e.rateB;
            }
            else
            {
                cout<<"Total Cost="<<100*e.rateA+200*e.rateB+(n-30)*e.rateC;
            }

};

// Task_1_Header.h

class electricity
{
    public:
    int charge(int units);
};

// Function to calculate the total cost of electricity
int electricity::charge(int units) {
    
    // Calculate the cost for first 100 units
    if (units <= 100){
        return 40 * units;
    }
    else {
        
        // Calculate the cost for next 200 units
        if ((units > 100) && (units <= 300)){
            return 40 * 100 + 50 * (units - 100);
        }
        else {
            
            // Calculate the cost beyond 300 units
            return 40 * 100 + 50 * 200 + 60 * (units - 3
            );
        }
    }
    
};

*/