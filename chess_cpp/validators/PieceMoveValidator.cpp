//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "PieceMoveValidator.h"

ValidationResponse *PieceMoveValidator::execute(Board* board, Spot* start, Spot* end) {
    bool valid = validate(board, start, end);
    if(nextValidator == nullptr || !valid){
        return new ValidationResponse(valid, !valid ? getNotValidMessage() : nullptr);
    }
    return nextValidator->execute(board, start, end);

}

void PieceMoveValidator::addValidator(std::shared_ptr<PieceMoveValidator> validator) {
    if (nextValidator == nullptr) {
        nextValidator = validator;
    } else {
        nextValidator->addValidator(validator);
    }
}
