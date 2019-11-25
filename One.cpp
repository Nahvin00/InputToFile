#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[25], id[11], course[7];
    ofstream outputFile("MYDATA.txt",ios::out);
    if(!outputFile)
    {
        cerr<<"File could not be opened \n";
        exit(1);
    }
    cout<<"Please enter your name, student ID and course name:\n";
    cin>>name>>id>>course;
    outputFile<<name<<" "<<id<<" "<<course;
    return 0;
}
