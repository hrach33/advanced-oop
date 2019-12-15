package chess.beans;

public class KingIsUnderAttackResponse {
    private boolean underAttack;
    private String message;

    public KingIsUnderAttackResponse(boolean underAttack, String message) {
        this.underAttack = underAttack;
        this.message = message;
    }

    public boolean isUnderAttack() {
        return underAttack;
    }

    public void setUnderAttack(boolean underAttack) {
        this.underAttack = underAttack;
    }

    public String getMessage() {
        return message;
    }

    public void setMessage(String message) {
        this.message = message;
    }
}
