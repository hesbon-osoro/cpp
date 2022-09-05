// increaser
#include <iostream>
using namespace std;
void increase (void* data, int psize)
{
if ( psize == sizeof(char) )
{
char* pchar;
pchar=(char*)data;
--(*pchar);
}
else if (psize == sizeof(int) )
{
int* pint;
pint=(int*)data;
++(*pint);
}
}
int main ()
{
char a = 'x';
int b = 1602;
increase (&a,sizeof(a));
cout<<"Size of a:"<<sizeof(a)<<endl;
increase (&b,sizeof(b));
cout<<"Size of a:"<<sizeof(b)<<endl;
cout << a << ", " << b << endl;
return 0;
}
