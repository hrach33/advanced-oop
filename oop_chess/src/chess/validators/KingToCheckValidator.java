package chess.validators;

import chess.Board;
import chess.Spot;
import chess.validators.beans.MessageHandler;

public class KingToCheckValidator extends PieceValidator {

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        boolean isWhite = start.getPiece().isWhite();

        return false;
    }

    @Override
    public String getNotValidMessage() {
        return MessageHandler.getNoMessage();
    }
}
