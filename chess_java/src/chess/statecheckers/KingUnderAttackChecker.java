package chess.statecheckers;

import chess.Board;
import chess.Spot;
import chess.beans.KingIsUnderAttackResponse;
import chess.piecies.King;

import java.util.List;

public class KingUnderAttackChecker extends BaseStateChangeChecker {

    @Override
    public void check(Board board, Spot start, Spot end, List<String> messages) {
        Spot kingSpot = board.getKingSpot(!start.getPiece().isWhite());
        KingIsUnderAttackResponse kingUnderAttack = ((King) kingSpot.getPiece()).isKingUnderAttack();
        if(kingUnderAttack.isUnderAttack())
            messages.add(kingUnderAttack.getMessage());

    }
}
