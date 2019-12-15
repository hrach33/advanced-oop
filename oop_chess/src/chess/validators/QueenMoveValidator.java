package chess.validators;

import chess.Board;
import chess.Spot;
import chess.utils.MessageHandler;

public class QueenMoveValidator extends PieceMoveValidator {


    private BishopMoveValidator bishopMoveValidator = new BishopMoveValidator();
    private RookMoveValidator rookMoveValidator = new RookMoveValidator();

    @Override
    public boolean validate(Board board, Spot start, Spot end) {
        return bishopMoveValidator.validate(board, start, end)
                || rookMoveValidator.validate(board, start, end);
    }

    @Override
    protected String getNotValidMessage() {
        return MessageHandler.getHellNoMessage();
    }
}
