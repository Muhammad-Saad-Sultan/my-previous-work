#include <iostream>
#include <fstream>
using namespace std;

int length(ifstream&);
void read(int[],ifstream&);
int main ()
{
  ifstream fin("binary.txt");
  int len=length(fin);
  fin.close();
  int *num=new int[len];
  fin.open("binary.txt");
    read(num,fin); 
    
    int* max = new int[len]; 
    int* loc = new int[len];
    int x=0;
  
	int count=0;
    for (int i=0;i<=len;i++) 
	{
        if (num[i]==1) 
		{
            count++;
        }
        else if(num[i]==0||i==len) 
		{
            max[x]=count;
            loc[x] = i;
            count=0;
            x++;
        }
    }
    cout<<"- Array data: ";
    for(int i=0;i<len;i++)
    {
    	cout<<num[i];
	}
	cout<<endl;
    int maximum=max[0];
    int location=0;
    for (int i=0;i<x;i++) 
	{
        if (max[i]>maximum) 
		{
            maximum=max[i];
            location=i;
        }
    }
    cout<<endl;
    cout<<"- Maximum consecutive ones are: ";
    for (int i=0;i<maximum;i++) 
	{
        cout<<"1";
    }
    cout << endl;
    cout<<"- Starting index is: "<<loc[location]-maximum<<endl;
    cout<<"- Length is: "<<maximum<<endl;
    fin.close();
    delete[] num;
    delete[] max;
    delete[] loc;
      return 0;
}
int length(ifstream& fin)
{
	int l=0;
	char num;
	while(fin>>num)
	{
	   	l++;
	}
	return l;
}
void read(int num[],ifstream& fin)
{
	int i=0;
	char n;
	while(fin>>n)
	{
		if(n=='1')
		{
			num[i]=1;
			i++;
		}
		else if(n=='0')
		{
			num[i]=0;
			i++;
		}
	}
}

