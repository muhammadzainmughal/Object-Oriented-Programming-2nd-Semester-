/*         LAB 10 AND 11

Task 1
Create a hospital system where different staff members perform different 
duties.
Create abstract class HospitalStaff with:
• Staff name 
• Pure virtual function performDuty() 
Derived classes:
• Doctor 
• Nurse 
• Receptionist */


#include<iostream>
using namespace std;
class HospitalStaff
{
protected:
    string name;

public:

    HospitalStaff(string n)
    {
        name=n;
    }
virtual void performDuty()=0;
};

class Doctor:public HospitalStaff
{
public:

    Doctor(string n):HospitalStaff(n)
    { }
    void performDuty()
    {
    cout<<name<<" is treating patients."<<endl;
    }
};

class Nurse:public HospitalStaff
{
public:

    Nurse(string n):HospitalStaff(n)
    { }

    void performDuty()
    {
    cout<<name<<" is taking care of patients."<<endl;
    }
};

class Receptionist:public HospitalStaff
{
public:

    Receptionist(string n):HospitalStaff(n)
    { }
    void performDuty()
    {
    cout<<name<<" is managing appointments."<<endl;
    }
};

int main()
{
	cout << "***********************"<<endl;
    Doctor d("Ali");
    Nurse n("Sara");
    Receptionist r("Ahmed");
    
    
    d.performDuty();
    n.performDuty();
    r.performDuty();

    return 0;
}
