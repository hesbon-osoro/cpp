#include<iostream>
using namespace std;
int main()
{
/*this program shows the difference between
signed and unsigned integers*/
short int i;//a signed short integer
short unsigned int j;//an unsigned short integer
signed int n;
j=50000;
i=j;
n=i;/*signed n prints the value as it is*/
cout<<"Original short unsigned int value is : "<<j<<endl;
cout<<"Modified short int becomes: "<<i<<endl;
cout<<n<<endl;
n=j;
cout<<n;
return 0;
}
/*The above result is because the bit pattern
that represents 50,000 as a short unsigned integer
is interpreted as -15,536 by a short.*/
