#include<iostream>
using namespace std;
int main()
{
int no;

no=077;/*you put 078, 8 is not octal*/
cout<<"no in hexadecimal form: 077= "<<no<<endl;
no=0213 ;
cout<<"no in octal form: 0213= "<<no<<endl;
no=0x4b ;
cout<<"no in hexadecimal form: 0x4b= "<<no<<endl;
no=30u;
cout<<"no in unsigned integer form: 30u= "<<no<<endl;
no=30l;
cout<<"no in long form: 30l= "<<no<<endl;
no=30ul;
cout<<"no in unsigned long form: 30ul= "<<no<<endl;
return 0;
}
