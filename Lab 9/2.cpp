//        ********** Semester 2 ***********
//        ********** WEEK 9 task 2**********
/* Run-Time Polymorphism */
// in pdf is ka name quiz tha ****

#include<iostream>
using namespace std;

// sab sy phaley ma ny Base Class banyi
class Employee
{
public:
    virtual double calculateSalary()
    {
    cout<<"Base Employee salary calculation called." << endl;
    return 0;
    }
};

// phir ma ny Derived Class bnaayi
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double bonus;
public:

    PermanentEmployee(double bs, double b)
    {
    basicSalary = bs;
    bonus = b;
    }

    double calculateSalary()
    {
    return basicSalary + bonus;
    }
};

// phir ma ny aik or Derived Class bnayi
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(double hr, int hw)
    {
    hourlyRate = hr;
    hoursWorked = hw;
    }

    double calculateSalary()
    {
    return hourlyRate * hoursWorked;
    }
};

int main()
{
    Employee* emp;
    PermanentEmployee p1(40000, 5000);
    ContractEmployee c1(800, 30);
    
    emp = &p1;
    cout<<"Permanent Employee Salary: "<< emp->calculateSalary()
         << endl;

    // Contract Employee Salary
    emp = &c1;
    cout<<"Contract Employee Salary: " << emp->calculateSalary() << endl;

    return 0;
}
