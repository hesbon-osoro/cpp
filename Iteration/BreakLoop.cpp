#include<iostream>
using namespace std;
int main()
{
int n;
for(n=0;n<=10;n++)
{
if(n==5)
{
cout<<"Here the Loop Breaks\n";
break;
}
cout<<n<<"\t";
}
return 0;
}
