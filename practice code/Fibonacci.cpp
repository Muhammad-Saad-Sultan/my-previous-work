#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0 , 1};
    int x = 0;
    int y = 1;
    int z;

    // cout <<  "0 1 ";

    for (int i = 2; i < 10; i++)
    {
        // z = x + y;
        // x = y;
        // y = z;
        // arr[i] = z;

        // cout << z << " ";

        arr[i] = arr[i-2] + arr[i-1];
    }
    
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

return 0;
}