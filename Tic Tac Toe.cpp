//Tic Tac Toe

/*
1. Menu selection
2. Input names
3. Draw board
4. Change value for square
*/


#include <iostream>
#include <string>

using namespace std;

enum value {v_BLANK, v_O, v_X};

void menu ();
void start ();
void board ();
string square ();

int main ()
{
	menu ();
}

void menu () //Runs the main menu
{
	int selection;
	cout << "Welcome to Tic Tac Toe" << endl << endl;
	while (1)
	{
		cout << "1. Play" << endl;
		cout << "2. Rules" << endl;
		cout << "3. Exit" << endl;
		cout << "SELECTION: " << endl;
		cin >> selection;
		switch (selection)
		{
			case 1:
				start ();
                break;
		}
	}
}

void start () //Begins the game
{
	string playerOne;
	string playerTwo;

	cout << "Player 1 name: ";
	cin >> playerOne;
	cout << "Welcome " << playerOne << "!" << endl << endl;
	cout << "Player 2 name: ";
	cin >> playerTwo;
	cout << "Welcome " << playerTwo << "!" << endl << endl;
	board ();
}

void board () //Draws the board horizontally, line by line
{
	for (int i = 1; i < 4; i++)
	{
		for (int i = 1; i < 4; i++)
		{
			cout << " [" << i << "] "; //numbers each square for the player
		}
		cout << endl << endl;
	}
}

string square (int value) //Fills in the board with X's or O's depending on the user's input, otherwise keeps a blank placeholder value for each square
{
	switch (value)
	{
		case v_O:
			return "O";
		case v_x:
			return "X";
		default v_BLANK:
			return " ";
	}
}