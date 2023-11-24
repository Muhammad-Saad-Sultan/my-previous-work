#include "Task_1_Header.h"
#include <iostream>

using namespace std;

double UNIT_COST;
double Tax;

ElectricityBoard::ElectricityBoard() : userName(nullptr), unitsConsumed(0.0) {}

void ElectricityBoard::setDetails(const char* name, double units)
{
    // Determine the length of the name
    int length = 0;
    while (name[length] != '\0')
    {
        ++length;
    }

    // Allocate memory for userName
    userName = new char[length + 1];

    // Copy characters from name to userName
    for (int i = 0; i <= length; ++i)
    {
        userName[i] = name[i];
    }

    unitsConsumed = units;

    if (unitsConsumed >= 0 && unitsConsumed <= 100)
    {
        UNIT_COST = 40;
    }

    else if (unitsConsumed > 100 && unitsConsumed <= 200)
    {
        UNIT_COST = 50;
    }

    else if (unitsConsumed > 200)
    {
        UNIT_COST = 60;
    }

    else
    {
        cout << "Invalid number of units!" << endl;
        return;
    }

    // Calculate total cost
    totalCost = unitsConsumed * UNIT_COST;

    if (totalCost == 0 || totalCost <= 250)
    {
        totalCost += totalCost + 500;
    }

    else
    {
        totalCost = totalCost + 500;
        Tax = totalCost * 0.15;
        totalCost = totalCost + Tax;
    }

    cout << "Total Cost for user " << userName << ": Rs. " << totalCost << endl;
}

void ElectricityBoard::displayDetails()
{
    cout << "User: " << userName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Cost for user " << userName << ": Rs. " << totalCost << endl;
}

ElectricityBoard::~ElectricityBoard()
{
    delete[] userName;
}
