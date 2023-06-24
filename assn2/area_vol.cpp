#include <iostream>
using namespace std;

int AREA_VOL(int r){
    float ar = 3.1415 * r * r;
    return ar;
}
float AREA_VOL(float r){
    float vol = 1.33 * 3.1415 * r * r * r;
    return vol;
}



int main()
{
  int rad;
  float rad1;
  cout<<"Enter the radius of circle=";
  cin>>rad;
  cout<<"Enter the radius of sphere=";
  cin>>rad1;
  cout<<"Area of circle="<<AREA_VOL(rad)<<"\n";
  cout<<"Volume of sphere="<<AREA_VOL(rad1);

return 0;
    }
