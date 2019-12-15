//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "RookMoveValidator.h"
#include "../utils/MessageHandler.h"

bool RookMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    return (start->getX() == end->getX() && abs(start->getY() - end->getY()) > 0) ||
           (start->getY() == end->getY() && abs(start->getX() - end->getX()) > 0);
}

std::string RookMoveValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
