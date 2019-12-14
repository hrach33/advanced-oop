package chess.validators;

import chess.Board;
import chess.Spot;
import chess.validators.beans.ValidationResponse;

public abstract class PieceValidator {

    private PieceValidator nextValidator;


    public void addValidator(PieceValidator validator) {
        if (nextValidator == null) {
            nextValidator = validator;
        } else {
            nextValidator.addValidator(validator);
        }
    }

    public ValidationResponse execute(Board board, Spot start, Spot end) {
        boolean valid = validate(board, start, end);
        if(nextValidator == null || !valid){
            return new ValidationResponse(valid, !valid ? getNotValidMessage() : null);
        }
        return nextValidator.execute(board, start, end);

    }

    public abstract boolean validate(Board board, Spot start, Spot end);

    public abstract String getNotValidMessage();
}
