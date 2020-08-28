/*****************************************************************************************************
 * 6. Write a program that displays the first 20 square numbers.
******************************************************************************************************/


#include <iostream>

using namespace std;

int main ()
{
    for (int i = 0; i < 21; i++)
        {
            cout << i << " squared = ";
            cout << i*i << endl;
        }
    
    return 0;
}