//product by passing parameters as arguments
#include<iostream>
using namespace std;
int product(int &a, int &b)
{
int prod;
prod=a*b;
return prod;
}
int main()
{
int p,x=2,y=5;
p=product(x,y);
cout<<"Product of "<<x<<" and "<<y<<": "<<p;
return 0;
}
