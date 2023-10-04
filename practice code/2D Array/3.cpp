#include <iostream>
using namespace std;

void addition(int arr1[3][3], int arr2[3][3], int arr3[3][3]);
void subtraction(int arr1[3][3], int arr2[3][3], int arr3[3][3]);
void multiplication(int arr1[3][3], int arr2[3][3], int arr3[3][3]);
void display(int arr3[3][3]);

int main()
{
    int i, j;
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int choice;

    cout << "\t------------------------------------\t" << endl;
    cout << "\t| Welcome to the matrix calculator |\t" << endl;
    cout << "\t------------------------------------\t" << endl;

    cout << endl;

    cout << "Enter elements in first matrix: " << endl;

    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element in row " << i+1 << " and coloumn " << j+1 << ": " ;
            cin >> arr1[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "First Matrix: " << endl;

    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
                cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Enter elements in second matrix: " << endl;

    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element in row " << i+1 << " and coloumn " << j+1 << ": " ;
            cin >> arr2[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Second Matrix: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
                cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Choose your required option from the given menu: " << endl;
    cout << "1.Press 1 to add these matrices." << endl;
    cout << "2.Press 2 to multiply these matrices." << endl;
    cout << "3.Press 3 to subtract these matrices." << endl;

    cout << endl;
    
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            addition(arr1, arr2, arr3);
            break;
        
        case 2:
            multiplication(arr1, arr2, arr3);
            break;

        case 3:
            subtraction(arr1, arr2, arr3);
            break;
        
        default:
            break;
    }

    display(arr3);

return 0;
}

void addition(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        cout << endl;
    }
}

void multiplication(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[j][i];
        }
        cout << endl;
    }
}

void subtraction(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
        cout << endl;
    }
}

void display(int arr3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
}
