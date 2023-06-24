#include <iostream>
#include <string>

using namespace std;

class xyz
{
    int i, j;
public:
    xyz()
    {
        cout<<"Hello"<<endl;
    }

    xyz(int x, int y)
    {
        i=x;
        j=y;
    }

    xyz(xyz &x11)
    {
        i=x11.i;
        j=x11.j;

    }

    void display()
    {
        cout<<i<<" "<<j<<endl;
    }
};

int main()
{
    xyz x1(8,9);
    xyz x2=x1;

    x1.display();
    x2.display();


}