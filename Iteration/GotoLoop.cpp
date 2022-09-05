#include<iostream>
using namespace std;
int main()
{
int n=10;
red:
cout<<n<<" ";
n--;
{
if(n>5)
{
cout<<"Here the Loop does goto\n";
goto red;
}
cout<<n<<"\n";
}
return 0;
}
