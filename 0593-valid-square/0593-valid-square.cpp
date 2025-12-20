class Solution {
public:
    int dist(vector<int>& a, vector<int>& b){
        int dx = a[0] - b[0];
        int dy = a[1] - b[1];
        return dx * dx + dy * dy;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> sqr = {
            dist(p1, p2), dist(p1, p3), dist(p1, p4),
            dist(p2, p3), dist(p2, p4),
            dist(p3, p4)
        };
        return sqr.size() == 2 && sqr.count(0) == 0;
    }
};