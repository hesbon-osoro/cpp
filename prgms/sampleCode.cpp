#include<iostream>
using namespace std;
void numinc(int x, int *nums)
{
int i;
for (i=0;i<x;i++)
{
*nums+=2;
cout<<*nums<<"\n";
nums++;
}
}
int main()
{
int num[5]={3,4,5,7,11};
numinc(5,num);
return 0;
}
