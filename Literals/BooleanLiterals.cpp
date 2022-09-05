#include<iostream>
using namespace std;
int main()
{
bool t,f;
t=true;f=false;
cout<<"T\tF\n"<<t<<"\t"<<f<<"\t"<<endl;
cout<<"Here goes a Truth Table\n"<<endl;
cout<<"T\tF\tT & F\tT | F\tT ^ F\n"<<endl;
cout<<t<<"\t"<<f<<"\t"<<(t&f)<<"\t"<<(t|f)<<"\t"<<(t^f)<<endl;
return 0;
}
