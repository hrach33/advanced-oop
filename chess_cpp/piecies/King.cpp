//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "King.h"

King::King(bool white) : Piece(white)
{
}

bool King::isCastlingDone() {
    return this->castlingDone == true;
}

void King::setCastlingDone(bool castlingDone) {
    this->castlingDone = castlingDone;
}

std::vector<Spot> King::getPathSpots(Board* board, Spot* start, Spot* end) {
    return std::vector<Spot>();
}


KingIsUnderAttackResponse *King::isKingUnderAttack() {
    // should check on all directions, whether it is under attack or not, with direction
    return new KingIsUnderAttackResponse(false, "Direction");
}
