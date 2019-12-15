//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PIECEMOVEVALIDATOR_H
#define CHESS_PIECEMOVEVALIDATOR_H

#include <memory>
#include "../beans/ValidationResponse.h"
#include "../Board.h"

class PieceMoveValidator {

private:
    std::shared_ptr<PieceMoveValidator> nextValidator;

public:
    virtual void addValidator(std::shared_ptr<PieceMoveValidator> validator);

    virtual ValidationResponse *execute(Board *board, Spot *start, Spot *end);

    virtual bool validate(Board *board, Spot *start, Spot *end) = 0;

    virtual std::string getNotValidMessage() = 0;

};


#endif //CHESS_PIECEMOVEVALIDATOR_H
