#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
bool isPalindrome(const char* word) {
    int length = strlen(word);
    const char* start = word;
    const char* end = word + length - 1;

    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void processFile(const char* filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return;
    }

    char word[100];

    while (inputFile >> word) {
        if (isPalindrome(word)) {
            cout << "Palindrome" << endl;
        } else {
            cout << "Not Palindrome" << endl;
        }
    }

    inputFile.close();
}

int main() {
    const char* filename = "input.txt";
    processFile(filename);

    return 0;
}
