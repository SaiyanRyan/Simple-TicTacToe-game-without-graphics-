#include <iostream>
using namespace std;

char squares[10] = { 'o' , '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checksWhoWon();
void gameBoard();

int main()
{
	int player = 1, i, choice;

	char mark;
	do
	{
		gameBoard();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number: ";
		cin >> choice;

		mark = (player == 1) ? 'x' : 'o';
		if (choice == 1 && squares[1] == '1')
			squares[1] = mark;
		else if (choice == 2 && squares[2] == '2')

			squares[2] = mark;
		else if (choice == 3 && squares[3] == '3')

			squares[3] = mark;
		else if (choice == 4 && squares[4] == '4')

			squares[4] = mark;
		else if (choice == 5 && squares[5] == '5')

			squares[5] = mark;
		else if (choice == 6 && squares[6] == '6')

			squares[6] = mark;
		else if (choice == 7 && squares[7] == '7')

			squares[7] = mark;
		else if (choice == 8 && squares[8] == '8')

			squares[8] = mark;
		else if (choice == 9 && squares[9] == '9')

			squares[9] = mark;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = checksWhoWon();

		player++;
	} while (i == -1);
	gameBoard();
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
		cout << "==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checksWhoWon()
{
	if (squares[1] == squares[2] && squares[2] == squares[3])

		return 1;
	else if (squares[4] == squares[5] && squares[5] == squares[6])

		return 1;
	else if (squares[7] == squares[8] && squares[8] == squares[9])

		return 1;
	else if (squares[1] == squares[4] && squares[4] == squares[7])

		return 1;
	else if (squares[2] == squares[5] && squares[5] == squares[8])

		return 1;
	else if (squares[3] == squares[6] && squares[6] == squares[9])

		return 1;
	else if (squares[1] == squares[5] && squares[5] == squares[9])

		return 1;
	else if (squares[3] == squares[5] && squares[5] == squares[7])

		return 1;
	else if (squares[1] != '1' && squares[2] != '2' && squares[3] != '3'
		&& squares[4] != '4' && squares[5] != '5' && squares[6] != '6'
		&& squares[7] != '7' && squares[8] != '8' && squares[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
	 FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void gameBoard()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << squares[1] << "  |  " << squares[2] << "  |  " << squares[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << squares[4] << "  |  " << squares[5] << "  |  " << squares[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << squares[7] << "  |  " << squares[8] << "  |  " << squares[9] << endl;

	cout << "     |     |     " << endl << endl;
}
	