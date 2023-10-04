#include <iostream>
#include <fstream>
using namespace std;


int* regrow(int*, int, int);
void copy(int*, int*, int);
void sort_array(int*, int);
int* shrink(int*, int, int, int&);
void copy_shrink(int*, int*, int, int);
int main()
{
    cout << "/***********************************************************************/" << endl;
    cout << " Presented this assignment by: " << endl;
    cout << " __________        ________         ________         _________ "<< endl;
    cout << "|   _______|      /   ___   \\      /   ___   \\      |   ___   \\ "<< endl;
    cout << "|  |_______       |  |   |  |      |  |   |  |      |  |   |  | "<< endl;
    cout << "|_______   |      |  |___|  |      |  |___|  |      |  |   |  | "<< endl;
    cout << " _______|  |      |   ___   |      |   ___   |      |  |___|  | "<< endl;
    cout << "|__________|      |__|   |__|      |__|   |__|      |_________/ "<< endl;

    cout << "/***********************************************************************/" << endl;

    cout << "\t****************" << endl;
    cout << "\t*           Array Manipulation             *" << endl;
    cout << "\t****************" << endl;
    char* filename = new char[30] {"input.txt"};
    ifstream fin(filename);
    int num, size = 0;
    fin >> num;
    int* arr = new int[1] {};
    arr[0] = num;
    size++;
    while (fin >> num)
    {
        arr = regrow(arr, size, num);
        size++;
    }
    cout << endl;
    while (true)
    {
        cout << "======================================\n";
        cout << "\n1. Insert a new value in a sorted place.\n2. Delete a specific value.\n3. Display array.\n4. Exit.\n";
        cout << "======================================\n";
        int choice;
        cout << "\nOriginal Array: ";
        for (int i = 0; i < size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        if (choice == 4)
        {
            cout << "Program Exited Successfully::";
            return 0;
        }
        else if (choice == 1)
        {
            cout << "\nEnter a value to add into array: ";
            cin >> num;
            arr = regrow(arr, size, num);
            size += 1;
            sort_array(arr, size);
            cout << "\nAfter Add Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else if (choice == 2)
        {
            int count;
            cout << "\nEnter a Value that need to be Deleted: ";
            cin >> num;
            arr = shrink(arr, size, num, count);
            if (arr == nullptr)
            {
                cout << "Value not found" << endl;
            }
            else
            {
                size -= count;
                cout << "\nAfter delete Array: ";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "\nUpdated Array: ";
            for (int i = 0;i < size;i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << "Invalid input. Please enter Y or N." << endl;
        }
        char response;
        cout << "\nPress Y to Continue or N to Terminate (Y/N): ";
        cin >> response;
        if (response == 'N' || response == 'n')
        {
            return 0;
        }
        else if (response != 'N' || response != 'n' && response != 'Y' || response != 'y')
        {
            cout << "Invalid input. Please enter Y or N." << endl;
        }
    }


    delete[] arr;
    delete[] filename;
    arr = nullptr;
    filename = nullptr;
    return 0;
}

int* regrow(int* old_arr, int size, int num)
{
    int* new_arr = new int[size + 1] {};
    copy(old_arr, new_arr, size);
    new_arr[size] = num;
    delete[] old_arr;
    return new_arr;
}
int* shrink(int* old_arr, int size, int num, int& count)
{
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (old_arr[i] == num)
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
        int* new_arr = new int[size - count];
        copy_shrink(old_arr, new_arr, size, num);
        delete[] old_arr;
        return new_arr;
    }
}
void copy(int* old_arr, int* new_arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = old_arr[i];
    }
}
void copy_shrink(int* old_arr, int* new_arr, int size, int num)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (old_arr[i] != num)
        {
            new_arr[index] = old_arr[i];
            index++;
        }
    }
}
void sort_array(int* arr, int size)
{
    int loc, min;
    for (int i = 0; i < size; i++)
    {
        min = arr[i];
        loc = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }
        if (loc != i)
        {
            int temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }
    }
}
