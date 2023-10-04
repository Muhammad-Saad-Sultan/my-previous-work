#include <iostream>
using namespace std;
int main()
{
    int students = 100;
    int RN[students];
    float MM[students];
    float FM[students];
    float WP[students];
    float MT[students];
    float FT[students];
    char grades[students];
    int temp;
    int pos;
    int x;
    int y = 0;
    char z; // for grade input
    char choice;
    int count = 0;
    int count1 = 0;

// Default display
    cout << "Welcome to the students record program.\n\n Press 'S' to enter the record.\n Press 'D' to display all record.\n Press 'N' to enter the new student record.\n Press 'e' or 'E' to exit the program.\n\n Press '0' to sort the students record according to their Roll No. in ascending.\n Press '1' to sort the students record according to their Roll No. in descending.\n Press '2' to sort the students record according to their midterm marks in ascending.\n Press '3' to sort the students record according to their midterm marks in descending.\n Press '4' to sort the students record according to their finalterm marks in ascending.\n Press '5' to sort the students record according to their finalterm marks in descending.\n Press '6' to sort the students record according to their weighted percentage in ascending.\n Press '7' to sort the students record according to their weighted percentage in descending.\n Press '8' to sort the students record according to their grades in ascending.\n Press '9' to sort the students record according to their grades in descending.\n\n Press 'a' to display the students record greater than 'x' weighted percentage in descending order.\n Press 'b' to display the students record greater than 'x' weighted percentage in ascending order.\n Press 'c' to display the students record less than or equal to 'x' weighted percentage in descending order.\n Press 'd' to display the students record less than or equal to 'x' weighted percentage in ascending order.\n Press 'f' to display the students record greater than 'x' grade in descending order.\n Press 'g' to display the students record greater than 'x' grade in ascending order.\n Press 'h' to display the students record less than or equal to 'x' grade in descending order.\n Press 'i' to display the students record less than or equal to 'x' grade in ascending order.\n Press 'j' to display the students record with 'x' grade according to their roll no. in ascending order.\n Press 'k' to display the students record with 'x' grade according to their roll no. in descending order.\n Press 'l' to display the students record with 'x' grade according to their weighted percentage in ascending order.\n Press 'm' to display the students record with 'x' grade according to their weighted percentage in descending order.\n Press 'n' to display the total no. of students having less than or equal to 'x' weighted percentage.\n Press 'o' to display the total no. of students having greater than or equal to 'x' weighted percentage.\n Press 'p' to display the total no. of students having 'x' grade.\n\n Press 'q' to delete a student record.\n\nPlease Enter:" << endl;
    cin >> choice;

// Code starts here.....
    while (choice != 'e' && choice != 'E')
    {
        switch (choice)
        {
// Records entered here.....
        case 'S':
        {   cout<< "How many student records you want to enter: ";
            cin>> count;
            for (int i = 0; i <count; i++)
            {
                cout << "Enter Roll No.: " << endl;
                cin >> RN[i];
                cout << "Enter Midterm Marks: " << endl;
                cin >> MM[i];
                cout << "Enter Finalterm Marks: " << endl;
                cin >> FM[i];
                cout << "\n" << endl;
            }
        }

// Weighted percentage formula.....
            for (int i = 0; i < count; i++)
            {
                WP[i] = (((MM[i] * 100) / 50) + ((FM[i] * 100) / 100))/2.0;
            }

// Grades initialization.....
            for(int i = 0; i < count; i++)
            {
                if (WP[i] >= 85 && WP[i] <= 100)
                {
                    grades[i] = 'A';
                }
                else if (WP[i] >= 72 && WP[i] <= 85)
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

// Display all records.....
        case 'D':
        {
            for (int i = 0; i < count; i++)
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

// Sort Roll No. in ascending order.....
        case '0':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(RN[i] > RN[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Roll No. in descending order.....
         case '1':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(RN[i] < RN[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Midterm marks in ascending order.....
         case '2':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(MM[i] > MM[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Midterm marks in descending order.....
         case '3':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(MM[i] < MM[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Final term marks in ascending order.....
         case '4':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(FM[i] > FM[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }

                }
            }
            break;
        }

//Sort Final term marks in descending order.....
         case '5':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(FM[i] < FM[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Weighted percentage in ascending order.....
        case '6':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(WP[i] > WP[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort Weighted percentage in descending order.....
         case '7':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(WP[i] < WP[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

//Sort grades in ascending order.....
         case '8':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(grades[i] > grades[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;


                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }

                }
            }
            break;
        }

//Sort grades in descending order.....
         case '9':
        {
            for (int i = 0; i <count; i++)
            {
                for(int j = i+1; j < count; j++)
                {
                    if(grades[i] < grades[j])
                    {
                        temp = RN[i];
                        RN[i] = RN[j];
                        RN[j] = temp;

                        temp = MM[i];
                        MM[i] = MM[j];
                        MM[j] = temp;

                        temp = FM[i];
                        FM[i] = FM[j];
                        FM[j] = temp;

                        temp = WP[i];
                        WP[i] = WP[j];
                        WP[j] = temp;

                        temp = grades[i];
                        grades[i] = grades[j];
                        grades[j] = temp;
                    }
                }
            }
            break;
        }

// Enter a new student record.....
        case 'N':
        {   cout<< "How many new student records you want to enter: ";
            cin>> count1;
            for (int i = count; i < count + count1; i++)
            {
                cout << "Enter Roll No.: " << endl;
                cin >> RN[i];
                cout << "Enter Midterm Marks: " << endl;
                cin >> MM[i];
                cout << "Enter Finalterm Marks: " << endl;
                cin >> FM[i];
                cout << "\n" << endl;
            }
            count=count++;
            break;
        }

// delete a student record.....
        case 'q':
        {
            cout <<"Enter the record you want to delete: " << endl;
            cin >> pos;

            for(int i=pos-1; i<count; i++)
            {

                        RN[i] = RN[i+1];

                        MM[i] = MM[i+1];

                        FM[i] = FM[i+1];

                        WP[i] = WP[i+1];

                        grades[i] = grades[i+1];

            }
            break;
        }

// display the students record greater than 'x' weighted percentage in descending order.....
        case 'a':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {

                if(x > WP[i])
                {
                    for(int j = i+1; j < count; j++)
                    {
                        if(WP[i] < WP[j])
                        {
                            temp = RN[i];
                            RN[i] = RN[j];
                            RN[j] = temp;

                            temp = MM[i];
                            MM[i] = MM[j];
                            MM[j] = temp;

                            temp = FM[i];
                            FM[i] = FM[j];
                            FM[j] = temp;

                            temp = WP[i];
                            WP[i] = WP[j];
                            WP[j] = temp;

                            temp = grades[i];
                            grades[i] = grades[j];
                            grades[j] = temp;
                        }
                    }
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

            }
            break;
        }

// display the students record greater than 'x' weighted percentage in ascending order.....
        case 'b':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {
                if(x <= WP[i])
                {
                    for(int j = i+1; j < count; j++)
                    {
                        if(WP[i] > WP[j])
                        {
                            temp = RN[i];
                            RN[i] = RN[j];
                            RN[j] = temp;

                            temp = MM[i];
                            MM[i] = MM[j];
                            MM[j] = temp;

                            temp = FM[i];
                            FM[i] = FM[j];
                            FM[j] = temp;

                            temp = WP[i];
                            WP[i] = WP[j];
                            WP[j] = temp;

                            temp = grades[i];
                            grades[i] = grades[j];
                            grades[j] = temp;
                        }
                    }

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

            }
            break;
        }

// display the students record less than or equal to 'x' weighted percentage in descending order.....
        case 'c':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {

                if(x <= WP[i])
                {
                    for(int j = i+1; j < count; j++)
                    {
                        if(WP[i] < WP[j])
                        {
                            temp = RN[i];
                            RN[i] = RN[j];
                            RN[j] = temp;

                            temp = MM[i];
                            MM[i] = MM[j];
                            MM[j] = temp;

                            temp = FM[i];
                            FM[i] = FM[j];
                            FM[j] = temp;

                            temp = WP[i];
                            WP[i] = WP[j];
                            WP[j] = temp;

                            temp = grades[i];
                            grades[i] = grades[j];
                            grades[j] = temp;
                        }
                    }

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

            }
            break;
        }

// display the students record greater than or equal to 'x' weighted percentage in ascending order.....
        case 'd':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {

                    if(x >= WP[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(WP[i] > WP[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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

            }
            break;
        }

// display the students record greater than 'x' grade in descending order.....
        case 'f':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                    if(z < grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(grades[i] < grades[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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

            }
            break;
        }

// display the students record greater than 'x' grade in ascending order.....
        case 'g':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                    if(z > grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(grades[i] < grades[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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
                }
            break;
        }

// display the students record less than or equal to 'x' grade in descending order.....
        case 'h':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if(z <= grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(grades[i] < grades[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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
                }
            }
            break;
        }

// display the students record less than or equal to 'x' grade in ascending order.....
        case 'i':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {

                    if(z <= grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(grades[i] > grades[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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
            }

            break;
        }

// display the students record with 'x' grade according to their roll no. in ascending order.....
        case 'j':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {

                    if(z = grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(RN[i] > RN[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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

            }
            break;
        }

// display the students record with 'x' grade according to their roll no. in descending order.....
        case 'k':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                    if(z = grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(RN[i] < RN[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }

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

            }
            break;
        }

// display the students record with 'x' grade according to their weighted percentage in ascending order.....
        case 'l':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {

                    if(z = grades[i])
                    {
                        for(int j = i+1; j < count; j++)
                        {
                            if(WP[i] > WP[j])
                            {
                                temp = RN[i];
                                RN[i] = RN[j];
                                RN[j] = temp;

                                temp = MM[i];
                                MM[i] = MM[j];
                                MM[j] = temp;

                                temp = FM[i];
                                FM[i] = FM[j];
                                FM[j] = temp;

                                temp = WP[i];
                                WP[i] = WP[j];
                                WP[j] = temp;

                                temp = grades[i];
                                grades[i] = grades[j];
                                grades[j] = temp;
                            }
                        }
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
                }

            break;
        }

// display the students record with 'x' grade according to their weighted percentage in descending order.....
        case 'm':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                if(z = grades[i])
                {
                     for(int j = i+1; j < count; j++)
                    {
                        if(WP[i] < WP[j])
                        {
                            temp = RN[i];
                            RN[i] = RN[j];
                            RN[j] = temp;

                            temp = MM[i];
                            MM[i] = MM[j];
                            MM[j] = temp;

                            temp = FM[i];
                            FM[i] = FM[j];
                            FM[j] = temp;

                            temp = WP[i];
                            WP[i] = WP[j];
                            WP[j] = temp;

                            temp = grades[i];
                            grades[i] = grades[j];
                            grades[j] = temp;
                        }
                    }
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
            }
            break;
        }

// display the total no. of students having less than or equal to 'x' weighted percentage.....

        case 'n':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {
                if (WP[i] <= x)
                {
                    y++;
                }
            }
            cout<< "Total number of students having weighted percentage less than or equal to " << x << ": " << y << endl;
            break;
        }

// display the total no. of students having greater than or equal to 'x' weighted percentage.....

        case 'o':
        {
            cout <<"Enter the value of weighted percentage: " << endl;
            cin >> x;

            for (int i = 0; i < count; i++)
            {
                if (WP[i] >= x)
                {
                    y++;
                }
            }

            cout<< "Total number of students having weighted percentage greater than or equal to " << x << ": " << y << endl;
            break;
        }

// display the total no. of students having 'x' grade.....

        case 'p':
        {
            cout <<"Enter the grade: " << endl;
            cin >> z;

            for (int i = 0; i < count; i++)
            {
                if (z == grades[i])
                {
                    y++;
                }
            }

            cout<< "Total number of students having grade " << z << ": " << y << endl;
            break;
        }

// Default display on invalid input.....

        default:
        {
            cout << "\nInvalid input. Please try again." << endl;
        }

    }

//Default Display.....

        cout << "\n Press 'S' to enter the record.\n Press 'D' to display all record.\n Press 'N' to enter the new student record.\n Press 'e' or 'E' to exit the program.\n\n Press '0' to sort the students record according to their Roll No. in ascending.\n Press '1' to sort the students record according to their Roll No. in descending.\n Press '2' to sort the students record according to their midterm marks in ascending.\n Press '3' to sort the students record according to their midterm marks in descending.\n Press '4' to sort the students record according to their finalterm marks in ascending.\n Press '5' to sort the students record according to their finalterm marks in descending.\n Press '6' to sort the students record according to their weighted percentage in ascending.\n Press '7' to sort the students record according to their weighted percentage in descending.\n Press '8' to sort the students record according to their grades in ascending.\n Press '9' to sort the students record according to their grades in descending.\n\n Press 'a' to display the students record greater than 'x' weighted percentage in descending order.\n Press 'b' to display the students record greater than 'x' weighted percentage in ascending order.\n Press 'c' to display the students record less than or equal to 'x' weighted percentage in descending order.\n Press 'd' to display the students record less than or equal to 'x' weighted percentage in ascending order.\n Press 'f' to display the students record greater than 'x' grade in descending order.\n Press 'g' to display the students record greater than 'x' grade in ascending order.\n Press 'h' to display the students record less than or equal to 'x' grade in descending order.\n Press 'i' to display the students record less than or equal to 'x' grade in ascending order.\n Press 'j' to display the students record with 'x' grade according to their roll no. in ascending order.\n Press 'k' to display the students record with 'x' grade according to their roll no. in descending order.\n Press 'l' to display the students record with 'x' grade according to their weighted percentage in ascending order.\n Press 'm' to display the students record with 'x' grade according to their weighted percentage in descending order.\n Press 'n' to display the total no. of students having less than or equal to 'x' weighted percentage.\n Press 'o' to display the total no. of students having greater than or equal to 'x' weighted percentage.\n Press 'p' to display the total no. of students having 'x' grade.\n\n Press 'q' to delete a student record.\n\nPlease Enter:";
        cin >> choice;

    }

    return 0;
}
