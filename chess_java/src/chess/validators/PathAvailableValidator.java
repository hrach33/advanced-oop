package chess.validators;


import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

import java.util.List;

public class PathAvailableValidator extends PieceMoveValidator {


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        List<Spot> onPathSpots = start.getPiece().getPathSpots(board, start, end);
        return onPathSpots == null || onPathSpots.isEmpty();
    }

    @Override
    public String getNotValidMessage() {
        return MessageHandler.getNoMessage();
    }
}
