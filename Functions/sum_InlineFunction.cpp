#include<iostream>
using namespace std;
/*inline*/ int sum_(int a, int b)
{
return a+b;
}
int main()
{
int x=10,y=20;
sum_(x,y);
cout<<"Sum is: "<<sum_(x,y)<<endl;
x=12;y=10;
cout<<"Sum is: "<<sum_(x,y)<<endl;
x=86,y=72;
cout<<"Sum is: "<<sum_(x,y)<<endl;
x=25,y=75;
cout<<"Sum is: "<<sum_(x,y)<<endl;
x=28,y=72;
cout<<"Sum is: "<<sum_(x,y)<<endl;
x=24,y=26;
cout<<"Sum is: "<<sum_(x,y)<<endl;
return 0;
}
