#include<iostream>
using namespace std;
int main()
{
int n=10;
count:
cout<<n<<" ";
n--;
if(n>0)
{
goto count;
}
cout<<"\nEnd!";
return 0;
}
