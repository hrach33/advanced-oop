//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Rook.h"

Rook::Rook(bool white) : Piece(white) {
}

void Rook::move(Board *board, Spot *start, Spot *end) {
    // Each piece is responsible for its logic of movement.
    // So the movement logic should be implemented here.
    // the method is not implemented, as the requirement for current task is only validation
}

bool Rook::isMoved() {
    return moved;
}

void Rook::setMoved(bool moved) {
    this->moved = moved;
}

std::vector<Spot> Rook::getPathSpots(Board *board, Spot *start, Spot *end) {
    return PathCalculator::getLinearPathSpots(board, start, end);
}
