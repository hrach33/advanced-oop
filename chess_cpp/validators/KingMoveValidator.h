//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KINGMOVEVALIDATOR_H
#define CHESS_KINGMOVEVALIDATOR_H


#include "PieceMoveValidator.h"

class KingMoveValidator : PieceMoveValidator{
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_KINGMOVEVALIDATOR_H
