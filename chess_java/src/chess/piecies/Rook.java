package chess.piecies;

import chess.Board;
import chess.Spot;
import chess.utils.PathCalculator;

import java.util.List;

public class Rook extends Piece{

    private boolean isMoved;

    public Rook(boolean white) {
        super(white);
    }


    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
       return PathCalculator.getLinearPathSpots(board, start, end);
    }


    public boolean isMoved() {
        return isMoved;
    }

    public void setMoved(boolean moved) {
        isMoved = moved;
    }
}
