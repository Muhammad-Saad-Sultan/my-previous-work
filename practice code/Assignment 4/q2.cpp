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

    cout << "/***********************************************************************/" << endl;
    cout << " Presented this assignment by: " << endl;
    cout << " __________        ________         ________         _________ "<< endl;
    cout << "|   _______|      /   ___   \\      /   ___   \\      |   ___   \\ "<< endl;
    cout << "|  |_______       |  |   |  |      |  |   |  |      |  |   |  | "<< endl;
    cout << "|_______   |      |  |___|  |      |  |___|  |      |  |   |  | "<< endl;
    cout << " _______|  |      |   ___   |      |   ___   |      |  |___|  | "<< endl;
    cout << "|__________|      |__|   |__|      |__|   |__|      |_________/ "<< endl;

    cout << "/***********************************************************************/" << endl;

    cout << "**********Reserved seats chart**********" << endl;
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
