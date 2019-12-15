//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KINGUNDERATTACKVALIDATOR_H
#define CHESS_KINGUNDERATTACKVALIDATOR_H


#include "PieceMoveValidator.h"

class KingUnderAttackValidator : PieceMoveValidator{
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_KINGUNDERATTACKVALIDATOR_H
