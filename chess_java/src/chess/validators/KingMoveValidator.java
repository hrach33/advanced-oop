package chess.validators;

import chess.Board;
import chess.Spot;
import chess.piecies.King;
import chess.utils.MessageHandler;

public class KingMoveValidator extends PieceMoveValidator{


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        int x = Math.abs(start.getX() - end.getX());
        int y = Math.abs(start.getY() - end.getY());
        if(x + y == 1)
            return true;
        if(isCastlingMove(start, end))
            return isValidCastling(board, start, end);

        return false;
    }

    @Override
    public String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }

    private boolean isValidCastling(Board board,
                                    Spot start, Spot end)
    {

        if (((King)(start.getPiece())).isCastlingDone()) {
            return false;
        }

        // Logic for returning true or false
        return true;
    }

    private boolean isCastlingMove(Spot start, Spot end)
    {
        return Math.abs(end.getX() - start.getX()) > 1 && start.getY() == end.getY();
    }
}
