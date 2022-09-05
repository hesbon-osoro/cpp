// pointer to functions
#include <iostream>
using namespace std;
int addition (int a, int b)
{
return (a+b);
}
int subtraction (int a, int b)
{
return (a-b);
}
int operation (int x, int y, int (*functocall)(int,int))
{
int g;
g = (*functocall)(x,y);
return (g);
}
int main ()
{
int m,n;
int (*minus)(int,int) = subtraction;//int (*functocall)(int,int) = subtraction;
m = operation (7, 5, addition);
n = operation (20, m, minus);//n = operation (20, m, functocall);
cout <<"Sum :"<<m<<endl;
cout <<"Diff :"<<n<<endl;
return 0;
}
/*In the example, minus is a pointer to a function
that has two parameters of type int. It is immediately
assigned to point to the function subtraction, all in a
single line:  */
