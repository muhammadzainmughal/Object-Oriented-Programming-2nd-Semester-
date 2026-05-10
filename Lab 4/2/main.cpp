//        ********** Semester 2 ***********
//        ********** WEEK 4 TASK 2 **********
/* Parameterized Constructor - Bank Account */

#include<iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    string accNo;
    string holder;
    double balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> holder;

    cout << "Enter Balance: ";
    cin >> balance;

    BankAccount b1(accNo, holder, balance);

    cout << endl;

    b1.showAccountDetails();

    return 0;
}
