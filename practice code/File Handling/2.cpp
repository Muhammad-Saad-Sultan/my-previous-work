/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;

    fin.open("input.txt");
    {
        if (!fin)
        {
            cout << "File not opened successfully!" << endl;
        }

        else
        {
            char ch;

            while(1)
            {
                fin >> ch;

                if (fin.eof())
                {
                    break;
                }

                cout << ch;
            }
        }
    }
    fin.close();

return 0;
}
*/


int length(const char* str);
char* copyStr(const char * sourceStr);

class Animal
{
    private:
        int noofLegs; 
        char name; 
        char color;
        
    public:
        // constructors
        Animal() 
        { 
            noofLegs = 0; 
            name = nullptr; 
            color = nullptr; 
        }

        Animal(const int& no, char* n, char* c) 
        { 
            setNoOfLegs (no); 
            setName(); 
            setColor(); 
        }

        Animal(const Animal & a) 
        { 
            setNoOfLegs (a.noOfLegs); 
            setName(a.name); 
            setColor(a.color); 
        }

        // destructor
        ~Animal() 
        {
            delete[] name; 
            delete[] color; 
            name = nullptr;
            color = nullptr;
        } 

        // getters and setters
        int getNoOfLegs() const 
        { 
            return noofLegs; 
        }

        void setNoOfLegs(const int n) 
        { 
            noofLegs =; 
        }

        char getName() const 
        { 
            return copyStr(name); 
        } 

        void setName(char*) 
        { 
            name = ; 
        }

        char* getColor() const 
        { 
            return copyStr(cp); 
        } 

        void setColor(char*) 
        { 
            color copyStr(); 
        }

        void display();

};