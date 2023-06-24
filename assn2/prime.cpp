#include <iostream>
using namespace std;

int main() {

int n, i, flag = 0;
cout<<"Enter a positive integer: "<<endl;
cin >> n;

if (n == 0 && n == 1)
  flag=0;

for (i = 2; i <= n / 2; ++i) {

  if (n % i == 0) {
    flag = 1;
    break;
  }

}

if (flag == 0)
  cout<<"It is a prime number."<<endl;
else
  cout<<"It is not a prime number."<<endl;

  return 0;
}
