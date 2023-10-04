/*
Write a program that prompts the user to enter a month (1-12) and displays the corresponding season based on the following conditions:

For months 1, 2, and 3, display "Winter."
For months 4, 5, and 6, display "Spring."
For months 7, 8, and 9, display "Summer."
For months 10, 11, and 12, display "Fall."
*/

#include <iostream>
using namespace std;
int main()
{
    int i;

    cout << "Enter a month (1-12): " << endl;
    cin >> i;

    if (i == 1 || i == 2 || i == 3)
    {
        cout << "Entered month is of Winter season." << endl;
    }

    else if (i == 4 || i == 5 || i == 6)
    {
        cout << "Entered month is of Spring season." << endl;
    }

    else if (i == 7 || i == 8 || i == 9)
    {
        cout << "Entered month is of Summer season." << endl;
    }

    else if (i == 10 || i == 11 || i == 12)
    {
        cout << "Entered month is of Fall season." << endl;
    }

    else
    {
        cout << "Enter a valid month number." << endl;
    }
return 0;
}