//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Rook.h"

Rook::Rook(bool white) : Piece(white) {
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
