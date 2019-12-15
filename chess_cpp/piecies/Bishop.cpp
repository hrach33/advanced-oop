//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Bishop.h"
#include "../utils/PathCalculator.h"

std::vector<Spot> Bishop::getPathSpots(Board *board, Spot *start, Spot *end) {
    return PathCalculator::getDiagonalPathSpots(board, start, end);
}

void Bishop::move(Board *board, Spot *start, Spot *end) {
    // Each piece is responsible for its logic of movement.
    // So the movement logic should be implemented here.
    // the method is not implemented, as the requirement for current task is only validation
}
