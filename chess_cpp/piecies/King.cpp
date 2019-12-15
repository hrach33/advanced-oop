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

void King::move(Board board, Spot start, Spot end) {
    // Each piece is responsible for its logic of movement.
    // So the movement logic should be implemented here.
    // the method is not implemented, as the requirement for current task is only validation
}

KingIsUnderAttackResponse *King::isKingUnderAttack() {
    // should check on all directions, whether it is under attack or not, with direction
    return new KingIsUnderAttackResponse(false, "Direction");
}
