#include <iostream>
#include <string>
using namespace std;

int main()
{
    int students =2;
    int RN[students];
    float MM[students];
    float FM[students];
    float WP[students];
    char grades[students];
    int temp;
    // char temp2;
    // float temp3;
    // float temp4
    // float temp5;
    char choice;
    int count=0;

    cout << "Welcome to the students record program \n(i) Press '1' to enter the record \n(ii) press '2' to display all record \n(iii) Press 'e' or 'E' to exit the program" << endl;
    cin >> choice;



    while (choice != 'e' && choice != 'E')
    {
        switch (choice)
        {
        case '1':
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

            for (int i = 0; i < count; i++)
            {
                WP[i] = (((MM[i] * 100) / 40) + ((FM[i] * 100) / 60)) / 2;
            }
            for (int i = 0; i < count; i++)
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


        case '2':
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

        case '3':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '4':
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
         case '5':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '6':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '7':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <=count; j++)
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
         case '8':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
        } case '9':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '10':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '11':
        {
            for (int i = 0; i < count; i++)
            {
                for(int j = i+1; j <= count; j++)
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
         case '12':
        {
            for (int i = 0; i <count; i++)
            {
                for(int j = i+1; j <= count; j++)
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

        default:
        {
            cout << "Invalid input. Please try again." << endl;
        }

    }
        cout << "(i) Press '1' to enter the record \n(ii) press '2' to display all record \n(iii) Press 'e' or 'E' to exit the program \n Enter your choice: ";
        cin >> choice;

    }

    return 0;
}
