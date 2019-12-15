//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "DestinationValidator.h"

bool DestinationValidator::validate(Board *board, Spot *start, Spot *end) {
    return end->getPiece() == nullptr || end->getPiece()->isWhite() == start->getPiece()->isWhite();
}

std::string DestinationValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
