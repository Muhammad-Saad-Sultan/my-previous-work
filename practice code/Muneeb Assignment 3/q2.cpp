#include <iostream>
#include <fstream>

using namespace std;

void readNamesFromFile(const char* filename, char**& names, int& numNames) {
    ifstream file(filename);

    if (file.is_open()) {
        file >> numNames;

        // Allocate memory for the names array
        names = new char*[numNames];

        // Read names from the file
        for (int i = 0; i < numNames; ++i) {
            const int MAX_NAME_LENGTH = 100;
            names[i] = new char[MAX_NAME_LENGTH];

            // Read characters until a whitespace is encountered
            char c;
            int j = 0;
            while (file.get(c) && c != '\n') {
                if (c != ' ') {
                    names[i][j++] = c;
                }
            }
            names[i][j] = '\0'; // Add null-terminator
        }

        file.close();
    }
}

void mergeNames(const char** firstName, const char** lastName, char**& fullName, int numNames) {
    // Allocate memory for the fullName array
    fullName = new char*[numNames];

    // Merge first names with last names
    for (int i = 0; i < numNames; ++i) {
        const int MAX_FULLNAME_LENGTH = 200;
        fullName[i] = new char[MAX_FULLNAME_LENGTH];

        int j = 0;
        int k = 0;

        // Copy first name
        while (firstName[i][j] != '\0') {
            fullName[i][k++] = firstName[i][j++];
        }

        // Add space between first name and last name
        fullName[i][k++] = ' ';

        // Copy last name
        j = 0;
        while (lastName[i][j] != '\0') {
            fullName[i][k++] = lastName[i][j++];
        }

        fullName[i][k] = '\0'; // Add null-terminator
    }
}

void writeNamesToFile(const char* filename, const char** names, int numNames) {
    ofstream file(filename);

    if (file.is_open()) {
        file << numNames << endl;

        // Write names to the file
        for (int i = 0; i < numNames; ++i) {
            file << names[i] << endl;
        }

        file.close();
    }
}

void freeMemory(char**& names, int numNames) {
    for (int i = 0; i < numNames; ++i) {
        delete[] names[i];
    }
    delete[] names;
    names = nullptr;
}

int main() {
    const char* firstNameFile = "firstName.txt";
    const char* lastNameFile = "lastName.txt";
    const char* fullNameFile = "fullName.txt";

    char** firstNames = nullptr;
    char** lastNames = nullptr;
    char** fullNames = nullptr;

    int numFirstNames, numLastNames;

    readNamesFromFile(firstNameFile, firstNames, numFirstNames);
    readNamesFromFile(lastNameFile, lastNames, numLastNames);

    // Ensure the number of first names and last names match
    int numNames = min(numFirstNames, numLastNames);

    mergeNames((const char**)firstNames, (const char**)lastNames, fullNames, numNames);

    writeNamesToFile(fullNameFile, (const char**)fullNames, numNames);

    freeMemory(firstNames, numFirstNames);
    freeMemory(lastNames, numLastNames);
    freeMemory(fullNames, numNames);

    return 0;
}
