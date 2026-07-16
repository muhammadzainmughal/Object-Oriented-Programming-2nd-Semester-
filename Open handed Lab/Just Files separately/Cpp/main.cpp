#include<iostream>
#include "RentalSystem.h"
using namespace std;
int main()
{
    RentalSystem system;
    int choice;

    do       // ma ny menu ky lea loop use ki 
    {
    	cout<<"Designed By Muhammad Zain Mughal"<< endl;
        cout<<"\n ******* VEHICLE RENTAL SYSTEM ********"<<endl;
        cout<<"1. Add Vehicle"<<endl;
        cout<<"2. Register Customer"<<endl;
        cout<<"3. Rent Vehicle"<<endl;
        cout<<"4. Return Vehicle"<<endl;
        cout<<"5. Summary Report"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            system.addVehicle();
            break;

        case 2:
            system.registerCustomer();
            break;

        case 3:
            system.rentVehicle();
            break;

        case 4:
            system.returnVehicle();
            break;

        case 5:
            system.summary();
            break;

        case 6:
            cout<<"Good Bye"<<endl;
            break;

    default:
    cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=6);

    return 0;
}
