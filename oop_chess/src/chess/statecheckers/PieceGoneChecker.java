package chess.statecheckers;

import chess.Board;
import chess.Spot;
import chess.piecies.Pawn;

import java.util.List;

public class PieceGoneChecker extends BaseStateChangeChecker {

    @Override
    public void check(Board board, Spot start, Spot end, List<String> messages) {
        if(end != null && end.getPiece() != null) {
            if(end.getPiece() instanceof Pawn)
                messages.add("Pawn is gone");
            else
                 messages.add("Piece is gone");

        }

    }
}
