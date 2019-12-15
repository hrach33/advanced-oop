package chess.piecies;

import chess.Board;
import chess.Spot;
import chess.utils.PathCalculator;

import java.util.List;

public class Queen extends Piece{

    public Queen(boolean white) {
        super(white);
    }

    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
        if(start.getX() == end.getX() || start.getY() == end.getY())
            return PathCalculator.getLinearPathSpots(board, start, end);
        else
            return PathCalculator.getDiagonalPathSpots(board, start, end);
    }

    @Override
    public void move(Board board, Spot start, Spot end) {
        // Each piece is responsible for its logic of movement.
        // So the movement logic should be implemented here.
        // the method is not implemented, as the requirement for current task is only validation
    }
}
