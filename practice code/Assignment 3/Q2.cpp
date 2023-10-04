/* version 1
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // const int MAX_SIZE = 100;
    char word[] = {};

    ifstream fin("example.txt");

    if (!fin.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    cout << "Word read from the file is: " << endl;

    for (int i=1; i<=10; i++)
    {

    fin >> word;

    cout << word << " ";
    if(i%2 == 0)
    {
        cout << "\n" << endl;
    }
    }

    cout << sizeof(word) << endl;

    fin.close();

    return 0;
}
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // const int MAX_SIZE = 100;
    char word[] = {};

    ifstream fin("example.txt");

    if (!fin.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    cout << "Words read from the file are: " << endl;

    int count = 0;
    while (fin >> word) {
        cout << word << " ";
        count++;

        if (count % 2 == 0) {
            cout << endl;
        }
    }

    cout << "\n\nSize of the array: " << sizeof(word) << endl;

    fin.close();

    return 0;
}
