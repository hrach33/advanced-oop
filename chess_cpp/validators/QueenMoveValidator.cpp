//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "QueenMoveValidator.h"

bool QueenMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    return bishopMoveValidator->validate(board, start, end)
           || rookMoveValidator->validate(board, start, end);}

std::string QueenMoveValidator::getNotValidMessage() {
    return MessageHandler::getHellNoMessage();
}
