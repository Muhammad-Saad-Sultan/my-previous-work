#include<iostream>
#include<fstream>
using namespace std;

void first(char arr[13][6])
{
	system("cls");

cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=0;i<2;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(1/2) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	

system("cls");

if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=0;i<2;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
	system("cls");
cout<<"this seat is already occupied\n";	
}
		
}


void bussiness(char arr[13][6])
{
	system("cls");
	cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=2;i<7;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(3-7) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	
system("cls");
if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=2;i<7;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
	system("cls");
cout<<"this seat is already occupied\n";	
}
	
	
}


void economy(char arr[13][6])
{
	system("cls");
	cout<<"\nwe have following seats\n\n";
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=7;i<13;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
int r,c;
cout<<"\n\ntype row number(8-13) : ";cin>>r;
cout<<"\n\ntype col number(1-6) : ";cin>>c;	
system("cls");
if(arr[r-1][c-1]=='*')
{
	arr[r-1][c-1]='$';
	
cout<<"  1 2 3 4 5 6\n";
cout<<"  _____\n";
for(int i=7;i<13;i++)
{cout<<i+1<<"|";
	for(int j=0;j<6;j++)
	{
		cout<<arr[i][j]<<"|";
	}
	cout<<"\n";
	cout<<" -------------\n";
}
cout<<"\nyour seat is marked by $";
	
}
else if(arr[r-1][c-1]=='X')
{
cout<<"this seat is already occupied\n";	
}

}

int main()
{
	int opi;
	char arr[13][6];
	
	ifstream file;
	file.open("plane.txt");
	
	for(int i=0;i<13;i++)
	for(int j=0;j<6;j++)
	{
		file>>arr[i][j];
	}
	
	file.close();
	
	
	
	
cout<<"1.first class\n2.bussiness class\n3.economy class\n";
cout<<"type your opinion : ";cin>>opi;
system("cls");
for(int i=0;;i++)
{

if(opi==1)
{
	first(arr);
}

if(opi==2)
{
	bussiness(arr);
}

if(opi==3)
{
	economy(arr);
}
char y;

cout<<"\n\ndo you want to select ticket again\ntype here (Y/N) : ";cin>>y;
if(y=='Y')
continue;
else if(y=='N')
break;
}


	system("pause");
	return 0;
}