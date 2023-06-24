#include<fstream>
#include<iostream>
using namespace std;
int main()
{
ifstream fin;
fin.open("hello.txt");

ofstream fout;
fout.open("my.txt");

char ch;

while(fin)
{
fin.get(ch);
fout<<ch;
}

fin.close();
fout.close(); 
return 0;
}