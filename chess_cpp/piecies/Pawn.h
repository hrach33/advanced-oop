//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include <vector>
#include "Piece.h"

class Pawn : Piece {
private:
    bool enPassant;
    bool moved;

public:
    Pawn(bool white) : Piece(white) {
    }

    std::vector<Spot> getPathSpots(Board *board, Spot *start, Spot *end);


    bool isEnPassant();

    void setEnPassant(bool enPassant);

    bool isMoved();

    void setMoved(bool moved);
};


#endif //CHESS_PAWN_H
