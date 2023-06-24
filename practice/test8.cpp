#include <iostream>
using namespace std;

class kilometer
{
    public:
int km, m;

kilometer()
{
    cout<<"starting!!"<<endl;
}

kilometer(int a, int b)
{
    km=a;
    m=b;
}

friend istream& operator >>(istream &in, kilometer &a11)
{
    in>>a11.km;
    in>>a11.m;
    
}

friend ostream& operator << (ostream &ot, kilometer a11)
{
    ot<<a11.km<<" "<<a11.m<<endl;
   
}
void operator + (kilometer k11)
  {
    km=km+k11.km+(m+k11.m)/1000;
    m=(m+k11.m)%1000;
  }

   void display()
{
  cout<<"\n"<<km<<"km"<<" "<<m<<"m"<<endl;
}

};

int main()
{
    kilometer k1, k2;
    cin>>k1>>k2;
    cout<<k1<<k2;

    
}