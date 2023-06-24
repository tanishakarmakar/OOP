#include <iostream>
using namespace std;

class shape
{
    protected:
    int a;

public:
   virtual void area()
    {
        cout<<"Area=Undefined"<<endl;

    }
};

class square: public shape
{
public:
void area()
{
    cout<<"Enter side of square= ";
    cin>>a;
    cout<<"Area= "<<a*a<<endl;
}

};

class tri: public shape
{
public:
void area()
{
    cout<<"Enter side of triangle= ";;
    cin>>a;
    cout<<"Area= "<<0.5*a*a<<endl;
}

};

int main()
{
    shape *p;
    square s1;
    tri t1;
    p=&s1;
    p->area();
    p=&t1;
    p->area();

}