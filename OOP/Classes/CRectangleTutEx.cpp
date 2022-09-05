//classes example
#include<iostream>
using namespace std;
class CRectangle{
int x,y;
public:
  void set_values(int,int);
  int area(){
  return x*y;
  }
  }rect;
  void CRectangle::set_values(int a, int b){
  x=a;
  y=b;
  }
  int main()
  {
  rect.set_values(3,4);
  cout<<"Area: "<<rect.area();
  return 0;
  }
