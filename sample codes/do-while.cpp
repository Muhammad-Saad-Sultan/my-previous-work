#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char ch;
    char cha;
    int result;

    do
    {
        cout << "Enter first value: ";
        cin >> num1;

        cout << "Enter Second value: ";
        cin >> num2;

        cout << "Enter your choice (+, -, *, /): ";
        cin >> ch;

        if (ch == '+')
        {
            result = num1 + num2;
            cout << "Sum is: " << result << endl;
        }

        else if (ch == '-')
        {
            result = num1 - num2;
            cout << "Difference is: " << result << endl;
        }

        else if (ch == '*')
        {
            result = num1 * num2;
            cout << "Product is: " << result << endl;
        }

        else if (ch == '/')
        {
            result = num1 + num2;
            cout << "Division is: " << result << endl;
        }


        cout << "Enter your choice (Y / N): ";
        cin >> cha;

    } while (cha == 'Y' || cha == 'y');

    if (cha == 'N' || cha == 'n')
    {
        return 0;
    }

    else
    {
        cout << "Enter correct value: " << endl;
        cin >> cha;
    }

return 0;
}
