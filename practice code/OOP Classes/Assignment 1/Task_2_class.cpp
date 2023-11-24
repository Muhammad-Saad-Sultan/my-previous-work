#include "Task_1_Header.h"
#include <iostream>

using namespace std;

// Constructor
AccountManagement::AccountManagement(char *accountTitle, long accountNumber, char accountType, double balance)
    : accountNumber(accountNumber), accountType(accountType), balance(balance)
{
    // Allocate memory for accountTitle and copy the input string
    int titleLength = 0;
    while (accountTitle[titleLength] != '\0')
    {
        titleLength++;
    }

    this->accountTitle = new char[titleLength + 1];

    for (int i = 0; i <= titleLength; ++i)
    {
        this->accountTitle[i] = accountTitle[i];
    }
}

// Destructor
AccountManagement::~AccountManagement()
{
    // Free the memory allocated for accountTitle
    delete[] accountTitle;
}

// Function to deposit amount into the account
void AccountManagement::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid deposit amount. Please enter a positive value." << endl;
    }
}

// Function to withdraw amount from the account
void AccountManagement::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawal of " << amount << " successful. New balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid withdrawal amount. Please enter a valid amount within your balance." << endl;
    }
}

// Function to get the account title
char *AccountManagement::getAccountTitle() const
{
    return accountTitle;
}

// Function to get the account number
long AccountManagement::getAccountNumber() const
{
    return accountNumber;
}

// Function to get the account type
char AccountManagement::getAccountType() const
{
    return accountType;
}

// Function to get the account balance
double AccountManagement::getBalance() const
{
    return balance;
}
