#include <iostream>
using namespace std;

class AREA {
public:
  int l, b;
  void get(){
    cout<<"Enter length and breadth of rectangle= ";
    cin>>l>>b;
  }
  friend void compute (AREA);
};

void compute (AREA n)
{
  cout<<"Area of rectangle= "<<n.l*n.b<<endl;
}

int main()
{
  AREA x;
  x.get();
  compute(x);
}
