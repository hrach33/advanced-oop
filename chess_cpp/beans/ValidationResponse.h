//
// Created by Hrach Khachatryan on 12/15/19.
//

#ifndef CHESS_VALIDATIONRESPONSE_H
#define CHESS_VALIDATIONRESPONSE_H


#include <string>

class ValidationResponse {

private:
    bool valid;
    std::string message;

public:
    ValidationResponse(bool valid);

    ValidationResponse(bool valid, std::string message);

    bool isValid();

    void setValid(bool valid);

    std::string getMessage();

    void setMessage(bool message);
};


#endif //CHESS_VALIDATIONRESPONSE_H
