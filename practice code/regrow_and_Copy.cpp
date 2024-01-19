#include <iostream>
using namespace std;

int* regrow (int* arr, int size, int num);
void copy (int* arr, int* arr1, int size);

int main()
{
    int size;

    cout << "Enter size of array: " << endl;
    cin >> size;

    int* arr = new int [size];

    cout << "Enter array: " << endl;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int n;
    cout << "How many numbers you want to add: " << endl;
    cin >> n;
    
    int num;
    cout << "Enter number to add in the array: " << endl;
    
    for (int i=0; i < n; i++)
    {
        cin >> num;

        arr = regrow (arr, size, num);

        size++;
    }

    cout << "Regrown Array is:" << endl;

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " " ;
    }

return 0;
}

int* regrow (int* arr, int size, int num)
{
    int* arr1 = new int [size+1];
    copy (arr, arr1, size);
    delete[] arr;
    arr1[size] = num;
    return arr1;
}

void copy (int* arr, int* arr1, int size)
{
    for (int i=0; i<size; i++)
    {
        arr1[i] = arr[i];
    }
}