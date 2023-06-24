#include <iostream>
using namespace std;

 class num2;
 class num1
 {
 public:
   int x;
   void get(){
     cout<<"Enter 1st number= ";
     cin>>x;
   }
   friend void big(num1, num2);
 };

class num2{
public:
  int y;
  void get(){
    cout<<"Enter 2nd number= ";
    cin>>y;
  }
  friend void big(num1, num2);
};

void big(num1 a, num2 b){
  if(a.x>b.y)
  {
    cout<<"1st number is biggest!";
  }
  else
  cout<<"2nd number is biggest!";
}

int main(){
  num1 a1;
  a1.get();
  num2 b1;
  b1.get();
  big(a1,b1);
  return 0;
}
