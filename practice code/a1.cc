#include <iostream>

using namespace std;

int main() {
    // Get the three binary digits from the user
    int p, q, r;
    cout << "Enter three binary digits (p q r): ";
    cin >> p >> q >> r;

    // Convert the binary number to a decimal value
    int decimal = p * 4 + q * 2 + r * 1;

    // Check if the decimal value is between 0 and 3
    if (decimal >= 0 && decimal <= 3) {
        // Output = p || (q && r)
        bool output = p || (q && r);
        cout << "Output = " << output << endl;
    }
    // Check if the decimal value is between 4 and 7
    else if (decimal >= 4 && decimal <= 7) {
        // Output = p && (q && r)
        bool output = p && (q && r);
        cout << "Output = " << output << endl;
    }
    // If the decimal value is not between 0 and 7, it is invalid
    else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
