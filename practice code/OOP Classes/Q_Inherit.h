#include <iostream>
using namespace std;

class student
{
	private:
		int age;
	
	public:
		void setage(int age)
		{
			this ->age = age;
		}

		int getage()
		{
			return age;
		}

};

class toppers: public student
{
	private:
		char grade;

	public:
		toppers(int age, char grade)
		{
			this ->age = age;
			this ->grade = grade;
		}
		
}