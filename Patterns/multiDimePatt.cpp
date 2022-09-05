#include<iostream>
using namespace std;
int main()
{
int patt[2][2];
int i,j,k=1;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
patt[i][j]=k;
cout<<patt[i][j]<<"\t";
k++;
}
cout<<endl;
}
return 0;
}
