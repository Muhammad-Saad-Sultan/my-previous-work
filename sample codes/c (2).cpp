/*

#include <iostream>

using namespace std;

int main ()

{

  // prints escape sequences

  cout << "Prints \"\\nXXYY\": " << "\nXXYY" << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints \"\\nXX\\bYY\": " << "\nXX\bYY" << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints \"\\n\\tXX\\tYY\": " << "\n\tXX\tYY" << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints the \'\\a\' character: " << '\a' << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints the \'\\r\' character: " << '\r' << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints the \'\\v\' character: " << '\v' << endl;

  cout << "____________________________________________" << endl;

  cout << "Prints the \'\\?\' character: " << '\?' << endl;

}

*/

/*

#include <iostream>

using namespace std;

int main()
{
    int secElapsed, hours, min, sec;

    const int secPerMin = 60;

    const int secPerHour = 60 * secPerMin;

    cout << "Enter the number of seconds elapsed: ";

    cin >> secElapsed;

    hours = secElapsed / secPerHour;

    secElapsed = secElapsed % secPerHour;

    min = secElapsed / secPerMin;

    sec = secElapsed % secPerMin;

    cout << hours << ":" << min << ":" << sec << endl;

    return 0;
}

*/

/*

#include <iostream>

using namespace std;

int main ()

{

    int number1, number2;
    char op;

    cout << "Enter the first number: ";

    cin >> number1;

    cout << "Enter the character: ";

    cin >> op;

    cout << "Enter the second number: ";

    cin >> number2;

 if (op == '+')
    {
        cout << "The sum of two numbers: " << number1 << " + " <<number2 << "=" << number1 + number2 << endl;
    }
else if (op == '*' )
    {
        cout << "The product of two numbers: " << number1 << " * " <<number2 << "=" << number1 * number2 << endl;
    }
else if (op == '-')
    {
        cout << "The difference of two numbers: " << number1 << " - " <<number2 << "=" << number1 - number2 << endl;
    }
else if (op == '/' )
    {
        cout << "The quotient of two numbers: " << number1 << " / " <<number2 << "=" << number1 / number2 << endl;
    }
}

*/
