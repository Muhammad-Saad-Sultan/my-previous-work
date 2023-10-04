#include <iostream>

using namespace std;

int main() {
  // Prompt the user for a floating-point number
  cout << "Enter a floating-point number: ";
  double num;
  cin >> num;

  // Calculate the ceiling of the number
  int ceilingNum;
  if (num >= 0) {
    ceilingNum = (int) (num + 0.99999999999999999);
  } else {
    ceilingNum = (int) num;
  }

  // Print the ceiling of the number
  cout << "The ceiling of " << num << " is " << ceilingNum << "." << endl;
  return 0;
}

