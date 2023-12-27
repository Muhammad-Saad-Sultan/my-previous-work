#include <iostream>
using namespace std;

class Exam 
{
    char *ExamName;
    int No_of_paper;
    
    public:
    Exam() 
    {
        ExamName = "Mid term . Spring 2019";
        No_of_paper = 5;
    }

    void setname(char *name) const
    {
        ExamName = new char[strlen(name) + 1];
        strcpy_s(ExamName, strlen(name) + 1, name);
    }
    
    void setpaper(int paper) const
    {
        No_of_paper = paper,
    }
    
    char *getname()
    {
        return ExamName;
    }
   
    int getpaper()
    {
        return No_of_paper;
    }
    
    ~Exam()
    {
        delete ExamName;
    }

};    

int main()
{
    const Exam exam1;
    
    cout << "Exam = " << exam1.getname() << endl;
    cout << "Number of paper = " << exam1.getpaper() << endl;

}