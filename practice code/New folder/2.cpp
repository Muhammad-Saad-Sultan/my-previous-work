#include<iostream>
using namespace std;
//int main()
//{
	/*int a[] = { 10,20,30,40,50,60 };
	int* ptr;
	ptr = a;
	cout << *++ptr;
	cout << *(++ptr);*/

	/*int* p, * q;
	int a[] = { 10,11,-1,56,67,5,4 };
	p = a;
	cout << *p << endl;
	cout << (*p)++ << endl;
	//cout << *p << endl;

	cout << *p++ << endl;
	//cout << *p << endl;

	cout << *++p << endl;
	//cout << *p << endl;

	q = p + 3;
	cout << *q - 3 << endl;
	cout << *--p + 5 << endl;
	cout << *p + *q << endl;
	system("pause");
}*/
int main() {
	int y[] = { 12,15,36,74 };
	int* p = y;
	cout << (*p)++<<"\t";
	cout << *p;
	/*int* p, * q;
	int a[] = {10,11,-1,56,67,5,4};
	p = a;
	cout << *p<<endl;
	cout << (*p)++ << "\t" << *p++ << "\t" << *++p << endl;
	cout << *p;
	q = p + 3;
	cout << *q - 3<<endl;
	cout << *--p + 5<<endl;
	cout << *p + *q<<endl;
	*/
	//int* u = NULL;  // canot derefernece a null pointer
	//cout << *u;
	/*char str[] = "welcome to faiza lecturers";
	char* ptr = str;
	cout << *ptr<<endl;//w
	cout << *(ptr++ + 1) << endl;//e
	cout << *((ptr-- + 5) - 1) + 5<<endl;//p
	cout << *(++ptr + 10) - 32<<endl;//j
	cout << *ptr << "\t" << *++ptr << "\t" << *--ptr;*/
	//e     e     w
	
	cout << endl<<sizeof(char)<<endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(int*)<<endl;

	system("pause");
}