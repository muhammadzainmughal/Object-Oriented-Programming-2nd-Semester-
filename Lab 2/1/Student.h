//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 1 **********

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

class Student {     // I CREATE A CLASSS
	public:
	string name;
	int rollNumber;
	float marks;
	
	void getData()
	{
		cout << "ENTER YOUR NAME: ";
		cin>> name;
		
		cout <<"Enter Roll NO: ";
		cin>> rollNumber;
		
		cout << "Enter your marks: ";
		cin>> marks;
	}
	
	void displayData()
	{
		cout << "**STUDENT INFORMATION**"<<endl;
		cout << "Name: "<< name << endl;
		cout << "Roll No: " << rollNumber <<endl;
		cout << "Marks: " << marks << endl;
	}
};

#endif
