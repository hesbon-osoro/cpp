//default values in functions
#include<iostream>
using namespace std;
int divide(int a, int b=2)
{
int r;
r=a/b;
return r;
}
int main()
{
cout<<divide(12)<<endl;
cout<<divide(20,4)<<endl;
return 0;
}

/*As we can see in the body of the program
there are two calls to function divide.
In the first one:
divide (12)
we have only specified one argument,
but the function divide allows up to two.
So the function divide has assumed that the
second parameter is 2 since that is what we
have specified to happen if this parameter
was not passed (notice the function declaration,
                which finishes with int b=2, not
                just int b). Therefore the result
                of this function call is 6 (12/2).
                  */
