#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,sq,sq2,h,i;
float x1,x2,x3,x4,sqt,sqt2;
cout<<"Quadratic Equation is in form of ax^2+bx+c=0\n\n";
cout<<"Enter coefficient of a\n";
cin>>a;;
cout<<"Enter coefficient of b\n";
cin>>b;
cout<<"Enter coefficient of c\n";
cin>>c;
sq=(b*b)-(4*a*c);
sqt=sqrt(sq);
/*discriminant solving i.e b^2-4ac*/
x1=(-b+sqt)/(2*a);
x2=(-b-sqt)/(2*a);/*for b^2-4ac>0 and for b^2-4ac=0*/
sq2=-1*sq;
sqt2=sqrt(sq2);
x3=(-b)/(2*a);
i=sqt2/(2*a);
x4=(-b)/(2*a);/*for b^2-4ac<0*/
cout<<"The square of the roots is: "<<sq<<endl;
h=sqt2/(2*a);

{
if(sq>0)
printf("The roots are Real and Distinct\nThe Square root is:%.4f\n x is either :%.2f or :%.2f\n",sqt,x1,x2);
else if(sq<0)
printf("The roots are Complex (i.e Real and Imaginary)\nThe Square root is:%.4f i\n x is either :%.2f + %.2fi or :%.2f - %.2fi \n",sqt2,x3,i,x4,h);
else
printf("The roots are Real and Repeated\nThe Square root is:%.4f\n x is :%.2f\n",sq,x1);
}
return 0;
}
