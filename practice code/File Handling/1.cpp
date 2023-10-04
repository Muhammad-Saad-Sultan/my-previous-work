#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;

    fin.open ("input.txt");

    if (!fin)
    {
        cout << "File not opened successfully!" << endl;
    }
    else
    {
        cout << "File opened successfully." << endl;
    }

    fin.close();

    fout.open("output.txt");

    if(!fout)
    {
        cout << "File not created successfully!" << endl;
    }
    else
    {
        cout << "File created successfully." << endl;
    }

    fout.close();
    
return 0;
}