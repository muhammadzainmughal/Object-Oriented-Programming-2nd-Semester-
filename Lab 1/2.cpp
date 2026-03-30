//        **********  Week 1 Semester 2 ***********
//        ********** LAB 1 TASK 2 **********
//         Repeat the previous program, but this time:
/*Use an array of structures to store details of multiple students.
 Allow the user to input details for multiple students.
 Call the displayStudentInfo() function for each student to display 
their full name and marks.*/       




#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string First_Name;
    string last_Name;
    int roll_Number;
    float Marks;

    void displayStudentInfo()
    {
        cout<<"Full Name: "<<First_Name<<" "<<last_Name<<endl;
        cout<<"Marks: "<<Marks<<endl;
    }
};   // i END STRUCTURE HERE 

int main()
{
    int n;                                     
    cout<<"Enter number of students: ";
    cin>>n;                                     

    Student students[100];                        

    for(int i=0;i<n;i++)                 
    {
        cout << "\nStudent " << i + 1 << " info\n";

        cout<<"First Name: ";
        cin>>students[i].First_Name;          

        cout<<"Last Name: ";
        cin>>students[i].last_Name;

        cout<<"Roll Number: ";
        cin>>students[i].roll_Number;

        cout<<"Marks: ";
        cin>>students[i].Marks;
    }

    cout << "\n--- Students Data ---\n";
    for(int i=0;i<n;i++)
    {
        students[i].displayStudentInfo();         
        cout<<"-------------------\n";
    }

    return 0;
}
