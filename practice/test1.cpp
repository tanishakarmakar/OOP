#include <iostream>
using namespace std;

void checker(int p)
{
float b;
try
{
    if(p<0)
    throw 'A';

    else if(p==0)
    throw p;

    else
    throw b;

}

catch(char A)
{
    cout<<"Negative value!!";
}

catch(int e)
{
    cout<<"Caught zero value!"<<e;
}

catch(float c)
{
    cout<<"Positive value!";
}


}


int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    checker(num);

}