      // ******* Lab 4 ********
      //   Task 1 _ Single Inheritance 

#include "Single.h"

int main()
{
    Student s;
    cout<<"Enter Name: ";
    cin>>s.name;

    cout<<"Enter Age: ";
    cin>>s.age;

    cout<<"Enter Student ID: ";
    cin>>s.student_id;

    cout<<"\nStudent Information:\n";
    s.display_person_info();
    s.display_student_info();

    return 0;
}
