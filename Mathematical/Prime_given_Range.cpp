#include<iostream>
using namespace std;
int main()
{
int i,j;
int start,stop;
cout<<"Enter Lower Limit: ";
cin>>start;
cout<<"Enter upper limit: ";
cin>>stop;
for(i=2;i<=stop;i++){
for(j=2;j<=(i/j);j++)
if(!(i%j!=0))
break;
if(j>(i/j)){
  if(i>=start&&i<=stop){
cout<<i<<"\t";
}
}
}
return 0;
}
