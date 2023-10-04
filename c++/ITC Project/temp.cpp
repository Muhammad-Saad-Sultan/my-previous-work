#include <iostream>

using namespace std;

int main() {
    int n, roll_number;
    cout << "Enter the number of records: ";
    cin >> n;
    int RN[n];
    int midterm_array[n];
    int final_array[n];
    float WP_array[n];
    char grade_array[n];
    cout << "Enter the records: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: ";
        cin >> RN[i];
        cout << "Midterm (50 marks): ";
        cin >> midterm_array[i];
        cout << "Final (100 marks): ";
        cin >> final_array[i];
        cout << "WP: ";
        cin >> WP_array[i];
        cout << "Grade: ";
        cin >> grade_array[i];
    }
    cout << "Enter the roll number to delete: ";
    cin >> roll_number;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (RN[i] != roll_number) {
            RN[j] = RN[i];
            midterm_array[j] = midterm_array[i];
            final_array[j] = final_array[i];
            WP_array[j] = WP_array[i];
            grade_array[j] = grade_array[i];
            j++;
        }
    }
    n = j;
    cout << "Records after deletion: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << RN[i] << endl;
        cout << "Midterm (50 marks): " << midterm_array[i] << endl;
        cout << "Final (100 marks): " << final_array[i] << endl;
        cout << "WP: " << WP_array[i] << endl;
        cout << "Grade: " << grade_array[i] << endl;
    }
    return 0;
}


/*
    int RN[students] = {1, 4, 6, 2, 5, 3, 9, 8, 10, 7};
    float MM[students] = {48, 15, 34, 24, 44, 27, 40, 41, 25, 35};
    float FM[students] = {95, 42, 70, 58, 84, 75, 88, 91, 60, 70};
*/
