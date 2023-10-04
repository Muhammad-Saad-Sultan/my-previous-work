#include <iostream>
#include <string>
using namespace std;

int main()
{
    int RN[2];
    float MM[2];
    float FM[2];
    float WP[2];
    char grades[2];
    char choice;

    cout << "Welcome to the students record program \n(i) Press '1' to enter the record \n(ii) press '2' to display all record \n(iii) Press 'e' or 'E' to exit the program" << endl;
    cin >> choice;

    while (choice != 'e' && choice != 'E')
    {
        switch (choice)
        {
        case '1':
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Enter Roll No.: " << endl;
                cin >> RN[i];
                cout << "Enter Midterm Marks: " << endl;
                cin >> MM[i];
                cout << "Enter Finalterm Marks: " << endl;
                cin >> FM[i];
                cout << "\n" << endl;
            }

            for (int i = 0; i < 2; i++)
            {
                WP[i] = (((MM[i] * 100) / 40) + ((FM[i] * 100) / 60)) / 2;
            }
            for (int i = 0; i < 2; i++)
            {
                if (WP[i] > 85 && WP[i] <= 100)
                {
                    grades[i] = 'A';
                }
                else if (WP[i] > 72 && WP[i] <= 85)
                {
                    grades[i] = 'B';
                }
                else if (WP[i] > 59 && WP[i] <= 72)
                {
                    grades[i] = 'C';
                }
                else if (WP[i] >= 50 && WP[i] <= 59)
                {
                    grades[i] = 'D';
                }
                else if (WP[i] < 50)
                {
                    grades[i] = 'E';
                }
            }
            break;
        }

        case '2':
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Roll NO: " << RN[i];
                cout << ", ";
                cout << "Midterm Marks: " << MM[i];
                cout << ", ";
                cout << "Finalterm Marks: " << FM[i];
                cout << ", ";
                cout << "Weighted Percentage: " << WP[i];
                cout << ", ";
                cout << "Grades: " << grades[i];
                cout << "\n" << endl;
            }
            break;
        }

        default:
            cout << "Invalid input. Please try again." << endl;
        }

        cout << "Enter your choice: ";
        cin >> choice;
    }

    return 0;
}
