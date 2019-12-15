//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Pawn.h"

void Pawn::setMoved(bool moved) {
    this->moved = moved;
}

std::vector<Spot> Pawn::getPathSpots(Board *board, Spot *start, Spot *end) {
    std::vector<Spot> spots;
    if (end->getY() - start->getY() == 2)
        spots.push_back(board->getBox(start->getX(), start->getY() + 1));

    return spots;
}


bool Pawn::isEnPassant() {
    return enPassant;
}

void Pawn::setEnPassant(bool enPassant) {
    this->enPassant = enPassant;
}

bool Pawn::isMoved() {
    return moved;
}
