#include <iostream>
#include <string>
using namespace std;

void displaymenu()
{
    cout << "Welcome to the students record program \n(i) Press '1' to enter the record \n(ii) press '2' to display all record \n(iii) Press 'e' or 'E' to exit the program" << endl;
}

int weightedpercentage(int MM, int FM)
{
    int WP;
    WP = (((MM * 100) / 40) + ((FM * 100) / 60)) / 2;
    return WP;
}

char assigngrades(int WP)
{
    if (WP > 85 && WP <= 100)
    {
        return 'A';
    }
    else if (WP > 72 && WP <= 85)
    {
        return 'B';
    }
    else if (WP > 59 && WP <= 72)
    {
        return 'C';
    }
    else if (WP >= 50 && WP <= 59)
    {
        return 'D';
    }
    else if (WP < 50)
    {
        return 'E';
    }
    else
    {
        return 'X';
    }
}

void addstudent(int &RN, int &MM, int &FM, int &WP, char &grades)
{
    cout << "Enter Roll No.: " << endl;
    cin >> RN;
    cout << "Enter Midterm Marks: " << endl;
    cin >> MM;
    cout << "Enter Finalterm Marks: " << endl;
    cin >> FM;
    cout << "\n" << endl;

    WP = weightedpercentage(MM, FM);
    grades = assigngrades(WP);
}

void displayrecord(int RN, int MM, int FM, int WP, char grades)
{
    cout << "Roll NO: " << RN;
    cout << ", ";
    cout << "Midterm Marks: " << MM;
    cout << ", ";
    cout << "Finalterm Marks: " << FM;
    cout << ", ";
    cout << "Weighted Percentage: " << WP;
    cout << ", ";
    cout << "Grades: " << grades;
    cout << "\n" << endl;
}

int main()
{
    int RN[100];
    int MM[100];
    int FM[100];
    int WP[100];
    char grades[100];
    char choice = 'a';
    int temp = -1;

    while (choice != 'e' && choice != 'E')
    {
        displaymenu();
        cin >> choice;
        if (choice == '1')
        {
            temp++;
            addstudent(RN[temp], MM[temp], FM[temp], WP[temp], grades[temp]);
        }
        else if (choice == '2')
        {
            displayrecord(RN[temp], MM[temp], FM[temp], WP[temp], grades[temp]);
        }
        else if (choice == 'e' || choice == 'E')
        {
            return 0;
        }
        else
        {
            cout << "Please enter a valid choice." <<endl;
        }
    }

//         case '3':
//         {
//             for (int i = 0; i < 2; i++)
//             {
//                 for(int j = i+1; j <= 2; j++)
//                 {
//                     if(RN[i] < RN[j])
//                     {
//                         temp1 = RN[i];
//                         RN[i] = RN[j];
//                         RN[j] = temp1;
//                     }
//                 }
//             }
    return 0;
}
