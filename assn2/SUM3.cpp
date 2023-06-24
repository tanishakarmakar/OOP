#include <iostream>
using namespace std;

int sum(int a, int b=10, int c=20)
{
  int ans=a+b+c;
  return ans;
}

int main()
{
  cout<<"enter atmost 3 numbers"<<endl;
  int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==0&&s2==0&&s3==0)
        cout<<"no input";
    else if(s2==0&&s3==0)
        cout<<sum(s1);
    else if(s3==0)
        cout<<sum(s1,s2);
    else
        cout<<sum(s1,s2,s3);

return 0;


    }
