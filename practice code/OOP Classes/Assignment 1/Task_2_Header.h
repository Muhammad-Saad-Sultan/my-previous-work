#pragma once

class AccountManagement
{
private:
    char *accountTitle;
    long accountNumber;
    char accountType;
    double balance;

public:
    // Constructor should allocate memory for accountTitle
    AccountManagement(char *accountTitle, long accountNumber, char accountType, double balance);

    // Destructor should free the memory allocated for accountTitle
    ~AccountManagement();

    void deposit(double amount);
    void withdraw(double amount);

    char *getAccountTitle() const;
    long getAccountNumber() const;
    char getAccountType() const;
    double getBalance() const;
};
