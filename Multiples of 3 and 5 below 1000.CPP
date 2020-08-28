#include <iostream>

using namespace std;

int n = 0;

int sum ();

int main ()
{
    sum ();
}

int sum ()
{
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            n += i;
        }
        else
        {
           
        }
    }
    cout << n;
}