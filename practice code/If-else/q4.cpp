/* Write a program that takes three numbers as input from the user and determines the largest number using if-else statements. Display the result. */

#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    cout << "Enter three numbers: " << endl;
    cin >> i;
    cin >> j;
    cin >> k;

    if (i > j && i > k)
    {
        cout << i << " is the largest number." << endl;
    }

    else if (j > i && j > k)
    {
        cout << j << " is the largest number." << endl;
    }

    else if (k > i && k > j)
    {
        cout << k << " is the largest number." << endl;
    }

    else
    {
        cout << "There is no largest number. All are equal." << endl;
    }

return 0;
}