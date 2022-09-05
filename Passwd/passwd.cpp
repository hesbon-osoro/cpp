#include <iostream>
#include <string>

using namespace std;

int main ()
{
string username;
string password;

while ( 1 )
{
    cout << "Enter your username: " << endl;
    cin >> username;
    cout << "Enter your password: " << endl;
    cin >> password;

    if ( username != "billy" && password != "bob" )
    {
        cout << "Incorrect username/password combination. Please try again." << "\n" <<
        endl;
    }

    else
    {
        break;
    }
}
return 0;
}
