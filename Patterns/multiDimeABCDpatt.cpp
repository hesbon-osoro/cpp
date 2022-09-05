#include<iostream>
using namespace std;
int main()
{
char patt[2][4];
int i,j;
char ch='A';
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
patt[i][j]=ch;
cout<<patt[i][j]<<"\t";
ch++;
}
cout<<endl;
}
return 0;
}
