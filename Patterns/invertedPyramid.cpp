#include<iostream>
using namespace std;
int main()
{
int row, i, k,sp;
k=1;
for(row=5;row>=1;row--)
{
for(sp=1;sp<=k;sp++)
{
cout<<" ";
}
for(i=row*2-1;i>=1;i--)
{
cout<<"*";
}
k++;
cout<<"\n";
}
return 0;
}
