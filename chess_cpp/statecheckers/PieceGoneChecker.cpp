//
// Created by Hrach Khachatryan on 12/16/19.
//

#include "PieceGoneChecker.h"
#include "../piecies/Pawn.h"

using namespace std;

template<typename Base, typename T>
inline bool instanceof(const T *) {
    return is_base_of<Base, T>::value;
}

void check(Board *board, Spot *start, Spot *end, vector<string> messages) {
    if (end != nullptr && end->getPiece().get() != nullptr) {
        if (instanceof<Pawn>(end->getPiece().get()))
            messages.push_back("Pawn is gone");
        else
            messages.push_back("Piece is gone");

    }
}