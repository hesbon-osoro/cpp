#include<iostream>
using namespace std;
int main()
{
int var[5]={12,4,56,25,26};
//sorting loop
for(int i=5-1;i>=0;i--)
{
for(int j=1;j<=i;j++)
{
if(var[j-1]>var[j])
{
int k=var[j-1];
var[j-1]=var[j];
var[j]=k;
}
}
}
for(int i=0;i<5;i++)
{
cout<<var[i]<<endl;
}
return 0;
}
