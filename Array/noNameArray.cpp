#include<iostream>
#include<string>
using namespace std;
int main()
{
int noArry[5]={1,2,3,4,5};
string nameArry[5]={"Agnes","Charles","Duke","Grace","Felister"};
int i;
cout<<"No\t"<<"Name\n";
for(i=0;i<5;i++)
{
cout<<noArry[i]<<"\t"<<nameArry[i]<<endl;
}
return 0;
}
