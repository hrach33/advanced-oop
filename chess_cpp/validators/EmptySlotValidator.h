//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_EMPTYSLOTVALIDATOR_H
#define CHESS_EMPTYSLOTVALIDATOR_H


#include "../Spot.h"
#include "../utils/MessageHandler.h"
#include "PieceMoveValidator.h"

class EmptySlotValidator : PieceMoveValidator{

public :
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_EMPTYSLOTVALIDATOR_H
