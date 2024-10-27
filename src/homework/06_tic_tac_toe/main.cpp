#include"tic_tac_toe_manager.h"
#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::cin;

int main() 
{
	TicTacToe game;
	
	string first_player = game.get_player();
	game.start_game(first_player);

	int position;
	do {
		cout << "enter position 1-9";
		cin >> position;
		game.mark_board(position);
		game.display_board();
	} while (position != 10);
	return 0;
}