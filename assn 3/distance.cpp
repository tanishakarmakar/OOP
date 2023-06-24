#include <iostream>
using namespace std;

class DISTANCE{
int feet, inches;

public:
  void input(){
    cout<<"Input feet: "<<endl;
    cin>>feet;
    cout<<"Input inches: "<<endl;
    cin>>inches;
  }
void output(){
  cout<<feet<<"feets"<<" "<<inches<<"inches";
}
void add(DISTANCE a, DISTANCE b){
  inches = a.inches + b.inches;
   feet = a.feet + b.feet + inches/12;
   inches = inches%12;
}
};
 int main(){
   DISTANCE d1, d2, ans;
   d1.input();
   d2.input();
   ans.add(d1,d2);
   cout<<"The sum is: \n";
   ans.output();
 }
