#include <iostream>
#include <string>

using namespace std;

int main ()
{
string username;
string password;
int attemptCount = 0;

while ( attemptCount < 3 )
{
cout << "Enter your username: " << endl;
cin >> username;
cout << "Enter your password: " << endl;
cin >> password;

if ( username != "billy" && password != "bob" )
{
    cout << "Incorrect username/password combination. Please try again." << "\n" <<
    endl;

    attemptCount++;
}

else
{
    break;
}
}

cout << "Access granted." << endl;
}
