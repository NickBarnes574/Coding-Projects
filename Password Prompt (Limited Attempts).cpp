/*****************************************************************************************************
 * 4. Write a password prompt that gives a user only a certain number of password entry attempts—so
 *    that the user cannot easily write a password cracker.
******************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string username;
    string password;
    
    cout << "Enter your Username" << endl;
    getline (cin, username, '\n');
    
    for (int i = 3; i > 0; i--)
    {
        cout << "Enter your password: " << endl;
        getline (cin, password, '\n');
        if (password == "catsRgay")
        {
            cout << "Access granted!" << endl;
            break;
        }
        else
        {
            cout << "Wrong password " << i-1 << " attempts left" << endl << endl;
            if (i-1 == 0)
            {
                cout << "Ha! Fucking scrub. Get lost retard." << endl << endl;
            }
        }
    }
}
