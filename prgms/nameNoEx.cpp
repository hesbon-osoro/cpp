#include<iostream>
#include<sstream>
#include<string>

using namespace std;
int main()
{
int no;
string name;
string str;
cout<<"Enter no: ";
getline(cin,str);
stringstream(str)>>no;
cout<<"Enter Name: ";
getline(cin,name);
cout<<"You Entered: "<<no<<" "<<name;
return 0;
}
