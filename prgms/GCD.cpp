#include<iostream>
using namespace std;
void GCD(int n1,int n2);
void exit(int code);
int main()
{
int n1,n2,code;
int i,k,lcm,hcf,gcd;
n1=12;
n2=16;
k=(n1<n2)?n1:n2;
for(i=1;i<=k;i++)
{
if((n1%i==0)&&(n2%i==0))
hcf=i;
}
gcd=hcf;
lcm=(n1*n2)/gcd;

cout<<"GCD is : "<<gcd<<endl;
cout<<"The LCM is: "<<lcm<<endl;
//exit(code);
return 0;
}
void exit(int code)
{
code= 5;
}

