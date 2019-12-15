//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_DESTINATIONVALIDATOR_H
#define CHESS_DESTINATIONVALIDATOR_H


#include "../Board.h"
#include "../utils/MessageHandler.h"
#include "PieceMoveValidator.h"

class DestinationValidator : PieceMoveValidator{
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_DESTINATIONVALIDATOR_H
