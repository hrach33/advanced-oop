package chess.validators;

import chess.Board;
import chess.Spot;
import chess.piecies.Pawn;
import chess.piecies.Piece;
import chess.utils.MessageHandler;

public class PawnMoveValidator extends PieceMoveValidator {


    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        if((start.getX() == end.getX())) {
            if(end.getY() - start.getY() == 1)
                return true;
            if(((end.getY() - start.getY() == 2) && !((Pawn)(start.getPiece())).isMoved()))
                return true;

        }
        if((Math.abs(start.getX() - end.getX()) == 1) && (end.getY() - start.getY()) == 1) {
            if(end.getPiece() != null && end.getPiece().isWhite() != start.getPiece().isWhite())
                return true;
            if(end.getPiece() == null) {
                // en passant case
                Piece piece = board.getBox(end.getX(), end.getY() - 1).getPiece();
                if(piece instanceof Pawn){
                    return ((Pawn) piece).isEnPassant();
                }
            }
        }
        return false;

    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getNoMessage();
    }
}
