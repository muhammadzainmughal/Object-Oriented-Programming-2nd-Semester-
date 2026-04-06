//        ********** Semester 2 ***********
//        ********** LAB 4 TASK 2 **********

#ifndef MULTILEVEL_H
#define MULTILEVEL_H
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display_person();
};

   class Employee : public Person
{
public:
    int employee_id;

    void display_employee();
};

    class Manager : public Employee
{
public:
    string department;
    void display_manager();
};

void Person::display_person()
 {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

  void Employee::display_employee()
{
    cout<< "Employee ID: " << employee_id << endl;
}

void Manager::display_manager()
{
    cout<< "Department: "<<department <<endl;
}
  
#endif
