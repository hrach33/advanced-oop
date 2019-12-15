//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Spot.h"

Spot::Spot(){}
Spot::Spot(int x, int y, std::shared_ptr<Piece> piece)
{
    this->setPiece(piece);
    this->setX(x);
    this->setY(y);
}

std::shared_ptr<Piece> Spot::getPiece()
{
    return this->piece;
}

void Spot::setPiece(std::shared_ptr<Piece> p)
{
    this->piece = p;
}

int Spot::getX()
{
    return this->x;
}

void Spot::setX(int x)
{
    this->x = x;
}

int Spot::getY()
{
    return this->y;
}

void Spot::setY(int y)
{
    this->y = y;
}