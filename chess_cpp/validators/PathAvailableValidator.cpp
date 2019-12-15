//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "PathAvailableValidator.h"
#include "../utils/MessageHandler.h"

bool PathAvailableValidator::validate(Board *board, Spot *start, Spot *end) {
    std::vector<Spot> onPathSpots = start->getPiece().get()->getPathSpots(board, start, end);
    return onPathSpots.size() == 0;
}

std::string PathAvailableValidator::getNotValidMessage() {
    return MessageHandler::getNoMessage();
}
