//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_SPOT_H
#define CHESS_SPOT_H


#include <memory>
#include "piecies/Piece.h"

class Spot {
private:
    std::shared_ptr<Piece> piece;
    int x;
    int y;

public:
    Spot();
    Spot(int x, int y, std::shared_ptr<Piece> piece);

    std::shared_ptr<Piece> getPiece();

    void setPiece(std::shared_ptr<Piece> p);

    int getX();

    void setX(int x);

    int getY();

    void setY(int y);
};


#endif //CHESS_SPOT_H
