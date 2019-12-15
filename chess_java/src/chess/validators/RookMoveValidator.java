package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class RookMoveValidator extends PieceMoveValidator {

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return (start.getX() == end.getX() && Math.abs(start.getY() - end.getY()) > 0) ||
                (start.getY() == end.getY() && Math.abs(start.getX() - end.getX()) > 0);
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
