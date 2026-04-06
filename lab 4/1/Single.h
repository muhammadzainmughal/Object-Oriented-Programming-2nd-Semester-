//        ********** Semester 2 ***********
//        ********** LAB 5 TASK 1 **********

#ifndef SINGLE_H
#define SINGLE_H
#include <iostream>
using namespace std;

class Person  // bASE class   
{ public:
    string name;
    int age;

    void display_person_info();
};

class Student : public Person
{
public:
    int student_id;

    void display_student_info();
};

    void Person::display_person_info()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

    void Student::display_student_info()  // student information display karne ky lea 
{
    cout<<"Student ID: "<<student_id<<endl;
}

#endif
