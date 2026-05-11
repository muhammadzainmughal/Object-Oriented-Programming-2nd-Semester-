//        ********** Semester 2 ***********
//        ********** WEEK 9 TASK 3 **********
/* Copy Content from One File to Another */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("notes.txt");
    ofstream fout("copy.txt");
    string line;

    while(getline(fin, line))
    {
    fout<<line<<endl;
    }

    fin.close();
    fout.close();

    cout<<"File Copied Successfully";

    return 0;
}
