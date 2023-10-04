/*
Write a program that takes a user's input for their age and displays a message based on the following conditions:

If the age is less than 18, display "You are a minor."
If the age is between 18 and 65 (inclusive), display "You are an adult."
If the age is greater than 65, display "You are a senior citizen."
*/

#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age: " << endl;
    cin >> age;

    if (age >=0 && age <= 18)
    {
        cout << "You are a minor." << endl;
    }

    else if (age > 18 && age < 65)
    {
        cout << "You are an adult." << endl;
    }

    else if (age >= 65)
    {
        cout << "You are a senior citizen." << endl;
    }

    else
    {
        cout << "Enter a valid age number." << endl;
    }
    
return 0;
}