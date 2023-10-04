#include <iostream>
#include <fstream>
using namespace std;

void display(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int findIndex(int* arr, int size, int value) {
    int index = 0;
    while (index < size && *(arr + index) < value) {
        index++;
    }
    return index;
}

void insertion(int* arr, int& size, int value) {
    int index = findIndex(arr, size, value);

    for (int i = size; i > index; i--) {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + index) = value;
    size++;

    // Sort the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void erase(int* arr, int& size, int value) {
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Value not found." << endl;
    } else {
        for (int i = index; i < size - 1; i++) {
            *(arr + i) = *(arr + i + 1);
        }

        size--;

        // Sort the array in ascending order
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (*(arr + j) > *(arr + j + 1)) {
                    // Swap elements
                    int temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    char choice;
    ifstream inputFile("Input.txt");

    while (inputFile >> *(arr + size)) {
        size++;
    }

    inputFile.close();

    display(arr, size);

    do {
        int userChoice;
        cout << "Enter your choice:\n"
             << "1. Insert a new value in a sorted place\n"
             << "2. Delete a specific value\n"
             << "3. Display array\n";
        cin >> userChoice;

        if (userChoice == 1) {
            int value;
            cout << "Enter a value to add into the array: ";
            cin >> value;
            insertion(arr, size, value);
            cout << "After adding, the array is: ";
            display(arr, size);
        } else if (userChoice == 2) {
            int value;
            cout << "Enter a value to delete from the array: ";
            cin >> value;
            erase(arr, size, value);
            cout << "After deleting, the array is: ";
            display(arr, size);
        } else if (userChoice == 3) {
            cout << "The array is: ";
            display(arr, size);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

