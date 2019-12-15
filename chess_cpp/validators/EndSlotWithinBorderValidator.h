//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_ENDSLOTWITHINBORDERVALIDATOR_H
#define CHESS_ENDSLOTWITHINBORDERVALIDATOR_H


#include "../Board.h"
#include "PieceMoveValidator.h"

class EndSlotWithinBorderValidator: PieceMoveValidator {
public:
    bool validate(Board* board, Spot* start, Spot* end);
    std::string getNotValidMessage();
};


#endif //CHESS_ENDSLOTWITHINBORDERVALIDATOR_H
