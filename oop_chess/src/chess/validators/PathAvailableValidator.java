package chess.validators;


import chess.Board;
import chess.Spot;

public class PathAvailableValidator extends PieceValidator {

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return false;
    }

    @Override
    public String getNotValidMessage() {
        return null;
    }
}
