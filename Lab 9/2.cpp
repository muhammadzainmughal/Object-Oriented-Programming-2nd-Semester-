//        ********** Semester 2 ***********
//        ********** WEEK 9 TASK 2 **********
/* Count Number of Lines in File */

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("notes.txt");
    string line;
    int count = 0;

    while(getline(fin, line))
    {
    count++;
    }

    fin.close();
    cout<<"Total Number of Lines: "<<count<<endl;
    return 0;
}
