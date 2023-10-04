//tut 4
/*
#include <iostream>
using namespace std;

int glo=6;
void sum()
{
    int a;
    cout << glo;
}
int main ()
{
    int glo = 9;
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;
    sum();
    // cout<<"Hello! This is tutorial 4. \nHere the value of a is " << a << ". \nHere the value of b is " << b << ".";
    // cout<<"\nHere the value of pi is "<<pi;
    // cout<<"\nHere the value of c is "<<c;
    cout <<glo<< is_true;
return 0;
}
*/

//tut 5
/*
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n";
    cin >>num1;

    cout<<"Enter the value of num2:\n";
    cin >>num2;

    cout<<"The sum is "<< num1+num2;
return 0;
}
*/

// self task
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char op;

    cout << "Enter operator: \n";
    cin >> op;

    if(op == '+')
    {
        cout << "Enter the value of a:\n";
        cin >> a;
        cout << "Enter the value of b:\n";
        cin >> b;
        c=a+b;
        cout << "The sum is " << c << endl;
    }
    
    else if(op == '-')
    {
        cout << "Enter the value of a:\n";
        cin >> a;
        cout << "Enter the value of b:\n";
        cin >> b;
        c=a-b;
        cout << "The difference is " << c << endl;
    }
    
    else if(op == '*')
    {
        cout << "Enter the value of a:\n";
        cin >> a;
        cout << "Enter the value of b:\n";
        cin >> b;
        c=a*b;
        cout << "The product is " << c << endl;
    }
    
    else if(op == '/')
    {
        cout << "Enter the value of a:\n";
        cin >> a;
        cout << "Enter the value of b:\n";
        cin >> b;
        c=a/b;
        cout << "The division is " << c << endl;
    }

    else
    {
        cout << "Enter a valid operator";
    }

return 0;
}
*/

// tut 6
/*
#include <iostream>
using namespace std;
int main()
{
    int a=4, b=5;

    cout << "Following are the comparision operators" << endl;
    cout << "The value of a==b is: " << (a==b) << endl;
    cout << "The value of a!=b is: " << (a!=b) << endl;
    cout << "The value of a>=b is: " << (a>=b) << endl;
    cout << "The value of a<=b is: " << (a<=b) << endl;
    cout << "The value of a>b is: " << (a>b) << endl;
    cout << "The value of a<b is: " << (a<b) << endl;
    cout << endl;

    cout << "Following are the arithemetic operators" << endl;
    cout << "The value of a+b is: " << (a+b) << endl;
    cout << "The value of a-b is: " << (a-b) << endl;
    cout << "The value of a*b is: " << (a*b) << endl;
    cout << "The value of a/b is: " << (a/b) << endl;
    cout << "The value of a%b is: " << (a%b) << endl;
    cout << "The value of a++ is: " << (a++) << endl;
    cout << "The value of a-- is: " << (a--) << endl;
    cout << "The value of ++a is: " << (++a) << endl;
    cout << "The value of --a is: " << (--a) << endl;

    cout << "Following are the logical operators" << endl;
    cout << "The value of this logical and operator ( ( a % b ) && ( a == b ) ) is " << ( ( a % b ) && ( a == b ) ) << endl;
    cout << "The value of this logical or operator ( ( a % b ) || ( a = b ) ) is " << ( ( a % b ) || ( a = b ) ) << endl;


}
*/

// tut 7

// tut 12
#include <iostream>
using namespace std;
int main()
{
    // What is a pointer? ----->data types which holds the address of other data types.

    int a=3;
    int* b = &a;
    
    // & -----> (Address of) operator
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    
    // * -----> (value at) Dereference operator
    cout << "The value at address b is: " << *b << endl;

    // Pointer to Pointer 
    int **c = &b;
    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is: " << **c << endl;

return 0;
}