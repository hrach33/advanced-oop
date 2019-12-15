//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H


#include "Piece.h"
#include "../utils/PathCalculator.h"

class Rook : Piece {
private:
    bool moved;

public:
    Rook(bool white);

    std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end);

    bool isMoved();
    void setMoved(bool moved);
};


#endif //CHESS_ROOK_H
