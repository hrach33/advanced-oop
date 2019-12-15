//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PATHAVAILABLEVALIDATOR_H
#define CHESS_PATHAVAILABLEVALIDATOR_H


#include "PieceMoveValidator.h"

class PathAvailableValidator : PieceMoveValidator{
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_PATHAVAILABLEVALIDATOR_H
