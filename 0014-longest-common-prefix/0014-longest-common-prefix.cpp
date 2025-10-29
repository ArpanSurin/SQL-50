class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans;
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int minLength = min(first.size(), last.size());

        for(int i=0; i<minLength; i++){
            if(first[i] != last[i]){
                break;
            }
            ans += first[i];
        }
        return ans;
    }
};