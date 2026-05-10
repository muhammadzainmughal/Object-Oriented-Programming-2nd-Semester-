#include "Hierarchical.h"

int main()
{
    Developer d;
    Designer ds;

    cout<<"Enter Developer Name: ";  // developer 
    cin>>d.name;
    cout<<"Enter Salary: ";
    cin>>d.salary;

    cout<<"Enter Programming Language: ";
    cin>>d.programming_language;

    cout<<"\nEnter Designer Name: ";   // designer 
    cin>>ds.name;
    cout<<"Enter Salary: ";
    cin>>ds.salary;
    cout<<"Enter Design Tool: ";
    cin>> ds.design_tool;

    cout<<"\nDeveloper Info:\n";
    d.display_employee();        // ma ny outputr display ki 
    d.display_developer();

    cout<<"\nDesigner Info:\n";
    ds.display_employee();
    ds.display_designer();

    return 0;
}
