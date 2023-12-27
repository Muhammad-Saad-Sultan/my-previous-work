#pragma once

class University
{
private:
	char* name;
	int Rank;
	char** departments;
	static int size;
public:

	University(char* ,int,char**, int);
	//~University();
	void setName(char*);
	void setRank(int);
	void setDepartment(char**,int);
	
	char* getName();
	char** getDepartments();
	int getRank();

	void copy(char*, char*);
	int getlength(char*);
};
