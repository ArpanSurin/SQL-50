class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        string res = goal + goal;
        for(int i=0; i<res.size(); i++){
            string ans = res.substr(i, s.size());
            if(s == ans) return true;
        }
        return false;
    }
};