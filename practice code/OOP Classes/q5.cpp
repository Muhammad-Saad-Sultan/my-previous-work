// Inheritance in C++


/*********************************************Syntax*********************************************/


/*

// Derived Class syntax

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

*/


/*********************************************Example 1*********************************************/


/*

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}


*/


/*********************************************Example 2*********************************************/


/*

// Example: define member function without argument within the class 

#include <iostream> 
using namespace std; 

class Person { 
	int id; 
	char name[100]; 

public: 
	void set_p() 
	{ 
		cout << "Enter the Id:"; 
		cin >> id; 
		cout << "Enter the Name:"; 
		cin >> name; 
	} 

	void display_p() 
	{ 
		cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
	} 
}; 

class Student : private Person { 
	char course[50]; 
	int fee; 

public: 
	void set_s() 
	{ 
		set_p(); 
		cout << "Enter the Course Name:"; 
		cin >> course; 
		cout << "Enter the Course Fee:"; 
		cin >> fee; 
	} 

	void display_s() 
	{ 
		display_p(); 
		cout <<"Course: "<< course << "\nFee: " << fee << endl; 
	} 
}; 

int main() 
{ 
	Student s; 
	s.set_s(); 
	s.display_s(); 
	return 0; 
}

*/


/*********************************************Example 3*********************************************/


/*

// Example: define member function without argument outside the class 

#include<iostream> 
using namespace std; 

class Person 
{ 
	int id; 
	char name[100]; 
	
	public: 
		void set_p(); 
		void display_p(); 
}; 

void Person::set_p() 
{ 
	cout<<"Enter the Id:"; 
	cin>>id; 
	cout<<"Enter the Name:"; 
	cin>>name; 
} 

void Person::display_p() 
{ 
	cout<<endl<<"id: "<< id<<"\nName: "<<name; 
} 

class Student: private Person 
{ 
	char course[50]; 
	int fee; 
	
	public: 
		void set_s(); 
		void display_s(); 
}; 

void Student::set_s() 
{ 
	set_p(); 
	cout<<"Enter the Course Name:"; 
	cin>>course; 
	cout<<"Enter the Course Fee:"; 
	cin>>fee; 
} 

void Student::display_s() 
{ 
	display_p(); 
	cout<<"\nCourse: "<<course<<"\nFee: "<<fee<<endl; 
} 

int main() 
{ 
	Student s; 
	s.set_s(); 
	s.display_s(); 
	return 0; 
} 

*/


/*********************************************Example 4*********************************************/


/*

// Example: define member function with argument outside the class 

#include<iostream> 
#include<string.h> 
using namespace std; 

class Person 
{ 
	int id; 
	char name[100]; 
	
	public: 
		void set_p(int,char[]); 
		void display_p(); 
}; 

void Person::set_p(int id,char n[]) 
{ 
	this->id=id; 
	strcpy(this->name,n);		 
} 

void Person::display_p() 
{ 
	cout<<endl<<id<<"\t"<<name; 
} 

class Student: private Person 
{ 
	char course[50]; 
	int fee; 
	public: 
	void set_s(int,char[],char[],int); 
	void display_s(); 
}; 

void Student::set_s(int id,char n[],char c[],int f) 
{ 
	set_p(id,n); 
	strcpy(course,c); 
	fee=f; 
} 


void Student::display_s() 
{ 
	display_p(); 
	cout<<"t"<<course<<"\t"<<fee; 
} 

main() 
{ 
	Student s; 
	s.set_s(1001,"Ram","B.Tech",2000); 
	s.display_s(); 
	return 0; 
}

*/


/*********************************************Example 5*********************************************/


/*

// C++ program to demonstrate implementation 
// of Inheritance 

#include <bits/stdc++.h> 
using namespace std; 

// Base class 
class Parent { 
public: 
	int id_p; 
}; 

// Sub class inheriting from Base Class(Parent) 
class Child : public Parent { 
public: 
	int id_c; 
}; 

// main function 
int main() 
{ 
	Child obj1; 

	// An object of class child has all data members 
	// and member functions of class parent 
	obj1.id_c = 7; 
	obj1.id_p = 91; 
	cout << "Child id is: " << obj1.id_c << '\n'; 
	cout << "Parent id is: " << obj1.id_p << '\n'; 

	return 0; 
}

*/


/*********************************************Example 6*********************************************/


/*

// C++ Implementation to show that a derived class 
// doesn’t inherit access to private data members. 
// However, it does inherit a full parent object. 
class A { 
public: 
	int x; 

protected: 
	int y; 

private: 
	int z; 
}; 

class B : public A { 
	// x is public 
	// y is protected 
	// z is not accessible from B 
}; 

class C : protected A { 
	// x is protected 
	// y is protected 
	// z is not accessible from C 
}; 

class D : private A // 'private' is default for classes 
{ 
	// x is private 
	// y is private 
	// z is not accessible from D 
};

*/


/*********************************************Example 7*********************************************/


/*

// C++ program to explain 
// Single inheritance 
#include<iostream> 
using namespace std; 

// base class 
class Vehicle { 
public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle\n"; 
	} 
}; 

// sub class derived from a single base classes 
class Car : public Vehicle { 

}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj; 
	return 0; 
} 

*/


/*********************************************Example 8*********************************************/


/*

// Example: 

#include<iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a; 
	
	public: 
		void set_A() 
		{ 
			cout<<"Enter the Value of A="; 
			cin>>a; 
			
		} 
		void disp_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 


class B: public A 
{ 
	int b,p; 
	
	public: 
		void set_B() 
		{ 
			set_A(); 
			cout<<"Enter the Value of B="; 
			cin>>b; 
		} 
		
		void disp_B() 
		{ 
			disp_A(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void cal_product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	
	B _b; 
	_b.set_B(); 
	_b.cal_product(); 
	
	return 0; 
	
}

*/


/*********************************************Example 9*********************************************/


/*

// Example: 

#include<iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a; 
	
	public: 
		void set_A(int x) 
		{ 
			a=x;			 
		} 
	
		void disp_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 

class B: public A 
{ 
	int b,p; 
	
	public: 
		void set_B(int x,int y) 
		{ 
			set_A(x); 
			b=y; 
		} 
		
		void disp_B() 
		{ 
			disp_A(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void cal_product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	B _b; 
	_b.set_B(4,5); 
	_b.cal_product(); 
	
	return 0; 
}

*/


/*********************************************Example 10********************************************/


/*

// C++ program to explain 
// multiple inheritance 
#include <iostream> 
using namespace std; 

// first base class 
class Vehicle { 
public: 
	Vehicle() { cout << "This is a Vehicle\n"; } 
}; 

// second base class 
class FourWheeler { 
public: 
	FourWheeler() 
	{ 
		cout << "This is a 4 wheeler Vehicle\n"; 
	} 
}; 

// sub class derived from two base classes 
class Car : public Vehicle, public FourWheeler { 
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes. 
	Car obj; 
	return 0; 
}

*/


/*********************************************Example 11********************************************/


/*


*/