#include<iostream>
using namespace std;
int main()
{
int row,n,k;
k=1;
for(row=1;row<5;row++)
{
for(n=1;n<=row;n++)
{
cout<<k++<<"\t";
}
cout<<"\n";
}
return 0;
}
