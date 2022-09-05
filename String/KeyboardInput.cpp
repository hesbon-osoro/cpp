#include<iostream>
using namespace std;
int main()
{
string name;
int age;
cout<<"This appplies cin\n";
cout<<"Enter your name: \n";
cin>>name;
cout<<"Enter Age: \n";
cin>>age;
cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
cout<<"\nAll the above can be done by getline() function\n";
cout<<"Reenter Name: \n";
getline(cin,name);//the function doesn't take integers
cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
return 0;
}
