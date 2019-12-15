package chess.utils;

import chess.Board;
import chess.Spot;

import java.util.ArrayList;
import java.util.List;

public class PathCalculator {

    public static List<Spot> getDiagonalPathSpots(Board board,Spot start, Spot end){
        List<Spot> spots = new ArrayList();

        int xDir = (start.getX() - end.getY()) / Math.abs(start.getX() - end.getY());
        int yDir = (start.getY() - end.getY()) / Math.abs(start.getY() - end.getY());

        for(int x = start.getX() + xDir; x != end.getX(); x+=xDir){
            for(int y = start.getY() + yDir; y != end.getY(); y+=yDir){
                if(board.getBox(x,y) != null)
                    spots.add(board.getBox(x,y));
            }
        }

        return spots;
    }

    public static List<Spot> getLinearPathSpots(Board board,Spot start, Spot end){
        List<Spot> spots = new ArrayList();
        if(start.getX() == end.getX() && Math.abs(start.getY() - end.getY()) > 1) {
            int x = start.getX();
            for (int y = Math.min(start.getY(), end.getY()); y <= Math.max(start.getY(), end.getY()); y++) {
                if(board.getBox(x, y) != null)
                    spots.add(board.getBox(x, y));
            }
        } else if(start.getY() == end.getY() && Math.abs(start.getX() - end.getX()) > 1) {
            int y = start.getY();
            for (int x = Math.min(start.getX(), end.getX()); x <= Math.max(start.getX(), end.getX()); x++) {
                if(board.getBox(x, y) != null)
                    spots.add(board.getBox(x, y));
            }
        }
        return spots;
    }
}
