package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class BishopMoveValidator extends PieceMoveValidator {


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return Math.abs(start.getX() - end.getX()) != 0 && Math.abs(start.getX() - end.getX()) == Math.abs(start.getY() - end.getY());
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
