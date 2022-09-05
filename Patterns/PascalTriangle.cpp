#include<iostream>
using namespace std;
int fact(int row){
int c,i,n;
n=row;c=1;
for(i=1;i<=n;i++){
c=c*i;
}
return c;
}
int main()
{
int row,n,f;
for(row=0;row<=5;row++)
{
for(n=0;n<=row;n++)
{
cout<<(fact(row)/(fact(n)*fact(row-n)))<<" ";
}
cout<<"\n";
}
return 0;
}
