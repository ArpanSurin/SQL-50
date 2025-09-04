class Solution {
public:
    int findClosest(int x, int y, int z) {
        int pos1 = abs(z-x);
        int pos2 = abs(z-y);
        if(pos1 == pos2){
            return 0;
        }
        else if (pos1 < pos2){
            return 1;
        }
        else {
            return 2;
        }
    }
};