//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KNIGHTMOVEVALIDATOR_H
#define CHESS_KNIGHTMOVEVALIDATOR_H


#include "PieceMoveValidator.h"

class KnightMoveValidator: PieceMoveValidator {
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_KNIGHTMOVEVALIDATOR_H
