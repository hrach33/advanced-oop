//
// Created by Hrach Khachatryan on 12/16/19.
//

#include "BaseStateChangeChecker.h"

void BaseStateChangeChecker::addChecker(BaseStateChangeChecker *checker) {
    if (nextChecker == nullptr) {
        nextChecker = checker;
    } else {
        nextChecker->addChecker(checker);
    }
}

void BaseStateChangeChecker::execute(Board *board, Spot *start, Spot *end, std::vector<std::string> messages) {
    check(board, start, end, messages);
    if (nextChecker != nullptr)
        nextChecker->execute(board, start, end, messages);
}
