class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<string, int> map;
        // for(char c : s){
        //     map[c]++;
        // }
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};