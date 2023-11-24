#include "Task_2_Header.h"
#include <iostream>

using namespace std;

const int MAX_TITLE_LENGTH = 100;

int main()
{
    // Get user input for account details
    char title[MAX_TITLE_LENGTH];
    long long number;
    char type;
    double initialBalance;

    cout << "Enter Account Title: ";
    cin.getline(title, MAX_TITLE_LENGTH);

    cout << "Enter Account Number: ";
    cin >> number;

    cout << "Enter Account Type (S for savings, C for checking, etc.): ";
    cin >> type;

    cout << "Enter Initial Balance: Rs.";
    cin >> initialBalance;

    // Create an account
    AccountManagement account(title, number, type, initialBalance);

    // Display initial account information
    cout << "\nAccount Information:" << endl;
    cout << "Title: " << account.getAccountTitle() << endl;
    cout << "Number: " << account.getAccountNumber() << endl;
    cout << "Type: " << account.getAccountType() << endl;
    cout << "Balance: Rs." << account.getBalance() << endl;

    // Deposit and withdraw some amounts
    double depositAmount, withdrawAmount;

    cout << "\nEnter amount to deposit: Rs.";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter amount to withdraw: Rs.";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display updated account information
    cout << "\nUpdated Account Information:" << endl;
    cout << "Title: " << account.getAccountTitle() << endl;
    cout << "Number: " << account.getAccountNumber() << endl;
    cout << "Type: " << account.getAccountType() << endl;
    cout << "Balance: Rs." << account.getBalance() << endl;

    return 0;
}
