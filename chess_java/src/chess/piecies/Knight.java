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

}
