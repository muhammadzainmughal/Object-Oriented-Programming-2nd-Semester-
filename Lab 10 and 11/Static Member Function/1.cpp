/*           LAB 10 AND 11
Task 1
Create a class Employee with:
• Employee ID 
• Employee name 
Use:
• Static variable for company name 
• Static member function to display company information  */


#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:

    static string company;

    Employee(int i,string n)
    {
        id=i;
        name=n;
    }

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }

    static void showCompany()
    {
        cout<<"Company Name = "<<company<<endl;
    }
};

string Employee::company="ABC Software House";

int main()
{
    Employee e1(1,"Ali");
    Employee e2(2,"Ahmed");

    e1.display();
    e2.display();

    Employee::showCompany();

    return 0;
}
