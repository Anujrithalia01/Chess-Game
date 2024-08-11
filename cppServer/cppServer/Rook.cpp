#include "Rook.h"
#include <set>
#include <vector>

std::set<std::pair<int, int>> Rook::get_possible_moves(std::map<std::pair<int, int>, std::pair<std::string, Chess_Piece*>>& board_map, std::string& player_id)
{
    std::set<std::pair<int, int>> valid_moves;
    //check in the plus positions
    std::vector<std::pair<int, int>> offset_group = { {1,0}, {0,1}, {0,-1}, {-1,0} };
    for (auto offset : offset_group)
    {
        valid_move_update(board_map, player_id, valid_moves, offset);
    }
    return valid_moves;
}