//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Queen.h"


std::vector<Spot> Queen::getPathSpots(Board *board, Spot *start, Spot *end) {
    if(start->getX() == end->getX() || start->getY() == end->getY())
        return PathCalculator::getLinearPathSpots(board, start, end);
    else
        return PathCalculator::getDiagonalPathSpots(board, start, end);
}
