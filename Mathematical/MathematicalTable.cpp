#include<iostream>
using namespace std;
int main()
{
int n,x,y,mult;
for(n=1;n<=10;n++)
cout<<"\t"<<n;
cout<<"\n";
for(x=1;x<=10;x++)
{
  cout<<x<<"\t";
  for(y=1;y<=10;y++){
  mult=y*x;
  cout<<mult<<"\t";
  }
 cout<<"\n";
}

return 0;
}
