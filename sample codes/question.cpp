/*

#include <iostream>
using namespace std;

int main()
{
    float sec_1_avg, sec_2_avg, sec_3_avg, sec_4_avg, sec_5_avg, sec_6_avg;
    char sec_1_name, sec_2_name, sec_3_name, sec_4_name, sec_5_name, sec_6_name;

    cout << "Enter name of section 1 (single alphabet): ";
    cin >> sec_1_name;
    cout << "Enter average of section 1: ";
    cin >> sec_1_avg;

    cout << endl;

    cout << "Enter name of section 2 (single alphabet): ";
    cin >> sec_2_name;
    cout << "Enter average of section 2: ";
    cin >> sec_2_avg;

    cout << endl;

    cout << "Enter name of section 3 (single alphabet): ";
    cin >> sec_3_name;
    cout << "Enter average of section 3: ";
    cin >> sec_3_avg;

    cout << endl;

    cout << "Enter name of section 4 (single alphabet): ";
    cin >> sec_4_name;
    cout << "Enter average of section 4: ";
    cin >> sec_4_avg;

    cout << endl;

    cout << "Enter name of section 5 (single alphabet): ";
    cin >> sec_5_name;
    cout << "Enter average of section 5: ";
    cin >> sec_5_avg;

    cout << endl;

    cout << "Enter name of section 6 (single alphabet): ";
    cin >> sec_6_name;
    cout << "Enter average of section 6: ";
    cin >> sec_6_avg;

    cout << endl;

    if (sec_1_avg > sec_2_avg && sec_1_avg > sec_3_avg && sec_1_avg > sec_4_avg && sec_1_avg > sec_5_avg && sec_1_avg > sec_6_avg)
    {
        cout << "Section '" << sec_1_name << "' has the highest average." << endl;
    }

    else if (sec_2_avg > sec_1_avg && sec_2_avg > sec_3_avg && sec_2_avg > sec_4_avg && sec_2_avg > sec_5_avg && sec_2_avg > sec_6_avg)
    {
        cout << "Section '" << sec_2_name << "' has the highest average." << endl;
    }

    else if (sec_3_avg > sec_1_avg && sec_3_avg > sec_2_avg && sec_3_avg > sec_4_avg && sec_3_avg > sec_5_avg && sec_3_avg > sec_6_avg)
    {
        cout << "Section '" << sec_3_name << "' has the highest average." << endl;
    }

    else if (sec_4_avg > sec_1_avg && sec_4_avg > sec_2_avg && sec_4_avg > sec_3_avg && sec_4_avg > sec_5_avg && sec_4_avg > sec_6_avg)
    {
        cout << "Section '" << sec_4_name << "' has the highest average." << endl;
    }

    else if (sec_5_avg > sec_1_avg && sec_5_avg > sec_2_avg && sec_5_avg > sec_3_avg && sec_5_avg > sec_4_avg && sec_5_avg > sec_6_avg)
    {
        cout << "Section '" << sec_5_name << "' has the highest average." << endl;
    }

    else
    {
        cout << "Section '" << sec_6_name << "' has the highest average." << endl;
    }

return 0;
}

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number of days: ";
    cin >> n;

    double amount = 0.01;
    for (int i = 1; i <= n; i++)
    {
        cout << "Amount at day " << i << " is: " << amount << endl;
        amount *= 2;
    }

    return 0;
}
