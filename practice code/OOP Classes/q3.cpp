#include <iostream>
using namespace std;

class Book
{
	public:

        string type, name, color;
        int issuance, price;

        Book()
        {
            type = " ";
            name = " ";
            color = " ";
            issuance = 0;
            price = 0;
        
        }

        void printname()
        {
            cout << "This book is " << type << ". Its name is " << name << ".Its theme color is " << color << ". This book was issued on " << issuance << ". Its price is " << price << "." << endl;
        }

        ~Book()
        {
            cout << "This Book's data is deleted." << endl;
        }

};

int main()
{
    int num = 3;
    Book obj[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Book: " << i+1 << endl;

        cout << "Type of Book: ";
        cin >> obj[i].type;

        cout << "Name of Book: ";
		cin >> obj[i].name;

        cout << "Theme color of Book: ";
		cin >> obj[i].color;

        cout << "Issuance date of Book: ";
		cin >> obj[i].issuance;

        cout << "Price of Book: ";
		cin >> obj[i].price;

        cout << endl;
    }

    for (int i=0; i < num; i++)
	{
		cout << "Book: " << i+1 << endl;

		obj[i].printname();

		cout << endl;
	}

}