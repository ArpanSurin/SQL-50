class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c : s){
            mp[c]++;
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string res;
        for(auto &p : vec){
            res.append(p.second, p.first);
        }
        return res;
    }
};