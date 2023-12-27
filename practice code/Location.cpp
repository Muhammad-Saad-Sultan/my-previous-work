#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;

    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    if (x > 0 && y > 0 )
    {
        cout << "Quadrant 1" << endl;
    }

    else if (x < 0 && y > 0 )
    {
        cout << "Quadrant 2" << endl;
    }

    else if (x < 0 && y < 0 )
    {
        cout << "Quadrant 3" << endl;
    }

    else if (x > 0 && y < 0 )
    {
        cout << "Quadrant 4" << endl;
    }

    else
    {
        cout << "Enter a valid number." << endl;
    }
    
return 0;
}