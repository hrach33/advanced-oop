package chess.piecies;

import chess.Board;
import chess.Spot;

import java.util.ArrayList;
import java.util.List;

public class Pawn extends Piece{
    private boolean enPassant;
    private boolean isMoved;

    public Pawn(boolean white) {
        super(white);
    }

    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
        List<Spot> spots = new ArrayList<>();
        if(end.getY() - start.getY() == 2)
            spots.add(board.getBox(start.getX(), start.getY() + 1));

        return spots;
    }

    public boolean isEnPassant() {
        return enPassant;
    }

    public void setEnPassant(boolean enPassant) {
        this.enPassant = enPassant;
    }

    public boolean isMoved() {
        return isMoved;
    }

    public void setMoved(boolean moved) {
        isMoved = moved;
    }
}
