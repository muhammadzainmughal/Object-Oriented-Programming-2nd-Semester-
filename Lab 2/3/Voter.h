//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 3 **********

#ifndef VOTER_H
#define VOTER_H

#include <iostream>
#include <string>
using namespace std;

// first all all i made a class
class Voter {
public:
    string name;    // I Make 2 vaiarbles 
    int age;       

    void getData();        // then I Make functions 
    bool isEligible();   
};

void Voter::getData()      //i define functions outside class
{
    cout<<"*****ENTER YOUR DETAILS******"<<endl;
	cout<<endl;                                    
	
	cout<<"Enter Name: ";
    cin>>name;

    cout<<"Enter Age: ";
    cin>>age;
}

bool Voter::isEligible()
{
    if(age>18)  // i used condition 
    return true;
    else
    return false;
}

#endif
