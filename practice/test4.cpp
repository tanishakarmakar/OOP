#include <iostream>
using namespace std;

template <class T>
class xyz
{
    T x,y;
    public:
    xyz(T i, T j)
    {
        x=i;
        y=j;
    }

    void max()
    {
        T max;
        max=x>y ? 0:1;

        if (max=0)
        cout<<x<<" is bigger!"<<endl;

        else
        cout<<y<< " is bigger!"<<endl;
    }
};

int main()
{
    xyz <int> x1(10,20);
    xyz <float> x2(6.5, 9.6);
    xyz <char> x3('A', 'B');

    x1.max();
    x2.max();
    x3.max();

}