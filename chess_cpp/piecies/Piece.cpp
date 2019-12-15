//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Piece.h"
#include "../beans/ValidationResponse.h"
#include "../validators/PieceMoveValidator.h"


Piece::Piece(bool white) {
    this->setWhite(white);
}

bool Piece::isWhite() {
    return this->white == true;
}

void Piece::setWhite(bool white) {
    this->white = white;
}

bool Piece::isKilled() {
    return this->killed == true;
}

void Piece::setKilled(bool killed) {
    this->killed = killed;
}

ValidationResponse *Piece::canMove(Board *board, Spot *start, Spot *end) {
    return pieceMoveValidator.execute(board, start, end);
}


PieceMoveValidator Piece::getPieceMoveValidator() {
    return pieceMoveValidator;
}

void Piece::setPieceMoveValidator(std::shared_ptr<PieceMoveValidator> pieceMoveValidator) {
    this->pieceMoveValidator = pieceMoveValidator;
}

std::vector<std::string> move(Board* board, Spot* start, Spot* end){
    std::vector<std::string> messages ;
    baseStateChangeChecker->execute(board, start, end, messages);

    end->setPiece(start->getPiece());
    start->setPiece(nullptr);

    return messages;
}



