/********************************************* ASSIGNMENT 4 *********************************************/
/************************************************** PF **************************************************/

/* < Start of question 1 > */

/*
#include <iostream>
#include <fstream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findIndexToInsert(int arr[], int size, int value) {
    int index = 0;
    while (index < size && arr[index] < value) {
        index++;
    }
    return index;
}

void insertValue(int arr[], int& size, int value) {
    int index = findIndexToInsert(arr, size, value);
    
    // Shift elements to the right to make space for the new value
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = value;
    size++;
}

void deleteValue(int arr[], int& size, int value) {
    int index = -1;
    
    // Find the index of the value to be deleted
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        cout << "Value not found." << endl;
    } else {
        // Shift elements to the left to overwrite the deleted value
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        size--;
    }
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    char choice;
    ifstream inputFile("Input.txt");
    
    // Read numbers from the file and populate the array
    while (inputFile >> arr[size]) {
        size++;
    }
    
    inputFile.close();
    
    displayArray(arr, size);
    
    do {
        int userChoice;
        cout << "Enter your choice:\n"
             << "1. Insert a new value in a sorted place\n"
             << "2. Delete a specific value\n"
             << "3. Display array\n";
        cin >> userChoice;
        
        if (userChoice == 1) {
            int value;
            cout << "Enter a value to add into array: ";
            cin >> value;
            insertValue(arr, size, value);
            cout << "After add array: ";
            displayArray(arr, size);
        } else if (userChoice == 2) {
            int value;
            cout << "Enter a Value that needs to be Deleted: ";
            cin >> value;
            deleteValue(arr, size, value);
            cout << "After delete array: ";
            displayArray(arr, size);
        } else if (userChoice == 3) {
            cout << "Array: ";
            displayArray(arr, size);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
        
        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}
*/

/*_______________________________________________________________________*/

/*
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int* regrow(int*, int, int);
void copy(int*, int*, int);
void sort_array(int*, int);
int* shrink(int*, int, int, int&);
void copy_shrink(int*, int*, int, int);

int main()
{
    char filename[] = "Input.txt";
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
        cout << "\n1. Insert a new value in a sorted place.\n2. Delete a specific value.\n3. Display array.\n4. Exit.\n";
        int choice;
        cout << "\nOriginal Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Program Exited Successfully.";
            delete[] arr;
            return 0;
        }
        else if (choice == 1)
        {
            cout << "\nEnter a value to add into the array: ";
            cin >> num;
            arr = regrow(arr, size, num);
            size += 1;
            sort_array(arr, size);
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
            arr = shrink(arr, size, num, count);
            if (arr == nullptr)
            {
                cout << "Value not found" << endl;
            }
            else
            {
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

    delete[] arr;
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
*/  


/*
#include <iostream>
#include <fstream>
using namespace std;

int* regrow(int* old_arr, int size, int num);
void copy(int* old_arr, int* new_arr, int size);
void sort_array(int* arr, int size);
int* shrink(int* old_arr, int size, int num, int& count);
void copy_shrink(int* old_arr, int* new_arr, int size, int num);

int main()
{
    cout << "\t****************" << endl;
    cout << "\t*     Array Manipulation     *" << endl;
    cout << "\t****************" << endl;

    ifstream fin("Input.txt");
    int num;
    int size = 0;
    fin >> num;
    int* arr = new int[1]{};
    arr[0] = num;
    size++;

    while (fin >> num)
    {
        int* new_arr = new int[size + 1];
        copy(arr, new_arr, size);
        new_arr[size] = num;
        delete[] arr;
        arr = new_arr;
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
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Program Exited Successfully::";
            delete[] arr;
            return 0;
        }
        else if (choice == 1)
        {
            cout << "\nEnter a value to add into the array: ";
            cin >> num;
            int* new_arr = new int[size + 1];
            copy(arr, new_arr, size);
            new_arr[size] = num;
            delete[] arr;
            arr = new_arr;
            size++;
            sort_array(arr, size);
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
            int* new_arr = shrink(arr, size, num, count);
            delete[] arr;
            arr = new_arr;
            if (arr == nullptr)
            {
                cout << "Value not found" << endl;
            }
            else
            {
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

int* regrow(int* old_arr, int size, int num)
{
    int* new_arr = new int[size + 1];
    copy(old_arr, new_arr, size);
    new_arr[size] = num;
    delete[] old_arr;
    return new_arr;
}

void copy(int* old_arr, int* new_arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = old_arr[i];
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
*/

