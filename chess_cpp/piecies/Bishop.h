//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H


#include "Piece.h"
class Bishop: Piece {
public:
    Bishop(bool white):Piece(white) {
    }
    std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end);
};


#endif //CHESS_BISHOP_H
