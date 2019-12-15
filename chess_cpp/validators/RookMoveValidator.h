//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_ROOKMOVEVALIDATOR_H
#define CHESS_ROOKMOVEVALIDATOR_H


#include "PieceMoveValidator.h"

class RookMoveValidator: PieceMoveValidator {
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_ROOKMOVEVALIDATOR_H
