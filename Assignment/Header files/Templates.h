#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
void searchById(vector<T*> items, int id)
{
    bool found = false;

    for(int i=0; i<items.size(); i++)
    {
        if(items[i]->getId() == id)
        {
            items[i]->display();
            found = true;
        }
    }

    if(!found)
    {
        cout<<"Record Not Found"<<endl;
    }
}

#endif
