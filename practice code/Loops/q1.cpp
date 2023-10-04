/* Write a program that prints all the even numbers between 1 and 20 using a loop and if-else statements. */
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter the number: ";
    cin >> n;
    
    if (n > 20)
    {
        cout << "Number is greater than 20.";
    }
    
    else
    {
        
        if (n < 1)
        {
            cout << "Number is less than 1.";
        }
        
        else
        {
        
            if (n % 2 == 0)
            {
                cout << n << " is an even number.";
            }
            
            else
            {
                cout << n << " is an odd number.";
            }

        }

    }

return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    char choice;

    cout << "Enter your choice ( 'e' for even / 'o' for odd ): " << endl;
    cin >> choice;

    if (choice == 'e')
    {
        for (int i = 2; i <= 20; i++)
        {
            cout << i << " ";
            i++;
        }
    }

    else if (choice == 'o')

    {
        for (int i = 1; i <= 20; i++)
        {
            cout << i << " ";
            i++;
        }
    }

    else
    {                                               
        cout << "Invalid choice." << endl;
    }

return 0;
}