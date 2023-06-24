#include <iostream>
using namespace std;

class TIME{
public:
  int hrs, min, sec;
  void get();
  void display(TIME, TIME);
};

void TIME::get(){
  cout<<"Enter hours, minutes and seconds respectively: ";
  cin>>hrs>>min>>sec;
}

void TIME:: display(TIME t11, TIME t22){
int h, m, s;
s=t11.sec+t22.sec;
m=t11.min+t22.min+(s/60);
h=t11.hrs+t22.hrs+(m/60);

s=s%60;
m=m%60;
cout<<"Time= "<<h<<":"<<m<<":"<<s<<endl;


}

int main(){
  TIME t1, t2, ans;
  t1.get();
  t2.get();
ans.display(t1,t2);
}