/*
#include <iostream>
#include <fstream>
using namespace std;

int* expandArray(int* oldArr, int size, int num);
void copyArray(int* oldArr, int* newArr, int size);
void sortArray(int* arr, int size);
int* shrinkArray(int* oldArr, int size, int num, int& count);
void copyShrinkArray(int* oldArr, int* newArr, int size, int num);

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
        arr = expandArray(arr, size, num);
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
            arr = expandArray(arr, size, num);
            size++;
            sortArray(arr, size);
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
            int* newArr = shrinkArray(arr, size, num, count);
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

int* expandArray(int* oldArr, int size, int num)
{
    int* newArr = new int[size + 1];
    copyArray(oldArr, newArr, size);
    newArr[size] = num;
    delete[] oldArr;
    return newArr;
}

void copyArray(int* oldArr, int* newArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArr[i] = oldArr[i];
    }
}

void sortArray(int* arr, int size)
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

int* shrinkArray(int* oldArr, int size, int num, int& count)
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
        copyShrinkArray(oldArr, newArr, size, num);
        return newArr;
    }
}

void copyShrinkArray(int* oldArr, int* newArr, int size, int num)
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
*/

/*
#include <iostream>
#include <fstream>

void insertValue(int* arr, int& size, int value);
void deleteValue(int* arr, int& size, int value);
void displayArray(const int* arr, int size);

int main()
{
    char filename[] = "input file.txt";
    std::ifstream fin(filename);
    int num;
    int size = 0;
    int capacity = 10;
    int* arr = new int[capacity];

    while (fin >> num)
    {
        if (size >= capacity)
        {
            capacity *= 2;
            int* newArr = new int[capacity];
            std::copy(arr, arr + size, newArr);
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = num;
    }
    std::cout << std::endl;

    while (true)
    {
        std::cout << "\n1. Insert a new value in a sorted place.\n2. Delete a specific value.\n3. Display array.\n4. Exit.\n";
        int choice;
        std::cout << "\nOriginal Array: ";
        displayArray(arr, size);
        std::cout << "\nEnter Your Choice: ";
        std::cin >> choice;

        if (choice == 4)
        {
            std::cout << "Program Exited Successfully.";
            delete[] arr;
            return 0;
        }
        else if (choice == 1)
        {
            std::cout << "\nEnter a value to add into the array: ";
            std::cin >> num;
            insertValue(arr, size, num);
            std::cout << "\nAfter Adding to Array: ";
            displayArray(arr, size);
        }
        else if (choice == 2)
        {
            std::cout << "\nEnter a value that needs to be deleted: ";
            std::cin >> num;
            deleteValue(arr, size, num);
            std::cout << "\nAfter Deleting from Array: ";
            displayArray(arr, size);
        }
        else if (choice == 3)
        {
            std::cout << "\nUpdated Array: ";
            displayArray(arr, size);
        }
        else
        {
            std::cout << "Invalid input. Please enter a valid choice." << std::endl;
        }

        char response;
        std::cout << "\nPress Y to Continue or N to Terminate (Y/N): ";
        std::cin >> response;
        if (response == 'N' || response == 'n')
        {
            delete[] arr;
            return 0;
        }
        else if (response != 'Y' && response != 'y')
        {
            std::cout << "Invalid input. Please enter Y or N." << std::endl;
        }
    }
}

void insertValue(int* arr, int& size, int value)
{
    int i = size - 1;
    while (i >= 0 && arr[i] > value)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    size++;
}

void deleteValue(int* arr, int& size, int value)
{
    int i = 0;
    while (i < size && arr[i] != value)
    {
        i++;
    }
    if (i == size)
    {
        std::cout << "Value not found" << std::endl;
        return;
    }
    for (; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

void displayArray(const int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
*/

/* < End of Question 1 > */

/*
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
*/

/* < Start of Question 2 > */

