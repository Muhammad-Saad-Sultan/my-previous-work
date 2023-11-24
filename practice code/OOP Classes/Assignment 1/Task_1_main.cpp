#include "Task_1_Header.h"
#include <iostream>

using namespace std;

int main()
{
    int numberOfUsers;

    cout << "Enter the number of users: ";
    cin >> numberOfUsers;

    ElectricityBoard* users = new ElectricityBoard[numberOfUsers];

    for (int i = 0; i < numberOfUsers; ++i)
    {
        char name[50];

        cout << "Enter name for user " << i + 1 << ": ";
        cin >> name;

        double units;

        cout << "Enter units consumed for user " << i + 1 << ": ";
        cin >> units;

        users[i].setDetails(name, units);

        cout << endl;
    }

    cout << "\nDetails of Users:\n";

    for (int i = 0; i < numberOfUsers; ++i)
    {
        users[i].displayDetails();
        cout << endl;
    }

    delete[] users;

return 0;
}