//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_QUEENMOVEVALIDATOR_H
#define CHESS_QUEENMOVEVALIDATOR_H


#include "PieceMoveValidator.h"
#include "BishopMoveValidator.h"
#include "RookMoveValidator.h"

class QueenMoveValidator : PieceMoveValidator{
private :
    BishopMoveValidator *bishopMoveValidator = new BishopMoveValidator();
    RookMoveValidator *rookMoveValidator = new RookMoveValidator();
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_QUEENMOVEVALIDATOR_H
