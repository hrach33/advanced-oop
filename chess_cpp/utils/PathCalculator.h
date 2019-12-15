//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PATHCALCULATOR_H
#define CHESS_PATHCALCULATOR_H


#include <vector>
#include <opencl-c.h>
#include "../Spot.h"

class PathCalculator {
public:
    static std::vector<Spot> getDiagonalPathSpots(Board* board,Spot* start, Spot* end);

     static std::vector<Spot> getLinearPathSpots(Board* board,Spot* start, Spot* end);
};


#endif //CHESS_PATHCALCULATOR_H
