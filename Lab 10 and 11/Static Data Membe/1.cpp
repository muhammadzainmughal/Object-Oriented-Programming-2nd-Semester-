/*         LAB 10 AND 11 
Task 1 — Bank Account System
Create a class BankAccount containing:
• Account holder name 
• Balance 
Use a static variable to store:
• Total number of bank accounts  */

#include<iostream>
using namespace std;
class BankAccount
{
private:
    string name;
    double balance;

public:

    static int totalAccounts;
    // I used static int totalAccounts; to store one shared count of all BankAccount objects created.
    
	BankAccount(string n,double b)
    {
    name=n;
    balance=b;
    totalAccounts++;
    }

    void display()
    {
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
    }
};

int BankAccount::totalAccounts=0;

int main()
{
    BankAccount a1("Ali",5000);
    BankAccount a2("Ahmed",8000);
    BankAccount a3("Sara",10000);
    a1.display();
    a2.display();
    a3.display();
    
    cout<<"*******************" <<endl;
    cout<<"\nTotal Accounts = ";
    cout<<BankAccount::totalAccounts<<endl;

    return 0;
}
