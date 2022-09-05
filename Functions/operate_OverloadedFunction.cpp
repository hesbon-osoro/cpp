#include<iostream>
using namespace std;
int operate(int a, int b)
{
return a/b;
}
float operate(float a, float b)
{
return a*b;
}
int main()
{
int x=10,y=4;
float m=4.2,n=2.5;
cout<<operate(x,y)<<endl;
cout<<operate(m,n)<<endl;
return 0;
}
