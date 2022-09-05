#include<iostream>
using namespace std;
int row,col,sp;
int fact(int row){
int c,i,n;
n=row;c=1;
for(i=1;i<=n;i++){
c=c*i;
}
return c;
}

int main()
{
int k=5;
for(row=0;row<=5;row++){
for(sp=1;sp<=k;sp++){
  cout<<" ";
}
for(col=0;col<=row;col++){
if(fact(row)/(fact(col)*fact(row-col))==1){
  cout<<"* ";
}else{
cout<<"  ";
}
}
cout<<endl;k--;
}
k=1;
for(row=4;row>=0;row--){
for(sp=1;sp<=k;sp++){
  cout<<" ";
}
for(col=0;col<=row;col++){
if(fact(row)/(fact(col)*fact(row-col))==1){
  cout<<"* ";
}else{
cout<<"  ";
}
}
cout<<endl;k++;
}
return 0;
}
