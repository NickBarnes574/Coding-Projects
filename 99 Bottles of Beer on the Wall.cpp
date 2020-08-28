#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x {99};

	while (x > 0)
	{
        if (x == 1)
        {
            cout << x << " bottle of beer on the wall " << x << " bottle of beer, take one down, pass it around, ";
            cout << x - 1 << " bottles of beer on the wall." << endl;
        }
        else
        {
            cout << x << " bottles of beer on the wall " << x << " bottles of beer, take one down, pass it around, ";
            cout << x - 1 << " bottles of beer on the wall." << endl;
        }
        x--;
	}

	return 0;
}