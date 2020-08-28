/*****************************************************************************************************
 * 7. Write a program that provides the option of tallying up the results of a poll with 3 possible
 *    values. The first input to the program is the poll question; the next three inputs are the
 *    possible answers. The first answer is indicated by 1, the second by 2, the third by 3.
 *    The answers are tallied until a 0 is entered. The program should then show the results of the
 *    poll—try making a bar graph that shows the results properly scaled to fit on your screen no
 *    matter how many results were entered.
******************************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string poll;
    string ques1;
    string ques2;
    string ques3;
    int val1 {0};
    int val2 {0};
    int val3 {0};
    int results {0};
    int n {0};
    
    cout << "Enter poll question will 3 possible answers to be tallied." << endl << endl;
    cout << "QUESTION: ";
    getline (cin, poll, '\n');
    cout << endl << endl;
    cout << "1: " ;
    getline (cin, ques1, '\n');
    cout << "2: " ;
    getline (cin, ques2, '\n');
    cout << "3: " ;
    getline (cin, ques3, '\n');
    cout << endl;
    cout << "Poll has begun. Please enter 1-3, and results will be tallied until 0 is pressed." << endl;
    while (1)
    {
        cin >> n;
        
        if (n > 0)
        {
            if (n == 1)
            {
                val1++;
            }
            else if (n == 2)
            {
                val2++;
            }
            else if (n == 3)
            {
                val3++;
            }
            else
            {
                cout << "Please enter a valid number: 1, 2, or 3." << endl << endl;
            }
        }
        else
        {
            break;
        }
    }
    cout << "Poll is now closed. Results are as follows: " << endl;
    cout << "1: " << ques1 << endl << "Result: " << val1 << endl << endl;
    cout << "2: " << ques2 << endl << "Result: " << val2 << endl << endl;
    cout << "3: " << ques3 << endl << "Result: " << val3 << endl << endl;
    if (val1 > val2 && val1 > val3)
    {
        cout << "When asked " << "'" << poll << "', " << "most people say " << "'" << ques1 << "'" << endl;
    }
    else if (val2 > val1 && val2 > val3)
    {
        cout << "When asked " << "'" << poll << "', " << "most people say " << "'" << ques2 << "'" << endl;
    }
    else if (val3 > val1 && val3 > val2)
    {
        cout << "When asked " << "'" << poll << "', " << "most people say " << "'" << ques3 << "'" << endl;
    }
    
    return 0;
}