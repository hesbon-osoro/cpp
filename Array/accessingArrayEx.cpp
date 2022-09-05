#include<iostream>
using namespace std;
int marks[5]={10,12,25,85,96};
int main()
{
int a,b;
a=marks[0];
cout<<"a :"<<a<<endl;
marks[marks[a]]=marks[2+1];
b=marks[marks[a]];
cout<<"b :"<<b<<endl;
return 0;
}
