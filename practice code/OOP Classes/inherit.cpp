#include "inherit.h"
#include <iostream>
using namespace std;

University(char* n, int rank, char** dept,int s)
{
	name = new char[getlength(n)];
	copy(n, name);
	char** departments = new char* [size];
	for (int i = 0; i < size; i++)
	{
		departments[i] = new char[getlength(dept[i]) + 1];
		copy(dept[i], departments[i]);
	}
	Rank = rank;
	size = s;
}
void setName(char* n)
{
	name = new char[getlength(n)];
	copy(n, name);
}
void setRank(int rank)
{
	Rank = rank;
}
void setDepartment(char** dept,int s)
{
	char** departments = new char* [size];
	for (int i = 0; i < size; i++)
	{
		departments[i] = new char[getlength(dept[i])+1];
		copy(dept[i], departments[i]);
	}
	size = s;
}
char* getName()
{
	return name;
}
char** getDepartments()
{
	cout << "Get Dept: " << endl;
	return departments;
}
int getRank()
{
	return Rank;
}
void copy(char* original, char* copied)
{
	int len = getlength(original)+1;
	for (int i = 0; i < len; i++)
	{
		copied[i]=original[i];
	}
	copied[len] = '\0';
}
int getlength(char* arr)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
//~University()
//{
//	cout << "Destructor Called!" << endl;
//	delete[] name;
//	for (int i = 0; i < size; i++)
//	{
//		delete[] departments[i];
//	}
//	delete departments;
//}