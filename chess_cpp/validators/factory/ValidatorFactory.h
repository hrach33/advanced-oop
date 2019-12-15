//
// Created by Hrach Khachatryan on 12/16/19.
//

#ifndef CHESS_VALIDATORFACTORY_H
#define CHESS_VALIDATORFACTORY_H


#include "../PieceMoveValidator.h"
#include "../BishopMoveValidator.h"

class ValidatorFactory {
public:
    PieceMoveValidator* getPieceMoveValidator(std::string piece);

 PieceMoveValidator* getBaseValidatorChain();
};


#endif //CHESS_VALIDATORFACTORY_H
