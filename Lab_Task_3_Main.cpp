#include "Lab_Task_3_Header.h"
#include <iostream>
using namespace std;

int main()
{
    int real1;
    int real2;
    int imag1;
    int imag2;

    // User input for first complex number
    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    // User input for second complex number
    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    // Create instances of Complex
    Complex c1(real1, imag1);
    Complex c2(real2, imag2);
    Complex c3, c4, c5, c6;

    // Perform operations
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;

    // Display results
    cout << "Result of addition: " << c3.getReal() << " + " << c3.getImag() << "i" << endl;
    cout << "Result of subtraction: " << c4.getReal() << " + " << c4.getImag() << "i" << endl;
    cout << "Result of multiplication: " << c5.getReal() << " + " << c5.getImag() << "i" << endl;
    cout << "Result of division: " << c6.getReal() << " + " << c6.getImag() << "i" << endl;

return 0;
}
