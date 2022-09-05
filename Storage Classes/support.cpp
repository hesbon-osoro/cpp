#include <iostream>
//#include"main.cpp"
//using namespace std;/*you can unhide here and below*/

extern int count;

void write_extern(void)
{
    //cout << "Count is " << count <<endl;/*unhide and this, same result*/
   std::cout << "Count is " << count << std::endl;
}
