/*****************************************************************************************************
 * 2. Write a menu program that lets the user select from a list of options, and if the input is not
 *    one of the options, reprint the list.
******************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string food;
    
    while (1)
    {
        cout << "Please choose your favorite food from the list of options: " << endl;
        cout << "a. Cereal" << endl << "b. Pizza" << endl << "c. Chicken Pot Pie" << endl << endl;
        getline (cin, food, '\n');
        cout << endl <<endl;
        if (food == "a" || food == "b" || food == "c")
        {
            break;
        }
        cout << "'" << food << "'" << " is not an option." << endl << endl;
    }
    if (food == "a")
    {
        cout << "Your favorite food is Cereal." << endl << endl;
    }
    else if (food == "b")
    {
        cout << "Your favorite food is Pizza." << endl << endl;
    }
    else if (food == "c")
    {
        cout << "Your favorite food is Chicken Pot Pie." << endl << endl;
    }
    
    return 0;
}