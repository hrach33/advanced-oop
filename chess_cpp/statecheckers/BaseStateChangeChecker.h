//
// Created by Hrach Khachatryan on 12/16/19.
//

#ifndef CHESS_BASESTATECHANGECHECKER_H
#define CHESS_BASESTATECHANGECHECKER_H


#include "../Board.h"
#include "../Spot.h"

class BaseStateChangeChecker {
private:
    BaseStateChangeChecker *nextChecker;

public:
    virtual void addChecker(BaseStateChangeChecker *checker);

    virtual void execute(Board *board, Spot *start, Spot *end, std::vector<std::string> messages);

    virtual void check(Board *board, Spot *start, Spot *end, std::vector<std::string> messages) = 0;

};


#endif //CHESS_BASESTATECHANGECHECKER_H
