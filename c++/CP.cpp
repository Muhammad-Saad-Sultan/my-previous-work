/*

//task 1

#include <iostream>

using namespace std;

int main() {
    const int M = 3;
    const int N = 4;
    const int MN = M + N;

    int A[M] = {1, 3, 5};
    int B[N] = {9, 7, 6, 2};
    int C[MN];

    // Merge A and B into C in ascending order
    int i = 0;  // index for A
    int j = N - 1;  // index for B
    int k = 0;  // index for C

    while (i < M && j >= 0) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j--;
        }
        k++;
    }

    // Copy the remaining elements from A into C
    while (i < M) {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copy the remaining elements from B into C
    while (j >= 0) {
        C[k] = B[j];
        j--;
        k++;
    }

    // Print the merged array C
    for (int i = 0; i < MN; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/*

//task 2

#include <iostream>

using namespace std;

int main() {
    int M = 3;
    int N = 4;
    int MN = M + N;

    int A[3] = {1, 3, 5};
    int B[4] = {9, 7, 6, 2};
    int C[7];

    // Merge A and B into C in ascending order
    int i = 0;  // index for A
    int j = N - 1;  // index for B
    int k = 0;  // index for C

    while (i < M && j >= 0) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j--;
        }
        k++;
    }

    // Copy the remaining elements from A into C
    while (i < M) {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copy the remaining elements from B into C
    while (j >= 0) {
        C[k] = B[j];
        j--;
        k++;
    }

    // Print the merged array C
    for (int i = 0; i < MN; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//task 3

#include <iostream>

using namespace std;

int main() {
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int A[M];
    int B[N];
    int MN = M + N;
    int C[MN];

    cout << "Enter the values of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter the values of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Merge A and B into C in ascending order
    int i = 0;  // index for A
    int j = N - 1;  // index for B
    int k = 0;  // index for C

    while (i < M && j >= 0) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j--;
        }
        k++;
    }

    // Copy the remaining elements from A into C
    while (i < M) {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copy the remaining elements from B into C
    while (j >= 0) {
        C[k] = B[j];
        j--;
        k++;
    }

    // Print the merged array C
    cout << "Merged array C: ";
    for (int i = 0; i < MN; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
