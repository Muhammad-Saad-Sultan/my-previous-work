#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputFile ("inputfile.txt");
    ofstream outputFile ("outputfile.txt");

    if (!inputFile)
    {
        cout << "Error opening file" << endl;
    }

    



return 0;
}