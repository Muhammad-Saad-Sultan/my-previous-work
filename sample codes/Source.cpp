#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char arr1[100];
	cout << "Enter the name for first file: ";
	cin.getline(arr1, 100);
	ofstream fout;
	fout.open("input1.txt");
	if (fout.is_open())
	{
		fout << arr1;

	}
	fout.close();

	char arr2[100];
	cout << "Enter the name for Second file: ";
	cin.getline(arr2, 100);
	ofstream gout;
	gout.open("input2.txt");
	if (gout.is_open())
	{
		gout << arr2;

	}
	gout.close();

	char arr3;
	ifstream in;
	in.open("input1.txt");
	while (in)
	{
		arr3 = in.get();
		cout << arr3;
	}
	in.close();

	char arr4;
	ifstream inn;
	in.open("input2.txt");
	while (inn)
	{
		arr4 = inn.get();
		cout << arr4;
	}

	cout << arr1 << " " << arr2;
	in.close();


}
