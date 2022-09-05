#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
enum days_{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday}d;
int no;
string str;
cout<<"Enter a number of day(1-7)\n";
getline(cin,str);
stringstream(str)>>no;
switch(no)
{
  case(Sunday):cout<<d<<endl;
  break;
  case(Monday):cout<<d<<endl;
  break;
  case(Tuesday):cout<<d<<endl;
  break;
  case(Wednesday):cout<<d<<endl;
  break;
  case(Thursday):cout<<d<<endl;
  break;
  case(Friday):cout<<d<<endl;
  break;
  case(Saturday):cout<<d<<endl;
  break;
 default:cout<<"Invalid Entry\n";
  break;

}
return 0;
}
