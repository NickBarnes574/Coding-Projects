#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long int number = 0;
long long int counter = 0;
long long int largest = 0;

void factors (long long int n);
long long int prime (long long int n);

int main ()
{
    cout << "Enter a number: ";
    cin >> number;
    factors (number); //The number you want to find the factors of;
    cout << "largest prime factor is: " << largest << endl;
    return 0;
}

void factors (long long int n)
{
    for (long long int i = 2; i <= sqrt(number); i++) //do not set 'i' to '0' otherwise program will crash trying to divide by zero.
    {
        if (n % i == 0) //checks if 'n' divided by 'i' has a remainder of zero and 'i' is a factor.
        {
            prime(i);
        }
        counter++;
        if (counter % 100000 == 0)
        {
            cout << "counter value: " << counter << endl;
        }
    }
}

long long int prime (long long int f) // checks to see if the factors are prime
{
    for (long long int i = 2; i <= f/2; i++) //half of f is the largest possible factor.
    {
        if (f % i == 0)
        {
            return 0;
        }
        counter++;
        if (counter % 100000 == 0)
        {
            cout << "counter value: " << counter << endl;
        }
    }
    cout << f << endl;
    if (f > largest)
        {
            largest = f;
        }
    return f;
}