/*
#include <iostream>
#include <fstream>
using namespace std;

char** dynamic(int, int);
void read(char**, int, int);
void del(char**, int);
bool first_class(char**, int, int, int);
void seat_manage(char, int&);
bool business_class(char**, int, int, int);
bool economy_class(char**,int,int,int);
void print(char**, int, int);
void update_file(char**,int, int);

int main()
{
    int COLS = 6;
    int ROWS = 13;
    char** arr = dynamic(ROWS, COLS);
    read(arr, ROWS, COLS);

    char seat;
    int s = 0;
    char type;
    int selectedRow;

    cout << " __________        ________         ________         _________ "<< endl;
    cout << "|   _______|      /   ___   \\      /   ___   \\      |   ___   \\ "<< endl;
    cout << "|  |_______       |  |   |  |      |  |   |  |      |  |   |  | "<< endl;
    cout << "|_______   |      |  |___|  |      |  |___|  |      |  |   |  | "<< endl;
    cout << " _______|  |      |   ___   |      |   ___   |      |  |___|  | "<< endl;
    cout << "|__________|      |__|   |__|      |__|   |__|      |_________/ "<< endl;

    print(arr, ROWS, COLS);
    while (true)
    {
        cout << "-----------------------------------------------------------" << endl;
        cout << "                 Ticket Types with their Commands:           " << endl;
        cout << "                  F: First Class                             " << endl;
        cout << "                  B: Business Class                          " << endl;
        cout << "                  E: Economy Class                           " << endl;
        cout << "                  X: Exit                                    " << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "\nEnter Your Choice: ";
        cin >> type;
        if (type == 'x' || type == 'X')
        {
            cout << "-----------------------------------------------------------" << endl;
            cout << "                     Program Exited!                        " << endl;
            cout << "-----------------------------------------------------------" << endl;
            return 0;
        }
        else if (type == 'f' || type == 'F')
        {
            cout << "-----------------------------------------------------------" << endl;
            cout << "                First Class Reservation                      " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Enter Desired Row (1-2): ";
            cin >> selectedRow;
            if (selectedRow < 1 || selectedRow > 2)
            {
                cout << "Invalid Row for First Class!" << endl;
                continue;
            }
            cout << "Enter Desired Seat (A, B, C, D, E, F): ";
            cin >> seat;
            seat_manage(seat, s);
            if (s == -1)
            {
                cout << "Invalid Entry ! " << endl;
            }
            else
            {
                if (!first_class(arr, COLS, s, selectedRow))
                {
                    cout << endl;
                    cout << "Seat Already Occupied:: " << endl;
                }
                else
                {
                    print(arr, ROWS, COLS);
                    update_file(arr, ROWS, COLS);
                }
            }
        }
        else if (type == 'b' || type == 'B')
        {
            cout << "-----------------------------------------------------------" << endl;
            cout << "               Business Class Reservation                    " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Enter Desired Row (3-7): ";
            cin >> selectedRow;
            if (selectedRow < 3 || selectedRow >  7)
            {
                cout << "Invalid Row for Business Class!" << endl;
                continue;
            }
            else
            {
                cout << "Enter Desired Seat (A, B, C, D, E, F): ";
                cin >> seat;
                seat_manage(seat, s);
                if (s == -1)
                {
                    cout << "Invalid Entry ! " << endl;
                }
                else
                {
                    if (!business_class(arr, COLS, s, selectedRow))
                    {
                        cout << endl;
                        cout << "Seat Already Occupied:: " << endl;
                    }
                    else
                    {
                        print(arr, ROWS, COLS);
                        update_file(arr, ROWS, COLS);
                    }
                }
            }
        }
        else if (type == 'e' || type == 'E')
        {
            cout << "-----------------------------------------------------------" << endl;
            cout << "               Economy Class Reservation                     " << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << "Enter Desired Row (11-13): ";
            cin >> selectedRow;
            if (selectedRow < 8 || selectedRow >13)
            {
                cout << "Invalid Row for Economy Class!" << endl;
                continue;
            }
            cout << "Enter Desired Seat (A, B, C, D, E, F): ";
            cin >> seat;
            seat_manage(seat, s);
            if (s == -1)
            {
                cout << "Invalid Entry ! " << endl;
            }
            else
            {
                if (!economy_class(arr, COLS, s, selectedRow))
                {
                    cout << endl;
                    cout << "Seat Already Occupied:: " << endl;
                }
                else
                {
                    print(arr, ROWS, COLS);
                    update_file(arr, ROWS, COLS);
                }
            }
        }
        else
        {
            cout << "-----------------------------------------------------------" << endl;
            cout << "                  Invalid Choice!                            " << endl;
            cout << "-----------------------------------------------------------" << endl;
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
    del(arr, ROWS);
    arr = nullptr;
}

void read(char** arr, int row, int col)
{
    ifstream fin("ticket.txt");
    if (!fin.is_open())
    {
        cout << "File Not Found" << endl;
        return;
    }
    char waste[30];
    fin.getline(waste, 50);
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            fin >> arr[r][c];
        }
    }
    fin.close();
}

void print(char** arr, int row, int col)
{
    cout << "\tA\tB\tC\tD\tE\tF\n";
    for (int r = 0; r < row; r++)
    {
        cout << "Row " << r + 1 << "\t";
        for (int c = 0; c < col; c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }
}

void update_file(char** arr, int row, int col)
{
    ofstream fout("ticket.txt");
    if (!fout.is_open())
    {
        cout << "File Not Found" << endl;
        return;
    }
    fout << "A B C D E F\n";
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            fout << arr[r][c] << " ";
        }
        fout << endl;
    }
    fout.close();
}

void seat_manage(char seat, int& s)
{
    if (seat == 'A' || seat == 'a')
    {
        s = 0;
    }
    else if (seat == 'B' || seat == 'b')
    {
        s = 1;
    }
    else if (seat == 'C' || seat == 'c')
    {
        s = 2;
    }
    else if (seat == 'D' || seat == 'd')
    {
        s = 3;
    }
    else if (seat == 'E' || seat == 'e')
    {
        s = 4;
    }
    else if (seat == 'F' || seat == 'f')
    {
        s = 5;
    }
    else
    {
        s = -1;
    }
}

bool first_class(char** arr, int col, int seat, int row)
{
    const int first = 2;
    for (int r = row - 1; r < first; r++)
    {
        if (arr[r][seat] == '*')
        {
            arr[r][seat] = 'X';
            return true;
        }
    }
    return false;
}
bool business_class(char** arr, int col, int seat, int row)
{
    const int first = 7;
    for (int r = row - 1; r < first; r++)
    {
        if (arr[r][seat] == '*')
        {
            arr[r][seat] = 'X';
            return true;
        }
    }
    return false;
}
bool economy_class(char** arr, int col, int seat, int row)
{
    const int first = 13;
    for (int r = row - 1; r < first; r++)
    {
        if (arr[r][seat] == '*')
        {
            arr[r][seat] = 'X';
            return true;
        }
    }
    return false;
}
char** dynamic(int row, int col)
{
    char** temp = new char* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new char[col];
    }
    return temp;
}

void del(char** arr, int row)
{
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;
}
*/

