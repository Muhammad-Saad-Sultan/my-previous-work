/* Write a program that asks the user to enter two numbers and an operator (+, -, *, or /). Perform the corresponding arithmetic operation on the numbers and display the result. */

#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    char op;

    cout << "Enter the first number: " << endl;
    cin >> i;

    cout << "Enter the second number: " << endl;
    cin >> j;

    cout << "Enter the operator ( + , - , * , / ): " << endl;
    cin >> op;

    if (op == '+')
    {
        k = i + j;
        cout << "The sum of " << i << " and " << j << " is: " << k << endl;
    }

    else if (op == '-')
    {
        k = i - j;
        cout << "The difference of " << i << " and " << j << " is: " << k << endl;
    }

    else if (op == '*')
    {
        k = i * j;
        cout << "The product of " << i << " and " << j << " is: " << k << endl;
    }

    else if (op == '/')
    {
        k = i / j;
        cout << "The division of " << i << " and " << j << " is: " << k << endl;
    }

    else
    {
        cout << "Enter a valid operator." << endl;
    }
    
return 0;
}