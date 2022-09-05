//arrays as parameters
#include<iostream>
void arry(int arr[], int n)
{
int i;
for(i=0;i<n;i++)
{
std::cout<<arr[i]<<" ";
}
std::cout<<std::endl;
}
using namespace std;
int main()
{
int marks1[4]={14,25,84,98};
int marks2[6]={24,54,36,25,48,50};
arry(marks1,4);
arry(marks2,6);
return 0;
}
