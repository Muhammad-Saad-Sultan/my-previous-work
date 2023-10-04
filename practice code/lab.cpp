/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num1, num2, result;

    num1=10;
    num2=20;
    result = num1 + num2;
    cout << result;

    //create new file
    ofstream newfile("Newfile.txt");
    newfile.close();

    system("pause");
return 0;
}
*/

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100] = "This is my New File.";
    ofstream out ("Newfile.txt");
    out << arr;
    out.close();
return 0;
}
*/
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100] = "534861";
    ofstream out;
    out.open("Newfile.txt" , ios::app);

    if(out.is_open())
    {
        cout << arr;
        cout << endl << "DONE";
    }

    else
    {
        cout << endl << "ERROR........";
    }

    out.close();

return 0;
}
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
        
return 0;
}