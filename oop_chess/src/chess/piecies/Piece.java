package chess.piecies;

import chess.Board;
import chess.Spot;
import chess.validators.PieceMoveValidator;
import chess.beans.ValidationResponse;

import java.util.List;

public abstract class Piece {

    private boolean killed = false;
    private boolean white = false;
    private PieceMoveValidator pieceMoveValidator;

    public Piece(boolean white)
    {
        this.setWhite(white);
    }

    public boolean isWhite()
    {
        return this.white == true;
    }

    public void setWhite(boolean white)
    {
        this.white = white;
    }

    public boolean isKilled()
    {
        return this.killed == true;
    }

    public void setKilled(boolean killed)
    {
        this.killed = killed;
    }

    public ValidationResponse canMove(Board board, Spot start, Spot end){
        return pieceMoveValidator.execute(board, start, end);
    }

    public abstract List<Spot> getPathSpots(Board board, Spot start, Spot end);

    public PieceMoveValidator getPieceMoveValidator() {
        return pieceMoveValidator;
    }

    public void setPieceMoveValidator(PieceMoveValidator pieceMoveValidator) {
        this.pieceMoveValidator = pieceMoveValidator;
    }

    public abstract void move(Board board, Spot start, Spot end);
}



