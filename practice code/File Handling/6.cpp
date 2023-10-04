#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputFile ("original.txt");

    if (inputFile.is_open())
    {
        cout << "The file is opened successfully.\n" << endl;

        char ch;

        inputFile >> noskipws;

        while(inputFile >> ch)
        {
            cout << ch ;
        }
        
        inputFile.close();
    }

    else
    {
        cout << "Failed to opened file." << endl; 
    }
return 0;
}