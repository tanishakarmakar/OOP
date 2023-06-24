#include <iostream>
using namespace std;

class rectangle;
class square{
public:
  int n;
  void get(){
    cin>>n;
  }
  friend void area(square);
};

class rectangle {
public:
  int l, b;
  void get(){
    cin>>l>>b;
  }
  friend void area(rectangle);
};

void area (square a){
  cout<<"Area= "<<a.n*a.n<<endl;
}

void area (rectangle x){
  cout<<"Area= "<<x.l*x.b<<endl;
}

int main(){
  square a1;
  cout<<"Enter side of square= ";
  a1.get();
  area(a1);
  rectangle x1;
  cout<<"Enter length and breadth of rectangle= ";
  x1.get();
  area(x1);
  return 0;
}
