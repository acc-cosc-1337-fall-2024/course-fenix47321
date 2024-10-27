#include"tic_tac_toe_manager.h"
#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	TicTacToe game;

	int position;
	string asker;
	asker = "y";
	
	while (asker == "y"){

		string first_player = game.get_player();
		game.start_game(first_player);

		do {
			cout << "enter position 1-9";
			cin >> position;
			game.mark_board(position);
		} while (!game.game_over());
	cout << "Do you want to play the game again? y/n\n";
	cin >> asker;
	}
	return 0;
}