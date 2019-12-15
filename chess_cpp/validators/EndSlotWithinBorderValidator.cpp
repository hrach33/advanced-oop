//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "EndSlotWithinBorderValidator.h"
#include "../utils/MessageHandler.h"

bool EndSlotWithinBorderValidator::validate(Board *board, Spot *start, Spot *end) {
    return end->getX() >= 0 && end->getX() <= 7 && end->getY() >= 0 && end->getY() <= 7;
}

std::string EndSlotWithinBorderValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
