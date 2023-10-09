#include <iostream>
using namespace std;

class students
{
	public:
		int a;
		int b;
		int c;
		
	private:
		int x;		
		int y;		
		int z;		
		
};

int main()
{
	students myobj;
	myobj.a = 10;
	myobj.b = 20;
	myobj.c = 30;

	cout << myobj.a << endl;
	cout << myobj.b << endl;
	cout << myobj.c << endl;

return 0;
}