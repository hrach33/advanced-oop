package chess.validators;

import chess.Board;
import chess.Spot;
import chess.piecies.King;
import chess.piecies.Piece;
import chess.utils.MessageHandler;

public class KingUnderAttackValidator extends PieceMoveValidator {

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        boolean isWhite = start.getPiece().isWhite();
        Piece endPiece = end.getPiece();
        end.setPiece(start.getPiece());
        start.setPiece(null);

        Spot kingSpot = board.getKingSpot(isWhite);
        King king = (King)kingSpot.getPiece();
        boolean kingIsUnderAttack = king.isKingUnderAttack().isUnderAttack();
        start.setPiece(end.getPiece());
        end.setPiece(endPiece);

        return !kingIsUnderAttack;
    }

    @Override
    public String getNotValidMessage() {
        return MessageHandler.getNoMessage();
    }
}
