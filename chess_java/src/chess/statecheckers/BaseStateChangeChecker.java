package chess.statecheckers;

import chess.Board;
import chess.Spot;

import java.util.List;

public abstract class BaseStateChangeChecker {

    private BaseStateChangeChecker nextChecker;

    public void addChecker(BaseStateChangeChecker checker) {
        if (nextChecker == null) {
            nextChecker = checker;
        } else {
            nextChecker.addChecker(checker);
        }
    }

    public void execute(Board board, Spot start, Spot end, List<String> messages){
        check(board, start, end, messages);
        if(nextChecker != null)
            nextChecker.execute(board, start, end, messages);
    }

    public abstract void check(Board board, Spot start, Spot end, List<String> messages) ;

}
