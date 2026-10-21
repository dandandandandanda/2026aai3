//week07-3 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d =0; //0north 1east 2south 3west
        for (char c : instructions) {
            if (c=='R') d = (d+1) % 4;//right turn
            if (c=='L') d = (d-1+4) % 4;//left turn
            if (c=='G') {//forth
                if (d==0) y++;//north
                if (d==1) x++;//east
                if (d==2) y--;//south
                if (d==3) x--;//west
            }
        }
        //check if return
        if (x==0 && y==0) return true;//origin position
        if (d != 0) return true;//different direction yet also looping
        return false;//too far
    }
};
