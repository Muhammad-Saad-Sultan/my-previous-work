#include <iostream>
using namespace std;

void printNaturalNumbers(int N);

int main() 
{
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer for N." << endl;
        return 1;
    }

    cout << "The first " << N << " natural numbers are: ";

    printNaturalNumbers(N);

    return 0;
}

void printNaturalNumbers(int N) 
{
    for (int i = 1; i <= N; i++) 
    {
        cout << i << " ";
    }

    cout << endl;
}