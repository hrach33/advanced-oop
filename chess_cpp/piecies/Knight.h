//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Piece.h"

class Knight: Piece {
public:
    Knight(bool white);

    std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end) {
        return std::vector<Spot>();
    }

    void move(Board* board, Spot* start, Spot* end);
};


#endif //CHESS_KNIGHT_H