/*
#include<iostream>
#include<fstream>
using namespace std;

void first(char arr[13][6])
{
	system("cls");

cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=0;i<2;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(1/2) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	

system("cls");

if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=0;i<2;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
	system("cls");
cout<<"this seat is already occupied\n";	
}
		
}


void bussiness(char arr[13][6])
{
	system("cls");
	cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=2;i<7;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(3-7) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	
system("cls");
if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=2;i<7;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
	system("cls");
cout<<"this seat is already occupied\n";	
}
	
	
}


void economy(char arr[13][6])
{
	system("cls");
	cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=7;i<13;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(8-13) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	
system("cls");
if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=7;i<13;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
cout<<"this seat is already occupied\n";	
}
	
	
}




int main()
{
	int opi;
	char arr[13][6];
	
	ifstream file;
	file.open("v.txt");
	
	for(int i=0;i<13;i++)
	for(int j=0;j<6;j++)
	{
		file>>arr[i][j];
	}
	
	file.close();
	
	
	
	
cout<<"1.first class\n2.bussiness class\n3.economy class\n";
cout<<"type your opinion : ";cin>>opi;
system("cls");
for(int i=0;;i++)
{

if(opi==1)
{
	first(arr);
}

if(opi==2)
{
	bussiness(arr);
}

if(opi==3)
{
	economy(arr);
}
char y;

cout<<"\n\ndo you want to select ticket again\ntype here (Y/N) : ";cin>>y;
if(y=='Y')
continue;
else if(y=='N')
break;
}


	system("pause");
	return 0;
}
*/

