//
// Created by Hrach Khachatryan on 12/16/19.
//

#ifndef CHESS_PIECEGONECHECKER_H
#define CHESS_PIECEGONECHECKER_H


#include "../Board.h"

class PieceGoneChecker {
public:
    void check(Board* board, Spot* start, Spot* end, std::vector<std::string> messages);
};


#endif //CHESS_PIECEGONECHECKER_H
