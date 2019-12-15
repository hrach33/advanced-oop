//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "PawnMoveValidator.h"
#include "../piecies/Pawn.h"
#include "../utils/MessageHandler.h"

using namespace std;
template<typename Base, typename T>
inline bool instanceof(const T*) {
    return is_base_of<Base, T>::value;
}
bool PawnMoveValidator::validate(Board *board, Spot *start, Spot *end) {
    if((start->getX() == end->getX())) {
        if(end->getY() - start->getY() == 1)
            return true;
        if(((end->getY() - start->getY() == 2) && !((Pawn)(start->getPiece().get())).isMoved()))
            return true;

    }
    if((abs(start->getX() - end->getX()) == 1) && (end->getY() - start->getY()) == 1) {
        if(end->getPiece().get() != nullptr && end->getPiece().get()->isWhite() != start->getPiece()->isWhite())
            return true;
        if(end->getPiece().get() == nullptr) {
            // en passant case
            Piece* piece = board->getBox(end->getX(), end->getY() - 1)->getPiece().get();
            if(instanceof<Pawn>(piece)){
                return ((Pawn) piece).isEnPassant();
            }
        }
    }
    return false;

}

std::string PawnMoveValidator::getNotValidMessage() {
    return MessageHandler::getNoMessage();
}
