#pragma once

class Student
{
private:
	int n;
public:
	void setn(int n1) {
		n = n1;
	}
	int getn() {
		return n;
	}
	void operator=(Student& obj)
	{
		n = obj.n;
	}
};