/*****************************************************************************************************
 * 3. Write a program that computes a running sum of inputs from the user, terminating when the user
 *    gives an input value of 0.
******************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int n {0};
    int sum {0};
    
    cout << "Type in a series of numbers to compute a running sum. Computer will stop when 0 is pressed" << endl << endl;
    while (1)
    {
        cout << "number:      ";
        cin >> n;
        if (n != 0)
        {
            sum = n + sum;
            cout << "running sum: " << sum << endl << endl;
        }
        else
        {
            break;
        }
    }
    cout << "Total sum: " << sum << endl;
    
    return 0;
}