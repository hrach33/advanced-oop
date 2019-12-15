//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_KINGISUNDERATTACKRESPONSE_H
#define CHESS_KINGISUNDERATTACKRESPONSE_H


#include <string>

class KingIsUnderAttackResponse {
private:
    bool underAttack;
    std::string message;

public:
KingIsUnderAttackResponse(bool underAttack, std::string message);

bool isUnderAttack();

void setUnderAttack(bool underAttack);

std::string getMessage();

void setMessage(std::string message);

};


#endif //CHESS_KINGISUNDERATTACKRESPONSE_H
