#include <iostream>
#include"support.cpp"

int count ;
extern void write_extern();

main()
{
   count = 5;

   write_extern();
}
