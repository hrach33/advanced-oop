//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "KingIsUnderAttackResponse.h"
KingIsUnderAttackResponse::KingIsUnderAttackResponse(bool underAttack, std::string message) {
    this->underAttack = underAttack;
    this->message = message;
}

bool KingIsUnderAttackResponse::isUnderAttack() {
    return underAttack;
}

void KingIsUnderAttackResponse::setUnderAttack(bool underAttack) {
    this->underAttack = underAttack;
}

std::string KingIsUnderAttackResponse::getMessage() {
    return message;
}

void KingIsUnderAttackResponse::setMessage(std::string message) {
    this->message = message;
}
