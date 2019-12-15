package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class EmptySlotValidator extends PieceMoveValidator {

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return start != null && start.getPiece() != null;
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
