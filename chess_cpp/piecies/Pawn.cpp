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

void Pawn::move(Board *board, Spot *start, Spot *end) {
    // Each piece is responsible for its logic of movement.
    // So the movement logic should be implemented here.
    // the method is not implemented, as the requirement for current task is only validation
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
