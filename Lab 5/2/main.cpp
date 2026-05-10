      /* Lab Task 2
         Multilevel Inheritance */
         
#include "Multilevel.h"

int main()
{
    Manager m;
    cout<<"Enter Name: ";
    cin>>m.name;
    cout<<"Enter Age: ";
    cin>>m.age;

    cout<<"Enter Employee ID: ";
    cin>>m.employee_id;
    cout<<"Enter Department: ";
    cin>> m.department;
    cout<<"\nManager Information:\n";
    
	m.display_person();  // ma ny functions ko call kea 
    m.display_employee();
    m.display_manager();

    return 0;
}
