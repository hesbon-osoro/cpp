#include<iostream>
using namespace std;
int main()
{
int n,i;

cout<<"2\t";
for(n=3;n<100;n++)
{
for(i=2;i<n;i++)
{
if(!(n%i))//if it has a factor
{
 break;
}
if((n/i==1))
{
cout<<n<<"\t";
break;
}
}
}
return 0;
}
