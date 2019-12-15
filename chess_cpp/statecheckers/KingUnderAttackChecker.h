//
// Created by Hrach Khachatryan on 12/16/19.
//

#ifndef CHESS_KINGUNDERATTACKCHECKER_H
#define CHESS_KINGUNDERATTACKCHECKER_H


#include "BaseStateChangeChecker.h"
#include "../beans/KingIsUnderAttackResponse.h"
#include "../piecies/King.h"

class KingUnderAttackChecker : BaseStateChangeChecker{
public:
    void check(Board* board, Spot* start, Spot* end, std::vector<std::string> messages);
};


#endif //CHESS_KINGUNDERATTACKCHECKER_H
