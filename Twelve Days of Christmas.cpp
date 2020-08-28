//The Twelve Days of Christmas

#include <iostream>
#include <string>

using namespace std;

void twelveDays ();
string day (int x);

int main ()
{
	twelveDays ();

	return 0;
}

void twelveDays ()
{
	for (int i = 1; i < 13; i++)
	{
        cout << "On the " << day (i) << " day of Christmas" << endl;
        cout << "My true love gave to me" << endl;
		switch (i)
		{
        	case 12:
                if (i > 11)
                {
                    cout << "Twelve drummers drumming" << endl;
                }
            case 11:
                if (i > 10)
                {
                    cout << "Eleven pipers piping" << endl;
                }
            case 10:
                if (i > 9)
                {
                    cout << "Ten lords a leaping" << endl;
                }
            case 9:
                if (i > 8)
                {
                    cout << "Nine ladies dancing" << endl;
                }
            case 8:
                if (i > 7)
                {
                    cout << "Eight maids a milking" << endl;
                }
            case 7:
                if (i > 6)
                {
                    cout << "Seven swans a swimming" << endl;
                }
            case 6:
                if (i > 5)
                {
                    cout << "Six geese a laying" << endl;
                }
            case 5:
                if (i > 4)
                {
                    cout << "Five gold rings" << endl;
                }
            case 4:
                if (i > 3)
                {
                    cout << "Four calling birds" << endl;
                }
            case 3:
                if (i > 2)
                {
                    cout << "Three french hens" << endl;
                }
            case 2:
                if (i > 1)
                {
                    cout << "Two turtle doves" << endl;
                }
            case 1:
                if (i > 1)
                {
                    cout << "And a partridge in a pear tree" << endl << endl;
                }
                else
                {
                    cout << "A patridge in a pear tree" << endl << endl;
                }
                
		}
	}
}

string day (int x)
{
	switch (x)
	{
		case 1:
			return "first";
		case 2:
			return "second";
		case 3:
			return "third";
		case 4:
			return "fourth";
		case 5:
			return "fifth";
		case 6:
			return "sixth";
		case 7:
			return "seventh";
		case 8:
			return "eighth";
		case 9:
			return "ninth";
		case 10:
			return "tenth";
		case 11:
			return "eleventh";
		case 12:
			return "twelfth";
		default:
			return "ERROR";
	}
}