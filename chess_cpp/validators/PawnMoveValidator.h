//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PAWNMOVEVALIDATOR_H
#define CHESS_PAWNMOVEVALIDATOR_H


#include "PieceMoveValidator.h"

class PawnMoveValidator : PieceMoveValidator{
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_PAWNMOVEVALIDATOR_H
