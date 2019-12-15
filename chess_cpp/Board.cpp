//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "Board.h"
#include "piecies/Bishop.h"
#include "piecies/King.h"
using namespace std;
template<typename Base, typename T>
inline bool instanceof(const T*) {
    return is_base_of<Base, T>::value;
}
Board::Board()
{
    this->resetBoard();
}

Spot* Board::getBox(int x, int y) {

    return &boxes[x][y];
}

void Board::setBox(int x, int y, Spot spot){
    boxes[x][y] = spot;
}
void Board::resetBoard()
{
    boxes = new Spot*[8];
    for(int i = 0; i < 8; i++){
        boxes[i] = new Spot[8];
        for(int j = 0; j < 8; j++){
            boxes[i][j] = Spot(i,j, nullptr);
        }
    }
    // initialize white pieces
    boxes[0][0] = new Spot(0, 0, nullptr);
    boxes[0][1] = new Spot(0, 1, new Knight(true));
    boxes[0][2] = new Spot(0, 2, new Bishop(true));
    //...
    boxes[1][0] = new Spot(1, 0, new Pawn(true));
    boxes[1][1] = new Spot(1, 1, new Pawn(true));
    //...

    // initialize black pieces
    boxes[7][0] = new Spot(7, 0, new Rook(false));
    boxes[7][1] = new Spot(7, 1, new Knight(false));
    boxes[7][2] = new Spot(7, 2, new Bishop(false));
    //...
    boxes[6][0] = new Spot(6, 0, new Pawn(false));
    boxes[6][1] = new Spot(6, 1, new Pawn(false));
    //...

}

Spot* Board::getKingSpot(bool isWhite){
    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(boxes[i][j].getPiece() != nullptr
               && instanceof<King>(boxes[i][j].getPiece().get())
                                                    && boxes[i][j].getPiece().get()->isWhite() == isWhite)
            return &boxes[i][j];
        }
    }
    return nullptr;
}

Board::~Board() {
    for (int c = 0; c < 8; c++)
        delete[] boxes[c];
    delete[] boxes;

}
