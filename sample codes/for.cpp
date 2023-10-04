#include <iostream>
using namespace std;
int main()
{
    int n=0;
    char choice;

    cout << "This program prints counting.\nEnter a number till you want to print numbers from 1 to ownward." << endl;
    cout << "Enter a number to print counting: " << endl;
    cin >> n;

    while(choice='z')
    {
        for(int i=1; i<=n; i++)
        {
            cout << i << endl;
            //cout << "\t";
        }
            //cout << endl;
            cout << "Enter a number to print counting: " << endl;
            cin >> n;
    }
return 0;
}
