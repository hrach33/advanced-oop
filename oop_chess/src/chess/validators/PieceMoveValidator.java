package chess.validators;

import chess.Board;
import chess.Spot;
import chess.beans.ValidationResponse;

public abstract class PieceMoveValidator {

    private PieceMoveValidator nextValidator;


    public void addValidator(PieceMoveValidator validator) {
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

    protected abstract String getNotValidMessage();
}
