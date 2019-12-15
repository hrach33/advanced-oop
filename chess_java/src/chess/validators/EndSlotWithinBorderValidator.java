package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class EndSlotWithinBorderValidator extends PieceMoveValidator {
    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return end.getX() >= 0 && end.getX() <= 7 && end.getY() >= 0 && end.getY() <= 7;
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
