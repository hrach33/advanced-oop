package chess.piecies;

import chess.Board;
import chess.Spot;
import chess.utils.PathCalculator;

import java.util.List;

public class Bishop  extends Piece {
    public Bishop(boolean white) {
        super(white);
    }


    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
       return PathCalculator.getDiagonalPathSpots(board, start, end);
    }

}
