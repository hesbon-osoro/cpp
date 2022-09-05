/*
PROBLEM: #68
LEVEL: MEDIUM

This problem was asked by FACEBOOk

There is N by M matrix of zeros. Given N and M, write a function to count the number f
ways of starting at the top-left corner and getting to the bottom-right corner. You
can only move right or down.

Right, then down
Down, then right

Given a 5 by 5 matrix, there are 70 ways to get to the bottom-right
*/
//Solution by @Shivam Singh via WhatsApp
#include<iostream>
using namespace std;
int count = 0;
void no_path(int i,int j, int l, int r){
//base case
if(i==l&&j==r){
    count++;
    return;
}
//right move
if(j+1<=r){
    no_path(i,j+1,l,r);
}
//down move
if(i+1<=l){
    no_path(i+1,j,l,r);
}
return;
}
int main(){
int n,m;
cout<<"Enter n x m matrix\n";
cin>>n>>m;
no_path(0,0,n-1,m-1);
cout<<count;
return 0;
}
