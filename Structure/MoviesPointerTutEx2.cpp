// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct movies_t
{
string title;
int year;
};
int main ()
{
  string mystr;
  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;
  cout << "Enter title: ";
  getline (cin, pmovie->title);
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;
  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";
  return 0;
}
/*Expression What is evaluated Equivalent
a.b Member b of object a
a->b Member b of object pointed by a
(*a).b *a.b Value pointed by member b of object a *(a.b) */
