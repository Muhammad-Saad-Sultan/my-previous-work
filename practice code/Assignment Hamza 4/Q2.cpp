#include<iostream>
#include<fstream>
using namespace std;

void displaySeats(char arr[13][6], int startRow, int endRow)
{
	system("cls");

	cout << "\nWe have the following seats\n\n";
	cout << "  1 2 3 4 5 6\n";
	cout << "  _____\n";
	for (int i = startRow; i <= endRow; i++)
	{
		cout << i + 1 << "|";
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j] << "|";
		}
		cout << "\n";
		cout << " -------------\n";
	}
}

void reserveSeat(char arr[13][6], int startRow, int endRow)
{
	displaySeats(arr, startRow, endRow);

	int r, c;
	cout << "\n\nType row number(" << startRow + 1 << "-" << endRow + 1 << "): ";
	cin >> r;
	cout << "\n\nType col number(1-6): ";
	cin >> c;

	system("cls");

	if (arr[r - 1][c - 1] == '*')
	{
		arr[r - 1][c - 1] = '$';

		displaySeats(arr, startRow, endRow);

		cout << "\nYour seat is marked by $";
	}
	else if (arr[r - 1][c - 1] == 'X')
	{
		system("cls");
		cout << "This seat is already occupied\n";
	}
}

void firstClass(char arr[13][6])
{
	reserveSeat(arr, 0, 1);
}

void businessClass(char arr[13][6])
{
	reserveSeat(arr, 2, 6);
}

void economyClass(char arr[13][6])
{
	reserveSeat(arr, 7, 12);
}

int main()
{
	int option;
	char arr[13][6];

	ifstream file;
	file.open("ticket.txt");

	for (int i = 0; i < 13; i++)
		for (int j = 0; j < 6; j++)
		{
			file >> arr[i][j];
		}

	file.close();

	cout << "1. First Class\n2. Business Class\n3. Economy Class\n";
	cout << "Type your option: ";
	cin >> option;
	system("cls");

	for (;;)
	{
		if (option == 1)
		{
			firstClass(arr);
		}

		if (option == 2)
		{
			businessClass(arr);
		}

		if (option == 3)
		{
			economyClass(arr);
		}

		char choice;
		cout << "\nDo you want to select a ticket again? (Y/N): ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
	}

	system("pause");
	return 0;
}
