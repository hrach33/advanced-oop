//
// Created by Hrach Khachatryan on 12/16/19.
//

#include "ValidatorFactory.h"
#include "../EmptySlotValidator.h"
#include "../EndSlotWithinBorderValidator.h"
#include "../KingMoveValidator.h"
#include "../DestinationValidator.h"
#include "../PathAvailableValidator.h"
#include "../KingUnderAttackValidator.h"
#include "../KnightMoveValidator.h"
#include "../PawnMoveValidator.h"
#include "../QueenMoveValidator.h"
#include "../RookMoveValidator.h"

PieceMoveValidator *ValidatorFactory::getBaseValidatorChain() {
    PieceMoveValidator* validatorChain =  new EmptySlotValidator();
    validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new EndSlotWithinBorderValidator()));
    validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new DestinationValidator()));
    validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new KingUnderAttackValidator()));
    validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new PathAvailableValidator()));
    return validatorChain;
}

PieceMoveValidator *ValidatorFactory::getPieceMoveValidator(std::string piece) {

    PieceMoveValidator* validatorChain = getBaseValidatorChain();
    if(piece == "bishop"){
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new BishopMoveValidator()));
    } else if (piece == "king") {
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new KingMoveValidator()));
    } else if (piece == "knight") {
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new KnightMoveValidator()));
    } else if (piece == "pawn") {
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new PawnMoveValidator()));
    } else if (piece == "queen") {
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new QueenMoveValidator()));
    } else if (piece == "rook") {
        validatorChain->addValidator(std::make_shared<PieceMoveValidator>(new RookMoveValidator()));
    }

    return validatorChain;
}
