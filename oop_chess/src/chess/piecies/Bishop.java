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

    @Override
    public void move(Board board, Spot start, Spot end) {
        // Each piece is responsible for its logic of movement.
        // So the movement logic should be implemented here.
        // the method is not implemented, as the requirement for current task is only validation
    }
}
