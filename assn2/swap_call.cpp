#include <iostream>
using namespace std;
void cbvalue(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void cbref(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}

void cbadd(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
  int a,b;
 cout << "Enter the First Number -" << endl;
 cin >> a;
 cout << "Enter the second  Number -" << endl;
 cin >> b;
 cbvalue(a,b);
    cout<<"numbers after swapping : "<<a<<" "<<b<<"\n";
    cbref(a,b);
    cout<<"numbers after swapping : "<<a<<" "<<b<<"\n";
    cbadd(&a,&b);
    cout<<"numbers after swapping : "<<a<<" "<<b<<"\n";

}
