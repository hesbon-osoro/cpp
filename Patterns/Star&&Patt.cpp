#include<iostream>
using namespace std;

int main()
{
int i,j,k,c;
c=2;
for(k=1;k<=6;k++){
cout<<"&";
}cout<<endl;
for(i=1;i<5;i++){
  for(j=1;j<=6;j++){
  if(j==c){
  cout<<"&";
  }else{
  cout<<"*";
  }
}
c++;
cout<<endl;
}
for(k=1;k<=6;k++){
cout<<"&";
}
return 0;
}
