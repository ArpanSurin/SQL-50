class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int maxlen = 0;
        unordered_set<char> myset;
        while(r < s.size()){
            if(myset.find(s[r]) == myset.end()){
                myset.insert(s[r]);
                maxlen = max(maxlen, r-l+1);
                r++;
            }else{
                myset.erase(s[l]);
                l++;
            }
            // r++;
        }
        return maxlen;
    }
};