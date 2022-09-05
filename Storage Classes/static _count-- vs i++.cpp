#include<iostream>
using namespace std;
//function declaration
void func(void);
static int count=10;//global variable
main()
{
while(count--)
{
func();
}
return 0;
}
//function definition
void func(void)
{
static int i=5;//local static variable
i++;
cout<<"i ="<<i <<" and count ="<<count <<endl;
}
