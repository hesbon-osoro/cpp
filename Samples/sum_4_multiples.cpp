/*
write a program that uses an inline function to compute and output the sum of
all multiples of four in a range of positive integer numbers. The user is
prompted to enter the lower limit and upper limit of the range

*/
//@ Leyian: Coding Enthusiasts
//via whatsapp

#include<iostream>
#include<windows.h>
using namespace std;
inline void call(int first, int last);
int main(){
system("color 2");
cout<<"Enter first number: "<<endl;
int firstnumber;
cin>>firstnumber;
cout<<"Enter last number: "<<endl;
int lastnumber;
cin>>lastnumber;
call(firstnumber,lastnumber);
system("pause");
return 0;
}
 void call(int first, int last){
 if(first>last){
    int rev;
    rev=first;
    first=last;
    last=rev;
 }
    int sum = 0;
    for(int a=first; a<=last;a++){
        if(a%4!=0){
            continue;
        }
        system("cls");
        sum+=a;
        cout<<"Sum of numbers is ="<<sum<<endl;
    }
 }

