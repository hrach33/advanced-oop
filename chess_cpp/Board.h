//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include "Spot.h"

class Board {
private:
    Spot** boxes;

public:
    Board();

    Spot* getBox(int x, int y);

    void setBox(int x, int y, Spot spot);

    void resetBoard();

    Spot* getKingSpot(bool isWhite);

    virtual ~Board();
};


#endif //CHESS_BOARD_H
