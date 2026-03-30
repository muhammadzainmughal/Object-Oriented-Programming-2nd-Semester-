//        ********** Semester 2 ***********
//        ********** LAB 1 TASK 1 **********
//        This program is Task 1 of My Lab 
/*         Declares a structure named Student to store:
? First Name
? Last Name
? Roll Number
? Marks
           Includes a member function displayStudentInfo() to:
? Display the full name of the student. 
? Display the marks of the student.
          Uses a structure variable to:
? Assign values to the data members.
? Call the member function to display the student's information.*/       


#include <iostream>               
using namespace std;       

struct Student   // A structure for students 
{
    string FirstName;        
    string LastName;      
    int RollNumber;        
    float Marks;          

    void displayStudentInfo()  // i make a member function for disolay 
    {
    cout<<"Full Name: "<<FirstName<<" "<<LastName<<endl; 
    cout<<"Marks: " <<Marks<<endl;                           
};  // structure end 

int main()
{
    Student s1;                        
    s1.FirstName = "Ali";              
    s1.LastName = "Khan";
    s1.RollNumber = 101;             
    s1.Marks = 88.2;                   

    s1.displayStudentInfo();  // I CALLED FUNCTION 

    return 0;                           
}
