#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ifstream fin;
fin.open("hello.txt");

char ch;
int count=0, k=0;
char word[1000];
while(fin)
{
fin.get(ch);
if(ch=='\n')
{
    count++;
}
if(ch=='\n'||ch==' ')
k++;
}

cout<<"\nThe number of lines: "<<count;
cout<<"\nThe number of words: "<<k;

fin.close();
return 0;
}