//        ********** Semester 2 ***********
//        *********** WEEK 8 TASK 2 **********
/* Function Overriding Without Virtual Function */

#include<iostream>
using namespace std;

class Animal
{
public:

    void sound()
    {
    cout<<"Animal makes sound"<<endl;
    }
};

class Dog : public Animal
{
public:

    void sound()
    {
    cout<<"Dog barks"<<endl;
    }
};

int main()
{
    Animal* a;
    Dog d1;
    a = &d1;
    a->sound();
    return 0;
}
