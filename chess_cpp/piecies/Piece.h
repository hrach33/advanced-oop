//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
#include <vector>
#include "../Board.h"

class Piece {

private:
    bool killed = false;
    bool white = false;
    std::shared_ptr<PieceMoveValidator> pieceMoveValidator;
public:

Piece(bool white);

bool isWhite();

void setWhite(bool white);

bool isKilled();

void setKilled(bool killed);

virtual ValidationResponse* canMove(Board* board*, Spot* start, Spot* end);

virtual std::vector<Spot> getPathSpots(Board* board, Spot* start, Spot* end) = 0;

virtual std::shared_ptr<PieceMoveValidator> getPieceMoveValidator() ;

void setPieceMoveValidator(std::shared_ptr<PieceMoveValidator> pieceMoveValidator);

virtual void move(Board board, Spot start, Spot end) = 0;

};


#endif //CHESS_PIECE_H
