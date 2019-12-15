//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Bishop.h"
#include "../utils/PathCalculator.h"

std::vector<Spot> Bishop::getPathSpots(Board *board, Spot *start, Spot *end) {
    return PathCalculator::getDiagonalPathSpots(board, start, end);
}

