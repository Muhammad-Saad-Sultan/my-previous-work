/* Write a program that takes a user's input for a number and determines whether it is a prime number or not. Use a loop and if-else statements to check for divisibility. */
#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (n > 0)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number." << endl;
                return 0;
            }
        }
    
        cout << n << " is a prime number." << endl;
        return 0;
    }
    
    else
    {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
return 0;
}