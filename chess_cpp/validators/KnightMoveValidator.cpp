//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "KnightMoveValidator.h"
#include "../utils/MessageHandler.h"

bool KnightMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    int x = abs(start->getX() - end->getX());
    int y = abs(start->getY() - end->getY());
    return x * y == 2;
}

std::string KnightMoveValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
