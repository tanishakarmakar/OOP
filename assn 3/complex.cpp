
#include <iostream>

using namespace std;

class complex{
    int r,i;
    public:
    void get();
    complex add(complex,complex);
    complex add(int,complex);
    void display();
};

void complex :: get(){
    cout<<"enter the real and imaginary part : ";
    cin>>r>>i;
}

complex complex :: add(complex s1,complex s2){
    complex ans;
    ans.r=s1.r+s2.r;
    ans.i=s1.i+s2.i;
    return ans;
}

complex complex :: add(int a,complex s2){
    complex ans;
    ans.r=a+s2.r;
    ans.i=s2.i;
    return ans;
}

void complex :: display(){
    cout<<r<<" + "<<i<<"i \n";
}

int main(){
    complex a,b,sum;
    int n;
    cout<<"\ncomplex no 1 :\n";
    a.get();
    cout<<"\ncomplex no 2 :\n";
    b.get();
    sum=sum.add(a,b);
    cout<<"sum : ";
    sum.display();

    cout<<"\nenter the real no : ";
    cin>>n;
    cout<<"\ncomplex no :\n";
    a.get();
    sum=sum.add(n,a);
    cout<<"sum : ";
    sum.display();
}
