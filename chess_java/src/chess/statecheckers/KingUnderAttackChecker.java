package chess.statecheckers;

import chess.Board;
import chess.Spot;
import chess.beans.KingIsUnderAttackResponse;
import chess.piecies.King;
import chess.piecies.Piece;

import java.util.List;

public class KingUnderAttackChecker extends BaseStateChangeChecker {

    @Override
    public void check(Board board, Spot start, Spot end, List<String> messages) {
        Spot kingSpot = board.getKingSpot(!start.getPiece().isWhite());

        Piece endPiece = end.getPiece();
        end.setPiece(start.getPiece());
        start.setPiece(null);

        KingIsUnderAttackResponse kingUnderAttack = ((King) kingSpot.getPiece()).isKingUnderAttack();
        if(kingUnderAttack.isUnderAttack())
            messages.add(kingUnderAttack.getMessage());

        start.setPiece(end.getPiece());
        end.setPiece(endPiece);

    }
}
