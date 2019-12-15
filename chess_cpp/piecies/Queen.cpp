//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Queen.h"

void Queen::move(Board board, Spot start, Spot end) {
    // Each piece is responsible for its logic of movement.
    // So the movement logic should be implemented here.
    // the method is not implemented, as the requirement for current task is only validation
}

std::vector<Spot> Queen::getPathSpots(Board *board, Spot *start, Spot *end) {
    if(start->getX() == end->getX() || start->getY() == end->getY())
        return PathCalculator::getLinearPathSpots(board, start, end);
    else
        return PathCalculator::getDiagonalPathSpots(board, start, end);
}
