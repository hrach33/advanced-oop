//
// Created by Hrach Khachatryan on 12/15/19.
//

#include "ValidationResponse.h"
ValidationResponse::ValidationResponse(bool valid) {
    this->valid = valid;
}

ValidationResponse::ValidationResponse(bool valid, std::string message) {
    this->valid = valid;
    this->message = message;
}

bool ValidationResponse::isValid() {
    return valid;
}

void ValidationResponse::setValid(bool valid) {
    this->valid = valid;
}

std::string ValidationResponse::getMessage() {
    return message;
}

void ValidationResponse::setMessage(bool message) {
    this->message = message;
}
