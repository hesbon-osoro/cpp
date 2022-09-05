#include <iostream>

using namespace std;

int main()
{
    string password;
    int pCounter = 0;
    cout << "Enter Password here: ";
    getline(cin, password);
    while(pCounter <= 4){
        if(password != "winner"){
            cout << "Count: " << pCounter << endl;
            cout << "Try again..wrong entry.." << endl;
            cout << "Enter Password here: ";
            getline(cin, password);
            ++pCounter;
                if((password != "winner") && (pCounter == 4)){
                    cout << "The End..No more tries!!" << endl;
                    break;
                }
        }

        else{
            cout << "Welcome In Bro" << endl;
            break;
        }
    }
    return 0;
}
