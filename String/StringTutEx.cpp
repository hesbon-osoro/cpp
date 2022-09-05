// stringstreams
 #include <iostream>
 #include <string>
 #include <sstream>
 using namespace std;
int main ()
{
string mystr;
float price=0;
int quantity=0;
cout << "Enter price: ";
getline (cin,mystr);
stringstream(mystr) >> price;
cout << "Enter quantity: ";
getline (cin,mystr);
stringstream(mystr) >> quantity;
cout << "Total price: " << price*quantity << endl;
return 0;
}
/*In this example, we acquire numeric values from
the standard input indirectly. Instead of extracting
numeric values directly from the standard input,
we get lines from the standard input (cin) into a
string object (mystr), and then we extract the integer
values from this string into a variable of type int
(quantity).  */

/*Using this method, instead of direct extractions
of integer values, we have more control over what
happens with the input of numeric values from the
user, since we are separating the process of
obtaining input from the user (we now simply ask
for lines) with the interpretation of that input.
  Therefore, this method is usually preferred to get
  numerical values from the user in all programs that
  are intensive in user input. */
