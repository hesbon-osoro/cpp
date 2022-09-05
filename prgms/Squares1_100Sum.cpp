#include<iostream>
using namespace std;
int main()
{
int a=1,i=0;
int sum=0;
while(a<=100)
{
  i=a*a;
  sum=sum+i;
  a++;
}
cout<<"Sum of all Squares 1-100 is :"<<sum;
return 0;
}
