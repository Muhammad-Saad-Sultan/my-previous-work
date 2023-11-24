/**************************************************************
                Submitted By: Rameez Ali
                Submitted To: Sir Imran Arshad
                Registration No.: L1F22BSCS0374
**************************************************************/
//Data in file should be seprated by only one space. Like,
//l1F22BSCS0374(ONE SPACE HERE)TTTFFFTFTFT
#include <iostream>
#include <fstream>
using namespace std;

float percentage(int sum);
int calculate_sum(char[],char[]);
char calculate_grade(int);
int main()
{
	ofstream fout1("answer.txt");
	fout1<<"TFFTFFTTTTFFTFTFTFTT";
	fout1.close();
	char ans[50];
    ofstream fout("result.txt");
    ifstream fin("test.txt");
    ifstream fin1("answer.txt");
    fin1.getline(ans,50);
    fin1.close();
    char id[50], record[50]; 
    float per;
    if (!fin.is_open()) 
	{
        cout << "File Not Found"<<endl;
    }
    if (!fout.is_open())
	{
        cout<<"File Not Found"<<endl;
    }
    else
    {
    while (fin.getline(id,50,' '))
    {
        fin.getline(record,50,'\n');
        //cout<<ans<<endl;
        //cout<<record<<endl;
        int result=calculate_sum(ans,record);
        float per=percentage(result);
        cout<<id<<" "<<record<<" "<<result<<" ";
        cout<<calculate_grade(per)<<endl;                           
        fout<<id<<" "<<record<<" "<<result<<" "<<calculate_grade(per)<<endl;
    }
    fout.close();
    fin.close();
	}
}
    char calculate_grade(int percentage)//Function to grade each student 
    {
     	char grade;
    	if(percentage>=90 && percentage<=100)
    	{
    		grade='A';
    		return grade;
		}
		else if(percentage>=80 && percentage<=89.99)
		{
			grade='B';
			return grade;
		}
		else if(percentage>=70 &&percentage<=79.99)
		{
			grade='C';
			return grade;
		}
		else if(percentage>=60 && percentage<=69.99)
		{
			grade='D';
			return grade;
		}
		else if(percentage>=0 && percentage<=59.99)
		{
			grade='F';
			return grade;
		}
	}
int calculate_sum(char ans[], char record[]) {
    int sum = 0;
    for (int i = 0; i < 20; i++) 
	{
        if (ans[i] == record[i] && ans[i] != ' ') 
		{
            sum=sum+2;
        }
		 if (ans[i]!=record[i] && record[i]!= ' ')
		 {
		 	sum=sum+1;
		 }
    }
    return sum;
}
float percentage(int sum)
{
	int perc=sum*100/40;
	return perc;
}  
