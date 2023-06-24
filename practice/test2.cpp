#include <iostream>
using namespace std;

void f1(int x, int y)
{
    try
    {
        if(y==0)
        throw y;

        else
        cout<<"division= "<<x/y;
    }

    catch(int p)
    {
        cout<<"\nException found!";
        throw;
    }
}

int main()
{
    try
    {
        f1(25,5);
        f1(20,0);
    }

    catch(int a)
    {
        cout<<"\nGoodbye!";
    }
}