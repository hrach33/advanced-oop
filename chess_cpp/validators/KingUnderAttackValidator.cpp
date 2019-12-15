//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "KingUnderAttackValidator.h"
#include "../piecies/King.h"
#include "../utils/MessageHandler.h"

bool KingUnderAttackValidator::validate(Board *board, Spot *start, Spot *end) {
    bool isWhite = start->getPiece().get()->isWhite();
    std::shared_ptr<Piece> endPiece = end->getPiece();
    end->setPiece(start->getPiece());
    start->setPiece(nullptr);

    Spot* kingSpot = board->getKingSpot(isWhite);
    King king = (King)kingSpot->getPiece().get();
    bool kingIsUnderAttack = king.isKingUnderAttack()->isUnderAttack();
    start->setPiece(end->getPiece());
    end->setPiece(endPiece);

    return !kingIsUnderAttack;
}

std::string KingUnderAttackValidator::getNotValidMessage() {
    return MessageHandler::getNoMessage();
}
