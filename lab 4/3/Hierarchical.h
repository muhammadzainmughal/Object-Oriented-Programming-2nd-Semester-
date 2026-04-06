//        ********** Semester 2 ***********
//        ********** LAB 5 TASK 3 **********

#ifndef HIERARCHICAL_H
#define HIERARCHICAL_H
#include <iostream>
using namespace std;

class Employee  // sab sy pahley ma ny aik class bnayi 
{
public:
    string name;
    double salary;
    void display_employee();  // i make function inside class 
};

    class Developer : public Employee   // class 2
{
public:
    string programming_language;
    void display_developer();
};

    class Designer : public Employee   // class 3
{
public:
    string design_tool;
    void display_designer();
};

   void Employee::display_employee()  // first function
{
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}

    void Developer::display_developer() // function no. 2
{
    cout<<"Programming Language: "<<programming_language<< endl;
}

void Designer::display_designer()
{
    cout<< "Design Tool: "<<design_tool<<endl;
}

#endif
