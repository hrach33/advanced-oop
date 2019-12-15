//
// Created by Hrach Khachatryan on 12/16/19.
//

#include "KingUnderAttackChecker.h"

void KingUnderAttackChecker::check(Board *board, Spot *start, Spot *end, std::vector<std::string> messages) {
    Spot* kingSpot = board->getKingSpot(!start->getPiece().get()->isWhite());
    std::shared_ptr<Piece> endPiece = end->getPiece();
    end->setPiece(start->getPiece());
    start->setPiece(nullptr);
    KingIsUnderAttackResponse* kingUnderAttack = ((King) kingSpot->getPiece().get()).isKingUnderAttack();
    if(kingUnderAttack->isUnderAttack())
        messages.push_back(kingUnderAttack->getMessage());

    start->setPiece(end->getPiece());
    end->setPiece(endPiece);

}
