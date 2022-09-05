#include<iostream>
#include<stdbool.h>
using namespace std;
int main()
{
bool T,F;
T=true;F=false;
cout<<"T\tF\tT&F\tT|F\t!(T&F)\t!T&F\t!(T|F)\t!T|F\n";
cout<<T<<"\t"<<F<<"\t"<<(T&F)<<"\t"<<(T|F)<<"\t"<<!(T&F)<<"\t"<<(!T&F)<<"\t"<<!(T|F)<<"\t"<<(!T|F)<<endl;
cout<<"T^F\t!T\t!F\n";
cout<<(T^F)<<"\t"<<!T<<"\t"<<!F;
return 0;
}
