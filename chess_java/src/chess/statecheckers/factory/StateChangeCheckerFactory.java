package chess.statecheckers.factory;

import chess.statecheckers.BaseStateChangeChecker;
import chess.statecheckers.KingUnderAttackChecker;
import chess.statecheckers.PieceGoneChecker;

public class StateChangeCheckerFactory {

    public BaseStateChangeChecker getStateChangeChecker(){
        BaseStateChangeChecker stateChangeChecker = new PieceGoneChecker();
        stateChangeChecker.addChecker(new KingUnderAttackChecker());

        return stateChangeChecker;
    }
}
