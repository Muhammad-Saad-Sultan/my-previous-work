#include <iostream>
#include "inherit.h"
using namespace std;
int size = 0;

int main()
{
	char name[20];
	cin >> name;
	int rank;
	cout << "Enter Rank: ";
	cin >> rank;
	int s;
	cout << "How Many departments are: ";
	cin >> s;
	char** dept = new char* [s];
	for (int i = 0; i < s; i++)
	{
		dept[i] = new char[20] {'F','O','I','T','\0'};
	}
	University ucp(name,rank,dept,s);
	cout << "University: " << ucp.getName() << endl;
	cout << "Rank: " << ucp.getRank() << endl;
	char** ret = ucp.getDepartments();
	cout<<ret[0];
	return 0;
}