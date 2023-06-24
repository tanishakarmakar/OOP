#include <iostream>
using namespace std;

class abc
{
    int x, y;

    public:
    abc()
    {
        x=y=0;
    }

    abc(int p)
    {
        x=p;
        y=p+1;
    }

    operator int()
    {
        int t;
        t=x*y;
        return t;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

};

int main()
{
    int v;
    cin>>v;
    abc a1=v;
    a1.display();
    v=a1;

}