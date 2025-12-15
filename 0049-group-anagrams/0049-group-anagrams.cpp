class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            map[sorted_s].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& w : map){
            result.push_back(w.second);
        }

        return result;
    }
};