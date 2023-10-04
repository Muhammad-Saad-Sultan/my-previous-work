#include <iostream>
#include <fstream>

using namespace std;

void readMatrixFromFile(const string& filename, int**& matrix, int& numRows, int& numCols) {
    ifstream file(filename);
    
    if (file.is_open()) {
        file >> numRows >> numCols;
        
        // Allocate memory for the matrix
        matrix = new int*[numRows];
        for (int i = 0; i < numRows; ++i) {
            matrix[i] = new int[numCols];
        }
        
        // Read matrix elements
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                file >> matrix[i][j];
            }
        }
        
        file.close();
    }
}

void printMatrix(const int** matrix, int numRows, int numCols) {
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void sortMatrixRows(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols - 1; ++j) {
            for (int k = 0; k < numCols - j - 1; ++k) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    // Swap elements
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

void freeMatrixMemory(int**& matrix, int numRows) {
    for (int i = 0; i < numRows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

int main() {
    string filename = "Data.txt";
    int numRows, numCols;
    int** matrix = nullptr;
    
    readMatrixFromFile(filename, matrix, numRows, numCols);
    
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    sortMatrixRows(matrix, numRows, numCols);
    
    cout << "Updated Matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    freeMatrixMemory(matrix, numRows);
    
    return 0;
}
