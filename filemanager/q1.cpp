#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream c;
    c.open("student.txt");
    char name[30];
    int roll, marks;
    char gender[10];

    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<"Enter gender: ";
    cin>>gender;

    c<<"Name: "<<name<<"\n"<<"Roll No: "<<roll<<"\n"<<"Gender: "<<gender<<"\n"<<"marks: "<<marks;
    return 0;
}
