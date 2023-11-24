/*
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array: " << endl;
    cin >> size;

    char * Name[size];

    for (int i = 0; i < size; i++)
    {
        int * arr = new int [size];
    }

    cout << "Enter the name: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Name[i];
    }

    cout << "Entered name is: " << endl;

    for (int j = 0; j < size; j++)
    {
        cout << Name[j] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete[] Name[i];
    }

return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array: " << endl;
    cin >> size;

    char *Name[size];

    // Allocate memory for each name
    for (int i = 0; i < size; i++)
    {
        Name[i] = new char[100]; // You may adjust the size as needed
    }

    cout << "Enter the name: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> Name[i];
    }

    cout << "Entered names are: " << endl;

    for (int j = 0; j < size; j++)
    {
        cout << Name[j] << endl;
    }

    // Deallocate memory for each name
    for (int i = 0; i < size; i++)
    {
        delete[] Name[i];
    }

    return 0;
}
*/

/*
int size;

char name[size];
int units[size];

cout << "size: " << endl;
cin >> size;

for ( int i=0; i < size; i++)
{
    cout << "Name " << i+1 << ":" << endl;
    cin >> name[i];
}

for ( int i=0; i < size; i++)
{
    cout << "Units " << i+1 << ":" << endl;
    cin >> units[i];
}
*/

/*

// Character array dynamically

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    char * arr = new char[size];

    // char name[size];

    cout << "Enter Name: " << endl;
    cin >> arr;

    arr[size]='\0';

    cout << arr;

    delete[] arr;

return 0;
}


// integer array dynamically

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int * arr = new int[size];

    // char name[size];

    for (int i=0; i < size; i++)
    {
        cout << "Enter Name: " << endl;
        cin >> arr[i];
        cout << "Entered numbered is: " << arr[i] << endl;;
    }

    delete[] arr;

return 0;
}

*/

/*

#include <iostream>
using namespace std;

int main()
{
    // int size;

    // cout << "Enter the size of array: ";
    // cin >> size;

    char * arr = new char [50];

    cout << "Enter a word: " << endl;
    cin >> arr;

    // arr[size] = '\0';

    for(int i = 0; i < 50; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
    }

    cout << "Entered word with all uppercase letters is: " << arr;

return 0;
}

*/

#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    char * arr = new char [50];

    cout << "Enter a sentence: " << endl;
    cin.getline(arr,50);

    cout << endl;

    cout << "Entered array is: " << endl;
    cout << arr;

    cout << endl;

    for (int i=0 ; arr[i] != '\0' ; i++)
    {
        count++;
    }

    cout << "Total length of array is: " << count << endl;

    

return 0;
}