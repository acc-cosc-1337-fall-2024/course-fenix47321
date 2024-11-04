#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class TicTacToe {
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string const get_player();
    void const display_board();
    string const get_current_player() const { return player; }
    

private:
    vector<string> pegs{9, " "};
    string player;
    string winner;
    
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
    void set_winner();

};

#endif