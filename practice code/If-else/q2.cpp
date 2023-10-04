/* Write a program that takes a user's input for a number and determines whether it is positive, negative, or zero. Display an appropriate message based on the conditions. */

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    if (num < 0)
    {
        cout << "The entered number is negative." << endl;
    }

    else if (num == 0)
    {
        cout << "The entered number is zero." << endl;
    }

    else if (num > 0)
    {
        cout << "The entered number is positive." << endl;
    }

    else
    {
        cout << "Enter a valid number." << endl;
    }

return 0;
}