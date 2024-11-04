#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe_manager.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Checking the game!"){
	TicTacToe Game;
	Game.start_game("x");

	Game.mark_board(1);
	REQUIRE(Game.get_current_player() == "o");

	Game.mark_board(2);
	REQUIRE(Game.get_current_player() == "x");

	Game.mark_board(3);
	REQUIRE(Game.get_current_player() == "o");

	Game.mark_board(5);
	REQUIRE(Game.get_current_player() == "x");

	Game.mark_board(6);
	REQUIRE(Game.get_current_player() == "o");

	Game.mark_board(7);
	REQUIRE(Game.get_current_player() == "x"); 

	Game.mark_board(8);
	REQUIRE(Game.get_current_player() == "o");

	Game.mark_board(9);
	REQUIRE(Game.get_current_player() == "x");

	// Last move, should end the game.
	// Here's logic, each turn player changes. Pass means game continues. Except after game over Player is set to None. That is what we check for end of the game!
	Game.mark_board(4);
	REQUIRE(Game.get_current_player() == "C");

}

TEST_CASE("Test first player X") {
    TicTacToe game;
    game.start_game("x");
	game.mark_board(1);
    REQUIRE(game.get_current_player() == "o");
}

TEST_CASE("Test first player O") {
    TicTacToe game; 
    game.start_game("o");
	game.mark_board(1);
    REQUIRE(game.get_current_player() == "x");
}

TEST_CASE("Win by first column") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(1); // X
	game.mark_board(2); // O
	game.mark_board(4); // X 
	game.mark_board(3); // O
	game.mark_board(7); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by second column") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(2); // X
	game.mark_board(1); // O
	game.mark_board(5); // X
	game.mark_board(3); // O
	game.mark_board(8); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by third column") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(3); // X
	game.mark_board(1); // O
	game.mark_board(6); // X
	game.mark_board(2); // O
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by first row") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(1); // X
	game.mark_board(4); // O
	game.mark_board(2); // X
	game.mark_board(5); // O
	game.mark_board(3); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by second row") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(4); // X
	game.mark_board(1); // O
	game.mark_board(5); // X
	game.mark_board(2); // O
	game.mark_board(6); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win by third row") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(7); // X
	game.mark_board(1); // O
	game.mark_board(8); // X
	game.mark_board(2); // O
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win diagonally top left") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(1); // X
	game.mark_board(2); // O
	game.mark_board(5); // X
	game.mark_board(3); // O
	game.mark_board(9); // X
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Win diagonally bottom left") {
	TicTacToe game;
	game.start_game("x");
	game.mark_board(7); // X
	game.mark_board(1); // O
	game.mark_board(5); // X
	game.mark_board(2); // O
	game.mark_board(3); // X
	REQUIRE(game.game_over() == true);
}