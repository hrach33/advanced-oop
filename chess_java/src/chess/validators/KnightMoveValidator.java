package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class KnightMoveValidator extends PieceMoveValidator {


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        int x = Math.abs(start.getX() - end.getX());
        int y = Math.abs(start.getY() - end.getY());
        return x * y == 2;
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
