#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[15];
    int Max = 0;
    int i = 0;

    while(n != 0 )
    {
        cout << "Enter next word or quit: " << endl;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        arr[i] = n;
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";

        if(j != i-1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    cout << i;
    cout << endl;
    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            if (arr[j] / arr[k] > Max)
            {
                Max = arr[j] / arr[k];
            }
        }
    }

    cout << "Maximum quotient is: " << Max << endl;

return 0;
}