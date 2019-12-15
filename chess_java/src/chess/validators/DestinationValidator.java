package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class DestinationValidator extends PieceMoveValidator {


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return end.getPiece() == null || end.getPiece().isWhite() == start.getPiece().isWhite();
    }

    @Override
    public String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
