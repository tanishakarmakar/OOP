#include <iostream>
using namespace std;

template <class T>

void f1(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"\nSwapped values: "<<a<<" "<<b;
}

int main()
{
    int x,y;
    float a,b;
    cin>>x>>y;
    cin>>a>>b;

    f1(x,y);
    f1(a,b);
}