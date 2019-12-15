package chess.piecies;

import chess.Board;
import chess.Spot;
import chess.beans.KingIsUnderAttackResponse;

import java.util.ArrayList;
import java.util.List;

public class King extends Piece {

    private boolean castlingDone = false;

    public King(boolean white)
    {
        super(white);
    }

    public boolean isCastlingDone()
    {
        return this.castlingDone == true;
    }

    public void setCastlingDone(boolean castlingDone)
    {
        this.castlingDone = castlingDone;
    }


    @Override
    public List<Spot> getPathSpots(Board board, Spot start, Spot end) {
        return new ArrayList<>();
    }


    public KingIsUnderAttackResponse isKingUnderAttack(){
        // should check on all directions, whether it is under attack or not, with direction
        return new KingIsUnderAttackResponse(false, "Direction");
    }

}