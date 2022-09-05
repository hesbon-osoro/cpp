//sum by passing parameters as arguments
#include<iostream>
using namespace std;
int sum(int &a, int &b)
{
int sum=0;
sum=a+b;
return sum;
}
int main()
{
int s,x=2,y=5;
s=sum(x,y);
cout<<"Sum of "<<x<<" and "<<y<<": "<<s;

return 0;
}
