#include <iostream>

using namespace std;
class DB;
class DM
{
    float m,cm;
    public:
    void get(){
        cout<<"Enter distance in meter and centimeter:"<<endl;
        cin>>m>>cm;
    }
    void display(){
        cout<<"Addition in m and cm is:"<<m<<"m"<<cm<<"cm"<<endl;
    }
    void convert(){
        float x,y;
        x=m;
        y=cm;
        x/=0.3048;
        y/=2.54;
        if(y>=12){
            y-=12;
            x++;
        }
        cout<<"Addition in feet and inch is:"<<x<<"feet"<<y<<"inch"<<endl;
    }
    friend DM add(DM,DB);
};
class DB{
    float feet,inch;
    public:
    void get(){
        cout<<"Enter distance in feet and inches:"<<endl;
        cin>>feet>>inch;
    }
    friend DM add(DM,DB);
};
DM add(DM m11,DB b11){
    DM t;
    b11.inch*=2.54;
    b11.feet*=0.3048;
    if(b11.inch>=100){
        b11.inch-=100;
        b11.feet++;
    }
    t.m=m11.m+b11.feet;
    t.cm=m11.cm+b11.inch;
    return t;
}
int main()
{
    DM m1,m2;
    DB b1;
    int n;
    m1.get();
    b1.get();
    m2=add(m1,b1);
    cout<<"Enter 0 to show the addition of two distances in m and cm"<<endl;
    cout<<"Enter 1 to show the addition of two distances in feet and inch"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>n;
    if(n==0){
        m2.display();
    }
    else if(n==1){
        m2.convert();
    }
    return 0;
}
