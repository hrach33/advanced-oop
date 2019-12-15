//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "PathCalculator.h"

std::vector<Spot> PathCalculator::getDiagonalPathSpots(Board *board, Spot *start, Spot *end) {
    std::vector<Spot> spots;

    int xDir = (start->getX() - end->getY()) / abs(start->getX() - end->getY());
    int yDir = (start->getY() - end->getY()) / abs(start->getY() - end->getY());

    for(int x = start->getX() + xDir; x != end->getX(); x+=xDir){
        for(int y = start->getY() + yDir; y != end->getY(); y+=yDir){
            if(board->getBox(x,y) != nullptr)
                spots.pop_back(board->getBox(x,y));
        }
    }

    return spots;
}

std::vector<Spot> PathCalculator::getLinearPathSpots(Board *board, Spot *start, Spot *end) {
    std::vector<Spot> spots;
    if(start->getX() == end->getX() && abs(start->getY() - end->getY()) > 1) {
        int x = start->getX();
        for (int y = min(start->getY(), end->getY()); y <= max(start.getY(), end.getY()); y++) {
            if(board->getBox(x, y) != nullptr)
                spots.push_back(board->getBox(x, y));
        }
    } else if(start->getY() == end->getY() && abs(start->getX() - end->getX()) > 1) {
        int y = start->getY();
        for (int x = min(start->getX(), end->getX()); x <= max(start->getX(), end->getX()); x++) {
            if(board->getBox(x, y) != nullptr)
                spots.push_back(board->getBox(x, y));
        }
    }
    return spots;
}
