package chess.piecies;

import chess.Board;
import chess.Spot;

public class Bishop  extends Piece {
    public Bishop(boolean white) {
        super(white);
    }

    @Override
    public boolean canMove(Board board, Spot start, Spot end) {
        return false;
    }
}
