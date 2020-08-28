#include <iostream>

using namespace std;

int fibonacci ();

int main ()
{
	cout << "1 + 2 + 3 + 5 + 8 + 13 + 21 + 34 + 55 + 89 = ";
	cout << 1+2+3+5+8+13+21+34+55+89 << endl << endl;
	cout << "My function returns: " << fibonacci () << endl;

	return 0;
}

int fibonacci ()
{
    int x = 0; //0 is the first number in the sequence
    int y = 1; //1 is the second number in the sequence
    int z = 0; //z will be used as a third variable when adding x and y together
    int sum = 0;//this is the variable used as the running sum
    
    for ( int i = 0; y <= 4000000; i++) //I used y as the loop operand because I am checking to make sure that the value of y doesn't grow past 4 million.
    {
        z = x + y; //this adds x and y together
        x = y; //shifts x forward
        y = z; //shifts y forward
        
        if (x % 2 == 0)
        {
            sum += x; //calculates running sum
        }
    }
    return sum;
}