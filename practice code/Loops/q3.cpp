/* Write a program that asks the user to enter a password. The program should keep asking for the password until the correct password is entered. Once the correct password is entered, display a success message. */
#include <iostream>
using namespace std;
int main()
{
    string password;
    string correctPassword = "password";
    
    while (password != correctPassword)
    {
        cout << "Enter your password: ";
        cin >> password;
    
        if (password == correctPassword)
        {
            cout << "Success" << endl;
            break;
        }
    
    }

return 0;
}

