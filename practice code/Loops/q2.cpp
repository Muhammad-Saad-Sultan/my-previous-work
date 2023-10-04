/* Write a program that prompts the user to enter a number and prints the multiplication table for that number from 1 to 10 using a loop and if-else statements. */
/*
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Multiplication table of " << n << endl;
    
    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int i;
    
    cout << "Enter a number: " << endl;
    cin >> i;
    
    if (i == 0)
    {
        cout << "Multiplication of every number with zero is equal to zero." << endl;
    }

    else if (i < 0)
    {
        cout << "The multiplication of a negative number cannot be computed." << endl;
    }

    else 
    {
        cout << "Multiplication table of " << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

return 0;
}