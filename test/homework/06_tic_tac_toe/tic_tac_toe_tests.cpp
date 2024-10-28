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
	REQUIRE(Game.get_current_player() == "None");

}