//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "BishopMoveValidator.h"

bool BishopMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    return abs(start->getX() - end->getX()) != 0 && abs(start->getX() - end->getX()) == abs(start->getY() - end->getY());
}

std::string BishopMoveValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
