#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;

    fin.open("input.txt");
    {
        if (!fin)
        {
            cout << "File not opened successfully!" << endl;
        }

        else
        {
            char ch;

            while(1)
            {
                fin >> ch;

                if (fin.eof())
                {
                    break;
                }

                cout << ch;
            }
        }
    }
    fin.close();

return 0;
}