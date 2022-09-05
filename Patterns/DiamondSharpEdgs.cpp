#include<iostream>
using namespace std;
int main()
{
int row,n,k,sp;
for(row=1;row<=5;row++)
{
for(sp=5;sp>=row;sp--)
{
cout<<" ";
}
for(n=1;n<=2*row-1;n++)
{
cout<<"*";
}
cout<<"\n";
}
for(n=1;n<=2*6-1;n++)
{
cout<<"*";
}
cout<<"\n";
k=1;
for(row=5;row>=1;row--)
{
for(sp=1;sp<=k;sp++)
{
cout<<" ";
}
for(n=1;n<=row*2-1;n++)
{
cout<<"*";
}
k++;
cout<<"\n";
}
return 0;
}
