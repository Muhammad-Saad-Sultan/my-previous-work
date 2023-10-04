#include <iostream>
#include <fstream>
using namespace std;

int* expand(int* oldArr, int size, int num);
void copy(int* oldArr, int* newArr, int size);
void sort(int* arr, int size);
int* shrink(int* oldArr, int size, int num, int& count);
void copyShrink(int* oldArr, int* newArr, int size, int num);

int main()
{
    ifstream fin("Input.txt");
    int num;
    int size = 0;
    fin >> num;
    int* arr = new int[1]{ num };
    size++;

    while (fin >> num)
    {
        arr = expand(arr, size, num);
        size++;
    }

    while (true)
    {
        cout << "\n1. Insert a new value in a sorted place.\n2. Delete a specific value.\n3. Display array.\n";

        int choice;
        cout << "\nOriginal Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter a value to add into the array: ";
            cin >> num;
            arr = expand(arr, size, num);
            size++;
            sort(arr, size);
            cout << "\nAfter Adding to Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else if (choice == 2)
        {
            int count;
            cout << "\nEnter a value that needs to be deleted: ";
            cin >> num;
            int* newArr = shrink(arr, size, num, count);
            if (newArr == nullptr)
            {
                cout << "Value not found" << endl;
            }
            else
            {
                delete[] arr;
                arr = newArr;
                size -= count;
                cout << "\nAfter Deleting from Array: ";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "\nUpdated Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << "Invalid input. Please enter a valid choice." << endl;
        }
        
        char response;
        cout << "\nPress Y to Continue or N to Terminate (Y/N): ";
        cin >> response;
        if (response == 'N' || response == 'n')
        {
            delete[] arr;
            return 0;
        }
        else if (response != 'Y' && response != 'y')
        {
            cout << "Invalid input. Please enter Y or N." << endl;
        }
    }
}

int* expand(int* oldArr, int size, int num)
{
    int* newArr = new int[size + 1];
    copy(oldArr, newArr, size);
    newArr[size] = num;
    delete[] oldArr;
    return newArr;
}

void copy(int* oldArr, int* newArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArr[i] = oldArr[i];
    }
}

void sort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int* shrink(int* oldArr, int size, int num, int& count)
{
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (oldArr[i] == num)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return nullptr;
    }
    else
    {
        int* newArr = new int[size - count];
        copyShrink(oldArr, newArr, size, num);
        return newArr;
    }
}

void copyShrink(int* oldArr, int* newArr, int size, int num)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (oldArr[i] != num)
        {
            newArr[index] = oldArr[i];
            index++;
        }
    }
}