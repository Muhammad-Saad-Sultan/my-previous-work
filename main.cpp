#include <iostream>
#include "Header.h"
using namespace std;

Student* regrow(Student* temp, int size, Student obj)
{
	Student* newarr = new Student[size + 1];
	copy(newarr, temp, size);
	delete[] temp;
	newarr[size] = obj;
	return newarr;
}
void copy(Student* temp1, Student* temp2, int size)
{
	for (int i = 0; i < size; i++)
	{
		temp1[i] = temp2[i];
	}
}

int main()
{
	int size = 1;
	Student* s = new Student[size];
	s[0].setn(10);
	cout << "Obj 1 settled!" << endl;
	int n;
	cout << "Enter: ";
	cin >> n;
	Student temp;
	temp.setn(n);
	char ch;
	while (true)
	{
		cout << "Do you want to Regrow: ";
		cin >> ch;

		if (ch == 'n' || ch == 'N')
		{
			break;
		}
		cout << "Enter: ";
		cin >> n;
		temp.setn(n);
		s = regrow(s, size, temp);
		size++;
	}
	cout << "Re Grown Objects: ";
	for (int i = 0; i < size; i++)
	{
		cout << s[i].getn() << " ";
	}
	delete[] s;
}