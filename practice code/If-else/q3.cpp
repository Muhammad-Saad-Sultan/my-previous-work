/*
Write a program that prompts the user to enter their grade (A, B, C, D, or F) and displays a corresponding message based on the following conditions:

For A and B grades, display "Excellent!"
For C grades, display "Good job!"
For D grades, display "You can do better."
For F grades, display "You need to study harder."
*/

#include <iostream>
using namespace std;
int main()
{
    char grade;

    cout << "Enter your grade: " << endl;
    cin >> grade;

    if (grade == 'A' || grade == 'B')
    {
        cout << "Excellent" << endl;
    }

    else if (grade == 'C')
    {
        cout << "Good job!" << endl;
    }

    else if (grade == 'D')
    {
        cout << "You can do better." << endl;
    }

    else if (grade == 'F')
    {
        cout << "You need to study harder." << endl;
    }

    else
    {
        cout << "Enter a valid grade." << endl;
    }

return 0;
}