/*
#include<iostream>
#include<fstream>
using namespace std;

void displaySeats(char arr[13][6], int startRow, int endRow)
{
	system("cls");

	cout << "\nWe have the following seats\n\n";
	cout << "  1 2 3 4 5 6\n";
	cout << "  _____\n";
	for (int i = startRow; i <= endRow; i++)
	{
		cout << i + 1 << "|";
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j] << "|";
		}
		cout << "\n";
		cout << " -------------\n";
	}
}

void reserveSeat(char arr[13][6], int startRow, int endRow)
{
	displaySeats(arr, startRow, endRow);

	int r, c;
	cout << "\n\nType row number(" << startRow + 1 << "-" << endRow + 1 << "): ";
	cin >> r;
	cout << "\n\nType col number(1-6): ";
	cin >> c;

	system("cls");

	if (arr[r - 1][c - 1] == '*')
	{
		arr[r - 1][c - 1] = '$';

		displaySeats(arr, startRow, endRow);

		cout << "\nYour seat is marked by $";
	}
	else if (arr[r - 1][c - 1] == 'X')
	{
		system("cls");
		cout << "This seat is already occupied\n";
	}
}

void firstClass(char arr[13][6])
{
	reserveSeat(arr, 0, 1);
}

void businessClass(char arr[13][6])
{
	reserveSeat(arr, 2, 6);
}

void economyClass(char arr[13][6])
{
	reserveSeat(arr, 7, 12);
}

int main()
{
	int option;
	char arr[13][6];

	ifstream file;
	file.open("seats.txt");

	for (int i = 0; i < 13; i++)
		for (int j = 0; j < 6; j++)
		{
			file >> arr[i][j];
		}

	file.close();

	cout << "1. First Class\n2. Business Class\n3. Economy Class\n";
	cout << "Type your option: ";
	cin >> option;
	system("cls");

	for (;;)
	{
		if (option == 1)
		{
			firstClass(arr);
		}

		if (option == 2)
		{
			businessClass(arr);
		}

		if (option == 3)
		{
			economyClass(arr);
		}

		char choice;
		cout << "\nDo you want to select a ticket again? (Y/N): ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
	}

	system("pause");
	return 0;
}
*/

/*
#include<iostream>
#include<fstream>
using namespace std;

void display(char arr[13][6], int startRow, int endRow)
{
	system("cls");

	cout << "We have the following seats" << endl;
	cout << "  1 2 3 4 5 6" << endl;
	for (int i = startRow; i <= endRow; i++)
	{
		cout << i + 1 << "|";
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j] << "|";
		}
		cout << endl;
	}
}

void reserve(char arr[13][6], int startRow, int endRow)
{
	display(arr, startRow, endRow);

	int r, c;
	cout << "Type row number(" << startRow + 1 << "-" << endRow + 1 << "): " << endl;
	cin >> r;
	cout << "Type col number(1-6): " << endl;
	cin >> c;

	system("cls");

	if (arr[r - 1][c - 1] == '*')
	{
		arr[r - 1][c - 1] = 'X';

		display(arr, startRow, endRow);

		cout << "Your seat is marked by 'X'" << endl;
	}
	else if (arr[r - 1][c - 1] == 'X')
	{
		system("cls");
		cout << "This seat is already occupied" << endl;
	}
}

void FC(char arr[13][6])
{
	reserve(arr, 0, 1);
}

void BC(char arr[13][6])
{
	reserve(arr, 2, 6);
}

void EC(char arr[13][6])
{
	reserve(arr, 7, 12);
}

int main()
{
	int option;
	char arr[13][6];

	ifstream file;
	file.open("seats.txt");

	for (int i = 0; i < 13; i++)
		for (int j = 0; j < 6; j++)
		{
			file >> arr[i][j];
		}

	file.close();

	cout << "1. First Class" << endl;
	cout << "2. Business Class" << endl;
	cout << "3. Economy Class" << endl;
	cout << "Type your option: " << endl;
	cin >> option;
	system("cls");

	for (;;)
	{
		if (option == 1)
		{
			FC(arr);
		}

		if (option == 2)
		{
			BC(arr);
		}

		if (option == 3)
		{
			EC(arr);
		}

		char choice;
		cout << "Do you want to select a ticket again? (Y/N): " << endl;
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
	}

	system("pause");
	return 0;
}
*/

/* < End of question 2 > */