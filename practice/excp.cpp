#include <iostream>
using namespace std;

int main()
{
    int x, y, j;

    cout<<"Enter values of x and y: ";
    cin>>x>>y;
try
{   
    j=x>y ? 0:1;
    if(j==1)
    {
        throw j;
    }

    else
    cout<<"Subtraction= "<<x-y;
}

catch(int p)
{
    cout<<"caught an error "<<p;
}

}