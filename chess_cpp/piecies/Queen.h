//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H


#include "Piece.h"
#include "../utils/PathCalculator.h"

class Queen : Piece{
public:
    Queen(bool white): Piece(white) {
    }

    std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end);


};


#endif //CHESS_QUEEN_H
