//.Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. If the function takes one argument
//then it will calculate area of a circle, two argument for area of rectangle and three argument volume of a box.
//If no argument is given to the function, then it will display appropriate message.

#include <iostream>
using namespace std;
float FUN_AREA(int a){
    float ar = 3.1415 * a * a;
    return ar;
}

int FUN_AREA(int a, int b){
  int ar1=a*b;
  return ar1;
}

int FUN_AREA(int a,int b,int c){
    int vol = a * b*c;
    return vol;
}

void FUN_AREA(){
    cout << "No input -" << endl;
}

int main()
{
  int x, y, z;
  cout<<"Enter the radius of circle=";
  cin>>x;
  cout<<"Enter the 2 sides of rectangle=";
  cin>>x>>y;
  cout<<"Enter the 3 sides of box=";
  cin>>x>>y>>z;

  cout<<"Area of circle="<<FUN_AREA(x)<<"\n";
  cout<<"Area of reactangle="<<FUN_AREA(x,y)<<"\n";
  cout<<"Volume of box="<<FUN_AREA(x,y,z);


return 0;


    }
