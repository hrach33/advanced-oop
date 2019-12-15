//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_BISHOPMOVEVALIDATOR_H
#define CHESS_BISHOPMOVEVALIDATOR_H


#include "PieceMoveValidator.h"
#include "../utils/MessageHandler.h"

class BishopMoveValidator: PieceMoveValidator {

public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_BISHOPMOVEVALIDATOR_H
