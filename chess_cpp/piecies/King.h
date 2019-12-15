//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H


#include "Piece.h"
#include "../beans/KingIsUnderAttackResponse.h"

class King: Piece {
private:
    bool castlingDone = false;

public:
    King(bool white);

    bool isCastlingDone();

     void setCastlingDone(bool castlingDone);



    std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end);

    void move(Board board, Spot start, Spot end);


    KingIsUnderAttackResponse* isKingUnderAttack();
};


#endif //CHESS_KING_H
