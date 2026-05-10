//        ********** Semester 2 ***********
//        ********** WEEK 4 TASK 2 **********
/* Parameterized Constructor - Bank Account */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:

    string accountNumber;
    string accountHolder;
    double balance;

public:

    // Parameterized Constructor
    BankAccount(string accNo, string holder, double bal)
    {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    // Display Function
    void showAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

#endif
