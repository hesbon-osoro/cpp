#include<iostream>
using namespace std;
int main()
{
int row,i,sp;
for(row=1;row<=5;row++)
{
for(sp=5;sp>=row;sp--)
{
cout<<" ";
}
for(i=1;i<=2*row-1;i++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
