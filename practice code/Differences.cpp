#include <iostream>
using namespace std;
int main()
{
    int s1;
    int s2;

    cout << "Enter size for first array: ";
    cin >> s1;

    cout << "Enter size for first array: ";
    cin >> s2;

    int* arr1 = new int [s1];
    int* arr2 = new int [s2];

    cout << "Enter values in array1: " << endl;
    for (int i = 0; i < s1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter values in array2: " << endl;
    for (int i = 0; i < s2; i++)
    {
        cin >> arr2[i];
    }

    bool flag = false;

    for (int i = 0; i < s1; i++)
    {
        flag = false;
        
        for (int j = 0; j < s2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag = true;
            }

        }

        if (flag == false)
        {
            cout << arr1[i] << " ";
        }
    }

return 0;
}