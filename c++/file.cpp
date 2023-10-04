#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    
    cout << "Enter the size of array A: ";
    cin >> a;
    
    cout << "Enter the size of array B: ";
    cin >> b;

    int A[a];
    int B[b];
    int c = a + b;
    int C[c];
    

    cout << "Enter the values of array A: ";
    
    for (int i = 0; i < a; i++) 
    {
        cin >> A[i];
    }

    cout << "Enter the values of array B: ";
    
    for (int i = 0; i < b; i++) 
    {
        cin >> B[i];
    }

    // Merge A and B into C in ascending order

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a && j < b) 
    {
        if (A[i] < B[j]) 
        {
            C[k] = A[i];
            i++;
        } 
        
        else 
        {
            C[k] = B[j];
            j++;
        }
        
        k++;
    }

    // Copy the remaining elements from A into C

    while (i < a) 
    {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copy the remaining elements from B into C

    while (j < b) 
    {
        C[k] = B[j];
        j++;
        k++;
    }

    // Print the merged array C
    
    cout << "Merged array C: ";
    
    for (int i = 0; i < c; i++) 
    {
        cout << C[i] << " ";
    }
    
    cout << endl;

return 0;
}