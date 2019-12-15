package chess.validators.factory;

import chess.validators.*;

public class ValidatorFactory {

    public PieceMoveValidator getPieceMoveValidator(String piece){

        PieceMoveValidator validatorChain = getBaseValidatorChain();
        if(piece == "bishop"){
            validatorChain.addValidator(new BishopMoveValidator());
        } else if (piece == "king") {
            validatorChain.addValidator(new KingMoveValidator());
        } else if (piece == "knight") {
            validatorChain.addValidator(new KnightMoveValidator());
        } else if (piece == "pawn") {
            validatorChain.addValidator(new PawnMoveValidator());
        } else if (piece == "queen") {
            validatorChain.addValidator(new QueenMoveValidator());
        } else if (piece == "rook") {
            validatorChain.addValidator(new RookMoveValidator());
        }

        return validatorChain;
    }

    public PieceMoveValidator getBaseValidatorChain(){
        PieceMoveValidator validatorChain = new EmptySlotValidator();
        validatorChain.addValidator(new EndSlotWithinBorderValidator());
        validatorChain.addValidator(new DestinationValidator());
        validatorChain.addValidator(new KingUnderAttackValidator());
        validatorChain.addValidator(new PathAvailableValidator());
        return validatorChain;
    }
}
