 /*
#include <iostream>
using namespace std;

int main ()

{
//task 1

    char z;
    char Z;

    cin >> z;
    cin >> Z;

    if (z>='a' && z <='z')
        cout << "small";
    else if (Z >='A' && Z<= 'Z')
        cout << "capital";

    cout << "_______________________________________" << endl;

}
    */

//task 2

/*

#include<stdio.h>
using namespace std;

int is_Multiple(int n1, int n2)
{
    return n1 % n2 == 0;
}
int main()
{
    int n1, n2;

    printf( "Input the first integer : " );
    scanf("%d", &n1);
    printf( "Input the second integer: " );
    scanf("%d", &n2);

    if(is_Multiple(n1, n2))
        printf( "\n%d is a multiple of %d.\n", n1, n2 );
    else
        printf( "\n%d is not a multiple of %d.\n", n1, n2 );

    return 0;
}

*/

//task 3

/*

#include <iostream>
using namespace std;

    int main()
    {
    	float n1,n2,n3,n4,tot,avrg;
		cout << "\n\n Compute the total and average of four numbers :\n";
		cout << "----------------------------------------------------\n";
        cout<<" Input 1st two numbers (separated by space) : ";
    	cin>> n1 >> n2;
        cout<<" Input last two numbers (separated by space) : ";
    	cin>> n3 >> n4;
    	tot=n1+n2+n3+n4;
		avrg=tot/4;
        cout<<" The total of four numbers is : "<< tot << endl;
        cout<<" The average of four numbers is : "<< avrg << endl;
        cout << endl;
        return 0;
    }

*/

//task 4

/*

#include<iostream>
using namespace std;
int main()
{
	int ITC,Eng,LT,PS,BE,Ent;
	int total;
	float percent;
	cout<<"Enter marks of Introduction To Computing = ";
	cin>>ITC;
	cout<<"enter marks of English = ";
	cin>>Eng;
	cout<<"enter marks of Logic Thinking = ";
	cin>>LT;
	cout<<"enter marks of Pakistan Studies = ";
	cin>>PS;
	cout<<"enter marks of Basic Electronics = ";
	cin>>BE;
	cout<<"enter marks of Enterpreneurship of Business = ";
	cin>>Ent;
	total= ITC,Eng,LT,PS,BE,Ent;
	percent=total/5.0;
	if(percent>=90)
	{
		cout<<"Grade=A";
	}
	else if(percent>=80)
	{
		cout<<"Grade=B";
	}
	else if(percent>=70)
	{
		cout<<"Grade=C";
	}
	else if(percent>=60)
	{
		cout<<"Grade=D";
	}
	else if(percent>=40)
	{
		cout<<"Grade=E";
	}
	else
	{
		cout<<"Grade F";
	}
}

*/

//task 5

/*

#include <iostream>
using namespace std;
int main()
{
    int number, last_number, count = 0;
    cout << "Please enter a six digit number:" << endl;
    cin >> number;

    while (count < 6)
    {

         last_number = number % 10;


        if (last_number == 0)
            cout << "Zero ";
        else if (last_number == 1)
            cout << "One ";
        else if (last_number == 2)
            cout << "Two ";
        else if (last_number == 3)
            cout << "Three ";
        else if (last_number == 4)
            cout << "Four ";
        else if (last_number == 5)
            cout << "Five ";
        else if (last_number == 6)
            cout << "six ";
        else if (last_number == 7)
            cout << "Seven ";
        else if (last_number == 8)
            cout << "Eight ";
        else if (last_number == 9)
            cout << "Nine ";


        number = number / 10;
        count++;


    }
    cout << endl;
    return 0;

}

*/

//task 6

/*

#include <iostream>
using namespace std;

int main() {

    double n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // check if n1 is the largest number
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    // check if n2 is the largest number
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;

    // if neither n1 nor n2 are the largest, n3 is the largest
    else
        cout << "Largest number: " << n3;

    return 0;
}

*/

//task 7

/*

#include <iostream>

using namespace std;

int main() {
  // Prompt the user for a floating-point number
  cout << "Enter a floating-point number: ";
  double num;
  cin >> num;

  // Calculate the ceiling of the number
  int ceilingNum;
  if (num >= 0) {
    ceilingNum = (int) (num + 0.99999999999999999);
  } else {
    ceilingNum = (int) num;
  }

  // Print the ceiling of the number
  cout << "The ceiling of " << num << " is " << ceilingNum << "." << endl;
  return 0;
}

*/

//task 8

/*

#include <iostream>

using namespace std;

int main() {
  // Prompt the user for a floating-point number
  cout << "Enter a floating-point number: ";
  double num;
  cin >> num;

  // Calculate the floor of the number
  int floorNum;
  if (num >= 0) {
    floorNum = (int) num;
  } else {
    floorNum = (int) (num - 0.99999999999999999);
  }

  // Print the floor of the number
  cout << "The floor of " << num << " is " << floorNum << "." << endl;
  return 0;
}

*/

//task 9

/*

#include<iostream>
using namespace std;

int main()
{

float bmi,w,h; //w=weight , h=height
cout<<"Please Enter your weight in Pounds : ";
    cin>>w;
cout<<"Please Enter your Height in Inches : ";
    cin>>h;
bmi=703*(w/(h*h)) ;
cout<<"Your BMI is : "<<bmi<<endl;

if(bmi>25)
    cout<<"Overweight";
else if(bmi<25 && bmi>18.5)
    cout<<"Optimal";
else
    cout<<"Underweight";
return 0;
}

*/

//task 10

/*

#include <iostream>

using namespace std;

#define OUNCE_TO_POUND 0.0625
#define GRAM_TO_KILOGRAM 0.001

int main() {
  // Prompt the user for the number of chocolates and the weight of a single chocolate
  cout << "Enter the number of chocolates and the weight of a single chocolate: ";
  int numChocolates;
  double weightPerChocolate;
  cin >> numChocolates >> weightPerChocolate;

  // Prompt the user for the unit of measurement
  cout << "Enter the unit of measurement (O for ounces, P for pounds, G for grams, K for kilograms): ";
  char unit;
  cin >> unit;

  // Calculate the total weight of the chocolates
  double totalWeight;
  if (unit == 'O') {
    // The weight is already in ounces, so we don't need to do any conversion
    totalWeight = numChocolates * weightPerChocolate;
  } else if (unit == 'P') {
    // Convert the weight to ounces and then calculate the total weight
    totalWeight = numChocolates * weightPerChocolate * OUNCE_TO_POUND;
  } else if (unit == 'G') {
    // Convert the weight to kilograms and then calculate the total weight
    totalWeight = numChocolates * weightPerChocolate * GRAM_TO_KILOGRAM;
  } else if (unit == 'K') {
    // The weight is already in kilograms, so we don't need to do any conversion
    totalWeight = numChocolates * weightPerChocolate;
  } else {
    // If the user enters an invalid unit, display an error message
    cout << "Invalid unit of measurement." << endl;
    return 1;
  }

  // Print the total weight of the chocolates
  cout << "The total weight of the chocolates is " << totalWeight << "." << endl;
  return 0;
}

*/
