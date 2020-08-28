 #include <iostream>
 #include <string>
 
 using namespace std;
 
 int main ()
 {
     string op;
     double x {0};
     double y {0};
     
     cout << "Enter '+', '-', '/', or '*': " << '\n';
     cin >> op;
     cout << "Enter a number: " << '\n';
     cin >> x;
     cout << "Enter a second number: " << '\n';
     cin >> y;
     if (op == "+")
     {
         cout << x + y << '\n';
     }
     else if (op == "-")
     {
         cout << x - y << '\n';
     }
     else if (op == "/")
     {
         cout << x / y << '\n';
     }
     else if (op == "*")
     {
         cout << x * y << '\n';
     }
     else
     {
         cout << "Invalid operator." << '\n';
     }
     
    return 0;
 }