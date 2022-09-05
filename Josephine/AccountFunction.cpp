#include<iostream>
using namespace std;
void Account(int bal,int credAmnt)
{
  int deposit;
  cout<<"Enter deposit: ";
  cin>>deposit;
  bal=bal+credAmnt;
  cout<<"New Balance: "<<bal<<endl;
  cout<<"Credit Amount: "<<credAmnt<<endl;
}
int main()
{
  int bal,credAmnt;
  cout<<"Enter balance: ";
  cin>>bal;
  cout<<"Enter credit amount: ";
  cin>>credAmnt;
  Account(bal,credAmnt);
  return 0;
}
