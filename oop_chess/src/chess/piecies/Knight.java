package chess.piecies;

import chess.Board;
import chess.Spot;

import java.util.ArrayList;
import java.util.List;

public class Knight extends Piece {
    public Knight(boolean white)
    {
        super(white);
    }


    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
        return new ArrayList<>();
    }

    @Override
    public void move(Board board, Spot start, Spot end) {
        // Each piece is responsible for its logic of movement.
        // So the movement logic should be implemented here.
        // the method is not implemented, as the requirement for current task is only validation
    }
}
