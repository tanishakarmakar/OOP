#include <iostream>

using namespace std;

class fraction{
    int n,d;
    public:
    void get();
    void display();
    void add(fraction,fraction);
    void subtract(fraction &a,fraction &b);
    void multiply(fraction *a,fraction *b);
};
void fraction :: get(){
    cout<<"enter numerator and denominator : ";
    cin>>n>>d;
}
void fraction :: display(){
    cout<<n<<"/"<<d<<" ";
}
void fraction :: add(fraction a, fraction b){
  int x, y, c, gcd_no;
    x=(a.n*b.d)+(b.n*a.d);
    y=a.d*b.d;
    for(c=1; c <= x && c <= y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd_no = c;
    }
    n=x/gcd_no;
    d=y/gcd_no;
    }

void fraction :: subtract(fraction &a, fraction &b){
  int x, y, c, gcd_no;
    x=(a.n*b.d)-(b.n*a.d);
    y=a.d*b.d;
    for(c=1; c <= x && c <= y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd_no = c;
    }
    n=x/gcd_no;
    d=y/gcd_no;
}
void fraction :: multiply(fraction *a, fraction *b){
  int x, y, c, gcd_no;
    x=(*a).n*(*b).n;
    y=(*a).d*(*b).d;
    for(c=1; c <= x && c <= y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd_no = c;
    }
    n=x/gcd_no;
    d=y/gcd_no;
}

int main(){
    fraction x,y,ans;
    cout<<"for fraction 1 :\n";
    x.get();
    cout<<"for fraction 2 :\n";
    y.get();

    cout<<"\naddition : ";
    ans.add(x,y);
    ans.display();

    cout<<"\nsubtraction : ";
    ans.subtract(x,y);
    ans.display();

    cout<<"\nmultiplication : ";
    ans.multiply(&x,&y);
    ans.display();
}
