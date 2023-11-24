// Encapsulation in C++

/*

// Example 1

#include <iostream>
using namespace std;

class temp
{
	int a;
    int b;
    
    public:

    int solve(int input)
    {
        a=input;
        b=a/2;
        return b;
    }

};

int main() 
{
    int n;
    cin>>n;
    
    temp half;
    
    int ans=half.solve(n);
    cout<<ans<<endl;
	
}

*/

/*

// Example 2

#include <iostream>
using namespace std;

class 
{

    public:

    

}

int main()
{

return 0;
}

*/

/**/

// Example 3

#include <iostream>
using namespace std;

class Employee 
{
    private:

        int salary;

    public:

    void setSalary(int s) 
    {
        salary = s;
    }

    int getSalary() 
    {
        return salary;
    }

};
 
int main() 
{
    Employee myObj;

    myObj.setSalary(50000);

    cout << myObj.getSalary();

return 0;
}
