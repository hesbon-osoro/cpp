#include<iostream>
using namespace std;
int main()
{
float base, height,area;
int i;
for(i=1;i<=10;i++){
  cout<<"For triangle "<<i<<endl;
  cout<<"Enter base: "<<endl;
  cin>>base;
  cout<<"Enter height: "<<endl;
  cin>>height;
  area=0.5*height*base;
  cout<<"Area: "<<area<<endl;
}
return 0;
}
