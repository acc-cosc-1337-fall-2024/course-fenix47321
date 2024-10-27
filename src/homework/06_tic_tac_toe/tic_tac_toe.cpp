//cpp
#include"tic_tac_toe_manager.h"
#include<string>
#include<iostream>
#include<vector>
        
        
using std::vector;
using std::string;
using std::cout;
using std::cin;


bool TicTacToe::game_over(){

    for (int i = 0; i < 9; i += 3){
        if(pegs[i] != " " &&
        pegs[i] == pegs[i+1]&&
        pegs[i] == pegs[i+2]){
        set_next_player();
        cout << player << " Wins!\n";        
        return true;}
    }
        
    for (int i = 0; i < 3; i ++){
        if(pegs[i] != " " &&
        pegs[i] == pegs[i+3]&&
        pegs[i] == pegs[i+6]){
        set_next_player();
        cout << player << " Wins!\n";
        return true;}
    }

    if(pegs[0] != " " &&
        pegs[0] == pegs[4]&&
        pegs[4] == pegs[8]){
        set_next_player();
        cout << player << " Wins!\n";
        return true;}

    if(pegs[2] != " " &&
        pegs[2] == pegs[4]&&
        pegs[4] == pegs[6]){
        set_next_player();
        cout << player << " Wins!\n";
        return true;}

    return check_board_full();
}

void TicTacToe::start_game(string first_player){
    player = first_player;
    clear_board();
    display_board();
}

void TicTacToe::mark_board(int position){
    if (position < 1 || position > 9) {
        cout << "Invalid position, only between 1 and 9!";
        return;
    }
    
    if (pegs[position-1] != " ") {
        cout << "Position already taken";
        return;
    }

    pegs[position-1] = player;
    display_board();
    set_next_player();

}

string const TicTacToe::get_player(){
    // CONST
    string first_player;
    cout << "Please select fist player. First player is x or o. Second player auto O.\n";
    cin >> first_player;
    return first_player;
}

void const TicTacToe::display_board(){
    for(int i = 0; i < 9; i += 3) {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
        if(i < 6) cout << "-+-+-\n";
    }
}

void TicTacToe::set_next_player(){
    if (player == "x") {
        player = "o";
    }
    else {
        player = "x";
    }
}

bool TicTacToe::check_board_full(){
    for(int i = 0; i < 9; i++){
        if (pegs[i] == " "){
            return false;
        
        }
    }
    return true;
}


void TicTacToe::clear_board(){
    for(int i = 0; i < 9; i++) {
        pegs[i] = " ";
    }
}