//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "EmptySlotValidator.h"

bool EmptySlotValidator::validate(Board *board, Spot *start, Spot *end) {
    return start != nullptr && start->getPiece() != nullptr;
}

std::string EmptySlotValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
