//cpp
#include"tic_tac_toe_manager.h"
#include<string>
#include<iostream>
#include<vector>
        
        
using std::vector;
using std::string;
using std::cout;
using std::cin;


bool game_over();

void start_game(string first_player);

void mark_board(int position);

string const get_player(){
    // CONST
    string first_player;
    cout << "Please select fist player. First player is X or O. Second player auto O.\n";
    cin >> first_player;
    return first_player;
}

void const TicTacToe::display_board(){
    for(int i = 0; i < 9; i += 3) {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
        if(i < 6) cout << "-+-+-\n";
    }
}

void set_next_player();

bool check_board_full();

void clear_board();