#include<iostream>
using namespace std;
long long fact(long long n)
{
int i=1;
if(n>1)
return (n*fact(n-1));
else return 1;
}
int main()
{
long long n=63;
cout<<n<<"! :"<<fact(n)<<endl;
return 0;
}
