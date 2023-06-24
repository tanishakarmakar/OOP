#include <iostream>
using namespace std;

class complex{
  int i, r;
public:
  void get(){
    cout<<"Enter the real and imaginary part: "<<endl;
    cin>>r>>i;
  }

void compute(complex a11, complex a22){
  cout<<"The sum is= "<<a11.r+a22.r<<" + "<<a11.i+a22.i<<"i"<<endl;
}
};

int main() {
  complex a1, a2, ans;
  a1.get();
  a2.get();
  ans.compute(a1,a2);

    return 0;
}
