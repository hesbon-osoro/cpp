#include<iostream>
using namespace std;
int main()
{
int row,n;
for(row=5;row>=1;row--)
{
for(n=5;n>=row;n--)
{
cout<<n<<"\t";
}
cout<<"\n";
}
return 0;
}
