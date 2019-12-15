//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "KingMoveValidator.h"
#include "../piecies/King.h"

bool isCastlingMove(Spot* start, Spot* end)
{
    return abs(end->getX() - start->getX()) > 1 && start->getY() == end->getY();
}

bool isValidCastling(Board* board, Spot* start, Spot* end)
{

    if (((King)(start->getPiece().get())).isCastlingDone()) {
        return false;
    }

    // Logic for returning true or false
    return true;
}

bool KingMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    int x = abs(start->getX() - end->getX());
    int y = abs(start->getY() - end->getY());
    if(x + y == 1)
        return true;
    if(isCastlingMove(start, end))
        return isValidCastling(board, start, end);

    return false;
}

std::string KingMoveValidator::getNotValidMessage() {

}

