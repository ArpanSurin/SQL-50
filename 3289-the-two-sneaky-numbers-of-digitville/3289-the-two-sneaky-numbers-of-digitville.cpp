class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int n : nums){
            mp[n]++;
        }
        vector<int> res;
        for(auto &n : mp){
            if(n.second == 2){
                res.push_back(n.first);
            }
        }
        return res;
    }
};